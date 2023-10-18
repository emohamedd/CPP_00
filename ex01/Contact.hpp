/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emohamed <emohamed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:54:03 by emohamed          #+#    #+#             */
/*   Updated: 2023/10/18 10:02:25 by emohamed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

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
    void set_first_name(std::string first_name);
    void set_last_name(std::string last_name);
    void set_nickname(std::string nickname);  
    void set_phone_number(std::string phone_number);
    void set_darkest_secret(std::string darkest_secret);
    
    // GETTERS
    std::string get_first_name();
    std::string get_last_name();
    std::string get_nickname();
    std::string get_phone_number();
    std::string get_darkest_secret();
};
#endif