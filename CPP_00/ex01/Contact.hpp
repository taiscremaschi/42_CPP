/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:10:08 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/22 11:10:11 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CONTACT_HPP
# define CONTACT_HPP

class Contact {
private:
    std::string _contact_nbr;
    std::string _first_name;
    std::string _last_name;
    std::string _nickname;
    std::string _darkest_secret;
public:
    Contact() {};
    Contact(std::string contact_nbr, std::string first_name, std::string last_name,
        std::string nickname, std::string darkest_secret)
        {
            _contact_nbr = contact_nbr;
            _first_name = first_name;
            _last_name = last_name;
            _nickname = nickname;
            _darkest_secret = darkest_secret;
        }
    std::string getFistName();
    std::string getLastName();
    std::string getNickname();

    ~Contact() {};
};

#endif