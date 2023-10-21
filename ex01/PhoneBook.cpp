/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:33:13 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/21 18:02:30 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>


int PhoneBook::print_contact(){
    if (index == 0) {
        std::cout << "No contacts found." << std::endl;
        return 1;
    }
    for (int i = 0; i < index ; i++)
    {
        std::cout << "CONTACT : " << i << "|" << std::setw(10);
        std::cout  << contacts[i].get_first_name()<< "|" << std::setw(10);
        std::cout  << contacts[i].get_last_name() << "|" << std::setw(10);
        std::cout  << contacts[i].get_nickname() << "|" << std::setw(10) << std::endl;
    }
    return 0;
}

void PhoneBook::print_all_contact(int i)
{
     if (i > index - 1)
        {
            std::cout << "WARNING -> " << "index OUT of RANGE" << std::endl;
            return ;
        }

        std::cout << "First Name: " << contacts[i].get_f << std::endl;
        std::cout << "Last Name: " << contacts[i].get_l << std::endl;
        std::cout << "Nickname: " << contacts[i].get_n << std::endl;
        std::cout << "Phone Number: " << contacts[i].get_p << std::endl;
        std::cout << "Darkest Secret: " << contacts[i].get_d<< std::endl;
}

void PhoneBook::add_contact() {
    std::string input_first_name;
    std::string input_last_name;
    std::string input_nickname;
    std::string input_phone_number;
    std::string input_darkest_secret;

    if (index >= 8) {
        for (int i = 0; i < 7; i++) {
            contacts[i] = contacts[i + 1];
        }
        index--;
    }
    std::cout << "Please enter the following information:" << std::endl;

    std::cout << "-> First Name: ";
    while(input_first_name.empty())
    {
        std::getline(std::cin, input_first_name);
        if (input_first_name.empty()) {
            std::cout  << "Please enter a first name: ";
        }
    }
    contacts->get_f = contacts[index].set_first_name(input_first_name);
    if (input_first_name.length() > 10) {
        input_first_name = input_first_name.substr(0, 9) + ".";
        contacts[index].set_first_name(input_first_name);
    }

    std::cout << "-> Last Name: ";
     while(input_last_name.empty()){
        std::getline(std::cin, input_last_name);
    if (input_last_name.empty()) {
        std::cout  << "Please enter a last name: ";
    }
    }
    contacts->get_l = contacts[index].set_last_name(input_last_name);
    if (input_last_name.length() > 10) {
        input_last_name = input_last_name.substr(0, 9) + ".";
    contacts[index].set_last_name(input_last_name);
    }

    std::cout << "-> Nickname: ";
     while(input_nickname.empty()){     
    std::getline(std::cin, input_nickname);
    if (input_nickname.empty()) {
        std::cout  << "Please enter a Nickname: ";
    }
    }
    contacts->get_n = contacts[index].set_nickname(input_nickname);
    if (input_nickname.length() > 10) {
        input_nickname = input_nickname.substr(0, 9) + ".";
        contacts[index].set_nickname(input_nickname);
    }

    std::cout << "-> Phone Number: ";
     while(input_phone_number.empty()){
    std::getline(std::cin, input_phone_number);
    if (input_phone_number.empty()) {
        std::cout  << "Please enter a Phone Number: ";
    }
    }
    contacts->get_p = contacts[index].set_phone_number(input_phone_number);
    if (input_phone_number.length() > 10) {
        input_phone_number = input_phone_number.substr(0, 10) + ".";
        contacts[index].set_phone_number(input_phone_number);
    }

    std::cout << "-> Darkest Secret: ";
     while(input_darkest_secret.empty()){
    std::getline(std::cin, input_darkest_secret);
    if (input_darkest_secret.empty()) {
        std::cout  << "Please enter a Darkest Secret: ";
    }
    }
    contacts->get_d= contacts[index].set_darkest_secret(input_darkest_secret);
    if (input_darkest_secret.length() > 10) {
        input_darkest_secret = input_darkest_secret.substr(0, 10) + ".";
        contacts[index].set_darkest_secret(input_darkest_secret);
    }

    index++;
    
}

void PhoneBook::search_contact()
{
    if (PhoneBook::print_contact ())
        return;
    std::cout << "Please enter the index of the contact you want to search for: ";
 
    int i;
    std::string str;
    std::getline(std::cin, str);
    // std::cin >> i;
    if ((str.c_str()[0] >= 'a' && str.c_str()[0] <= 'z' )|| (str.c_str()[0] >= 'A' && str.c_str()[0] <= 'Z'))
    {
        std::cout << "WARNING -> " << "Please enter a valid index" << std::endl;
        return ;
    }
    i = std::atoi(str.c_str());
    if (i < 0 || i > 8)
        std::cout << "WARNING -> " << "Please enter a valid index" << std::endl;
    else
        PhoneBook::print_all_contact(i);
}
int main()
{
    std::string command;
    PhoneBook phonebook;
    while (1)
    {
        std::cout << "Please enter a command : ";
        std::getline(std::cin, command);
        if (command == "ADD")
            phonebook.add_contact();
        else if (command == "EXIT")
        {
            std::cout << "WARNING -> " <<  "Exiting Phonebook" << std::endl;
            break;
        }
        else if (command == "SEARCH")
            phonebook.search_contact();

    }
    return (0);
}