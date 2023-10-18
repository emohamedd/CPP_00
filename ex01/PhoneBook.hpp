/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:43:44 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/18 19:22:28 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
    Contact contacts[8];
    int index;
public:
    void add_contact();
    void search_contact();
    int print_contact();
    void print_all_contact(int i);
    void print_contact_with_index(int in);
};

#endif