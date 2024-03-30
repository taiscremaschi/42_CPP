/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:04:59 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/26 09:00:23 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(){
    std::cout << "I really wanted to make dinner when I got home today!" << std::endl;
}

void Harl::info(){
    std::cout << "Who left this kitchen upside down? There are pancakes on the ceiling!" << std::endl;
}
void Harl::warning(){
    std::cout << "What do you mean you're going to football now and you're going to leave this kitchen like this?" << std::endl;

}

void Harl::error(){
     std::cout << "We need to talk." << std::endl;
}

void Harl::complain(std::string level){
    
    bool flag = false;
    std::string array[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::* func[4]) (void)  = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for(int i = 0; i < 4; i++){
        if(level == array[i])
        {
            (this->*func[i])();
            flag = true;
        }
    }
    if(flag == false)
        std::cout << "invalid level" << std::endl;
}