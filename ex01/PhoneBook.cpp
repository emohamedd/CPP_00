/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:33:13 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/18 14:43:10 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


int PhoneBook::print_contact(){
    if (index == 0) {
        std::cout << "No contacts found." << std::endl;
        return 1;
    }
    for (int i = 0; i < index ; i++)
    {
        std::cout << "CONTACT : " << i << "*" << " | ";
        std::cout  << contacts[i].get_first_name()<< " | ";
        std::cout  << contacts[i].get_last_name() << " | ";
        std::cout  << contacts[i].get_nickname() << std::endl;
    }
    return 0;
}

void PhoneBook::print_contact_with_index(int i)
{
        if (i > index - 1)
        {
            std::cout << "WARNING -> " << "index OUT of RANGE" << std::endl;
            return ;
        }
        std::cout << "CONTACT : " << i << "*" << " | ";
        std::cout  << contacts[i].get_first_name() << " | ";
        std::cout  << contacts[i].get_last_name() << " | ";
        std::cout  << contacts[i].get_nickname() <<  std::endl;
}
void PhoneBook::add_contact() {
    if (index >= 8) {
        for (int i = 0; i < 7; i++) {
            contacts[i] = contacts[i + 1];
        }
        index--;
    }

    std::string input;
    std::cout << "Please enter the following information:" << std::endl;

    std::cout << "-> First Name: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "CRASH " << "Please enter a first name " << std::endl;
        return;
    }
    if (input.length() > 10) {
        input = input.substr(0, 10) + ".";
    }
    contacts[index].set_first_name(input);

    std::cout << "-> Last Name: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "CRASH " << "Please enter a last name " << std::endl;
        return;
    }
    if (input.length() > 10) {
        input = input.substr(0, 10) + ".";
    }
    contacts[index].set_last_name(input);

    std::cout << "-> Nickname: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "CRASH " << "Please enter a Nickname" << std::endl;
        return;
    }
    if (input.length() > 10) {
        input = input.substr(0, 10) + ".";
    }
    contacts[index].set_nickname(input);

    std::cout << "-> Phone Number: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "CRASH " << "Please enter a Phone Number" << std::endl;
        return;
    }
    if (input.length() > 10) {
        input = input.substr(0, 10) + ".";
    }
    contacts[index].set_phone_number(input);

    std::cout << "-> Darkest Secret: ";
    std::getline(std::cin, input);
    if (input.empty()) {
        std::cout << "CRASH " << "Please enter a Darkest Secret " << std::endl;
        return;
    }
    if (input.length() > 10) {
        input = input.substr(0, 10) + ".";
    }
    contacts[index].set_darkest_secret(input);

    index++;
    
    // PhoneBook::print_contact();
}

void PhoneBook::search_contact()
{
    if (PhoneBook::print_contact ())
        return;
    std::cout << "Please enter the index of the contact you want to search for: ";
 
    int i;
    std::cin >> i;
    if (std::cin.eof())
    {
        std::cout << "WARNING -> " << "Please enter an index" << std::endl;
        return ;
    }
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cout << "WARNING -> " << "Please enter a valid index" << std::endl;
        return ;
    }
    else if (i > 8)
        std::cout << "WARNING -> " << "Please enter a valid index" << std::endl;
    else
        print_contact_with_index(i);
}
int main()
{
    std::string command;
    PhoneBook phonebook;
    while (1)
    {
        std::cout << "Please enter a command : ";
        std::getline(std::cin, command);
        // if (command != "ADD" && command != "SEARCH" && command != "EXIT")
        //     std::cout << "WARNING -> " << "Please enter a valid command" << std::endl;
        if (command == "ADD")
            phonebook.add_contact();
        if (command == "EXIT")
        {
            std::cout << "WARNING -> " <<  "Exiting Phonebook" << std::endl;
            break;
        }
        if (command == "SEARCH")
                phonebook.search_contact();

    }
    return (0);
}