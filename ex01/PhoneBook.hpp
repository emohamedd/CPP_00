/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 12:43:44 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/18 08:52:14 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class Contact{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
public:
    // SETTERS
    void set_first_name(std::string first_name){
        this->first_name = first_name;
    };
    void set_last_name(std::string last_name)
    {
        this->last_name = last_name;
    };
    void set_nickname(std::string nickname){
        this->nickname = nickname;
    };
    void set_phone_number(std::string phone_number)
    {
        this->phone_number = phone_number;
    };
    void set_darkest_secret(std::string darkest_secret)
    {
        this->darkest_secret = darkest_secret;
    };
    
    // GETTERS
    std::string get_first_name(){
        return first_name;
    };
    std::string get_last_name(){
        return last_name;
    };
    std::string get_nickname(){
        return nickname;
    };
    std::string get_phone_number(){
        return phone_number;
    };
    std::string get_darkest_secret(){
        return darkest_secret;
    };
};

class PhoneBook{
    Contact contacts[8];
    int index;
public:
    void add_contact();
    void search_contact();
    void print_contact();
    void print_contact_with_index(int in);
};

#endif