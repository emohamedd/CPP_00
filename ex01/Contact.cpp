/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:54:17 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/21 17:52:23 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

// Contact contact;
std::string Contact::set_first_name(std::string first_name){
    this->first_name = first_name;
    return (this->first_name);
};
std::string Contact::set_last_name(std::string last_name)
{
    this->last_name = last_name;
    return (this->last_name);
};
std::string Contact::set_nickname(std::string nickname){
    this->nickname = nickname;
    return (this->nickname);
};  
std::string Contact::set_phone_number(std::string phone_number)
{
    this->phone_number = phone_number;
    return (this->phone_number);
};
std::string Contact::set_darkest_secret(std::string darkest_secret)
{
    this->darkest_secret = darkest_secret;
    return (this->darkest_secret);
};

std::string Contact::get_first_name(){
    return first_name;
};
std::string Contact::get_last_name(){
    return last_name;
};
std::string Contact::get_nickname(){
    return nickname;
};
std::string Contact::get_phone_number(){
    return phone_number;
};
 std::string Contact::get_darkest_secret(){
    return darkest_secret;
};
