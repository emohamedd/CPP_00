/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cPP                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:33:13 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/16 13:44:19 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add_contact()
{
    index = 0;
    std::cout << "Please enter the following information:" << std::endl;
    std::cout << "-> : First Name: ";
    std::getline(std::cin, contacts[index].first_name);
    std::cout << "-> : Last Name: ";
    std::getline(std::cin, contacts[index].last_name);
    std::cout << "-> : Nickname: ";
    std::getline(std::cin, contacts[index].nickname);
    std::cout << "-> : Phone Number: ";
    std::getline(std::cin, contacts[index].phone_number);
    std::cout << "-> : Darkest Secret: ";
    std::getline(std::cin, contacts[index].darkest_secret);
    index++;
    if (index == 8)
        index = 0;
    
}
void PhoneBook::print_contact(){
    for (int i = 0; i < index ; i++)
    {
        std::cout << "CONTACT : " << i << " | ";
        std::cout  << contacts[i].first_name << " | ";
        std::cout  << contacts[i].last_name << " | ";
        std::cout  << contacts[i].nickname << " | ";
        std::cout  << contacts[i].phone_number << " | ";
        std::cout  << contacts[i].darkest_secret << std::endl;
    }
    std::cout << std::endl;
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
        std::cout << "Please enter a command: ";
        std::getline(std::cin, command);
        if (command == "ADD")
            phonebook.add_contact();
        phonebook.print_contact();
        
        // else if (command == "SEARCH")
        //     phonebook.search_contact();
        // else if (command == "EXIT")
        //     phonebook.exit();
    }
    return (0);
}