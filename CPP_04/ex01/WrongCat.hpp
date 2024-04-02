/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 15:54:44 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/01 15:56:31 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
private:

public:
    WrongCat(); 
    WrongCat(const WrongCat &other); 
    ~WrongCat(); 
    WrongCat &operator=(WrongCat &other);   
    void makeSound() const;
};


#endif