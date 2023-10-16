/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:33:13 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/16 16:21:23 by emohamed         ###   ########.fr       */
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

void PhoneBook::add_contact()
{
    std::cout << "Please enter the following information:" << std::endl;
    std::cout << "-> : First Name: ";
    while (contacts[index].first_name.empty()) {
        std::getline(std::cin, contacts[index].first_name);
        if (contacts[index].first_name.empty()) {
            std::cout << "Please enter the first name: ";
        }
    }
    std::cout << "-> : Last Name: ";
    while (contacts[index].last_name.empty()) {
        std::getline(std::cin, contacts[index].last_name);
        if (contacts[index].last_name.empty()) {
            std::cout << "Please enter the last name: ";
        }
    }
    std::cout << "-> : Nickname: ";
    while (contacts[index].nickname.empty()) {
        std::getline(std::cin, contacts[index].nickname);
        if (contacts[index].nickname.empty()) {
            std::cout << "Please enter the nickname: ";
        }
    }
    std::cout << "-> : Phone Number: ";
    while (contacts[index].phone_number.empty()) {
        std::getline(std::cin, contacts[index].phone_number);
        if (contacts[index].phone_number.empty()) {
            std::cout << "Please enter the phone number: ";
        }
    }
    std::cout << "-> : Darkest Secret: ";
    while (contacts[index].darkest_secret.empty()) {
        std::getline(std::cin, contacts[index].darkest_secret);
        if (contacts[index].darkest_secret.empty()) {
            std::cout << "Please enter the darkest secret: ";
        }
    }
    index++;
    if (index == 8)
        index = 0;
    
    PhoneBook::print_contact();
}

// void PhoneBook::search_contact()
// {
    
// }
int main()
{
    std::string command;
    PhoneBook phonebook;
    while (1)
    {
        std::cout << "Please enter a command : ";
        std::getline(std::cin, command);
        if (command != "ADD" && command != "SEARCH" && command != "EXIT")
            std::cout << "WARNING -> " << "Please enter a valid command" << std::endl;
        if (command == "ADD")
            phonebook.add_contact();
        if (command == "EXIT")
        {
            std::cout << "WARNING -> " <<  "Exiting Phonebook" << std::endl;
            break;
        }
        // if (command == "SEARCH")
        //         phonebook.search_contact();
        // phonebook.print_contact();
    }
    return (0);
}