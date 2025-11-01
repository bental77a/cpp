/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 00:35:00 by mohben-t          #+#    #+#             */
/*   Updated: 2025/11/01 10:38:47 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>

class Contact
{
    private:
    
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        int setValue();
        int pars_contact_fields(std::string &str);
        int  pars_phoneNumber(std::string str);
        int contact_fields(std::string str, std::string &fie);
        void printContact();
        void chooseContack();
};

class PhoneBook
{
    private:
        
    public:
        void    searchContact();
        Contact contact[8];
        int count;
};
