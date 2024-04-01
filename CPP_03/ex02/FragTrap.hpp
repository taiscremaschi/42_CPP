/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 12:39:56 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/01 13:02:43 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
private:

public:
    FragTrap(); 
    FragTrap(const std::string name); 
    FragTrap(const FragTrap &other); 
    ~FragTrap(); 
    FragTrap &operator=(FragTrap &other); 
    void highFivesGuys(void);
};



#endif