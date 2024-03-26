/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:04:59 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/26 09:02:01 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(){
    std::cout << "[DEBUG]" << std::endl;
    std::cout << "I really wanted to make dinner when I got home today!" << std::endl;
}

void Harl::info(){
    std::cout << "[INFO]" << std::endl;
    std::cout << "Who left this kitchen upside down? There are pancakes on the ceiling!" << std::endl;
}
void Harl::warning(){
    std::cout << "[WARNING]" << std::endl;
    std::cout << "What do you mean you're going to football now and you're going to leave this kitchen like this?" << std::endl;

}

void Harl::error(){
     std::cout << "[ERROR]" << std::endl;
     std::cout << "We need to talk." << std::endl;
}

void Harl::complain(std::string level){
    
    int i = 0;
    std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    while(i < 4)
    {
        if(level == array[i])
            break ;
        i++;
        
    }
    if(i >= 4)
        std::cout << "[She's probably right and you're wrong]" << std::endl;

    switch (i)
    {
        case 0:
        {
            debug();
            info();
            warning();
            error();
            break ;            
        }
        case 1:
        {
            info();
            warning();
            error();
            break;
        }
        case 2:
        {
            warning();
            error();
            break;
        }
        case 3:
        {
            error();
            break;
        }
        default:
            break;
    }
}