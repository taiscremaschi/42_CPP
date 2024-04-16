/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:54:44 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/16 12:03:15 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
private:

public:
    WrongCat(); 
    WrongCat(const WrongCat &other); 
    ~WrongCat(); 
    WrongCat &operator=(const WrongCat &other);   
    void makeSound() const;
};


#endif