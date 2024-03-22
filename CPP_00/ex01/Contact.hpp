/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:10:08 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/22 17:34:44 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <cctype> 
#include <iomanip> 

#define RESET   "\033[0m"
#define RED     "\033[31m"      
#define GREEN   "\033[32m"      
#define BLUE    "\033[34m"      
#define MAGENTA "\033[35m"      
#define CYAN    "\033[36m"      

class Contact {

private:

    std::string _contactNbr;
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _darkestSecret;

public:

    Contact();
    Contact(std::string contactNbr, std::string firstName, std::string lastName,
        std::string nickname, std::string darkestSecret);
    
    std::string getNbr();
    std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
    std::string getSecret();
    void printContact();

    ~Contact();
};

#endif