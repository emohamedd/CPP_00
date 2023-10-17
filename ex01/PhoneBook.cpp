/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:33:13 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/17 19:55:24 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"


void PhoneBook::print_contact(){
    for (int i = 0; i < index ; i++)
    {
        std::cout << "CONTACT : " << "*"<< i << "*" << " | ";
        std::cout  << contacts[i].first_name << " | ";
        std::cout  << contacts[i].last_name << " | ";
        std::cout  << contacts[i].nickname << " | ";
        std::cout  << contacts[i].phone_number << " | ";
        std::cout  << contacts[i].darkest_secret << std::endl;
    }
}

void PhoneBook::print_contact_with_index(int i)
{
        if (i > index - 1)
        {
            std::cout << "WARNING -> " << "index OUT of RANGE" << std::endl;
            return ;
        }
        std::cout << "CONTACT : " << "*"<< i << "*" << " | ";
        std::cout  << contacts[i].first_name << " | ";
        std::cout  << contacts[i].last_name << " | ";
        std::cout  << contacts[i].nickname <<  std::endl;
}
void PhoneBook::add_contact()
{
    if (index >= 8)
    {
        for(int i = 0; i < 7; i++)
        {
            contacts[i] = contacts[i + 1];
        }
        index--;
    }

    std::cout << "Please enter the following information:" << std::endl;
    std::cout << "-> : First Name: ";
        std::getline(std::cin, contacts[index].first_name);
        if (contacts[index].first_name.empty()) {
                  std::cout << "CRASH "<< "Please enter a first name " << std::endl;
                return;
        }
    if (contacts[index].first_name.length() > 10) {
        contacts[index].first_name = contacts[index].first_name.substr(0, 10) + ".";
    }
    std::cout << "-> : Last Name: ";
        std::getline(std::cin, contacts[index].last_name);
        if (contacts[index].last_name.empty()) {
                std::cout << "CRASH "<< "Please enter a last name " << std::endl;
                return;
    }
    if (contacts[index].last_name.length() > 10) {
        contacts[index].last_name = contacts[index].last_name.substr(0, 10) + ".";
    }
    std::cout << "-> : Nickname: ";
        std::getline(std::cin, contacts[index].nickname);
        if (contacts[index].nickname.empty()) {
                  std::cout << "CRASH "<< "Please enter a Nickname" << std::endl;
                return;
    }
    if (contacts[index].nickname.length() > 10) {
        contacts[index].nickname = contacts[index].nickname.substr(0, 10) + ".";
    }
    std::cout << "-> : Phone Number: ";
        std::getline(std::cin, contacts[index].phone_number);
        if (contacts[index].phone_number.empty()) {
                  std::cout << "CRASH "<< "Please enter a Phone Number" << std::endl;
                return;
        }
    if (contacts[index].phone_number.length() > 10) {
        contacts[index].phone_number = contacts[index].phone_number.substr(0, 10) + ".";
    }
    std::cout << "-> : Darkest Secret: ";
        std::getline(std::cin, contacts[index].darkest_secret);
        if (contacts[index].darkest_secret.empty()) {
                  std::cout << "CRASH "<< "Please enter a Darkest Secret " << std::endl;
                return;;
        }
    if (contacts[index].darkest_secret.length() > 10) {
        contacts[index].darkest_secret = contacts[index].darkest_secret.substr(0, 10) + ".";
    }
    index++;
    
    PhoneBook::print_contact();
}

void PhoneBook::search_contact()
{
    std::cout << "Please enter the index of the contact you want to search for: ";
    int i;
    std::cin >> i;
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