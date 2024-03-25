/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 18:04:59 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/25 18:52:38 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(){
    std::cout << "I love having extra bacon for my 7XL-double-cheese. I really do!" << std::endl;
}

void Harl::info(){
    std::cout << "I cannot believe adding extra bacon costs more money. If you did, I wouldn't be asking for more!" << std::endl;
}
void Harl::warning(){
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;

}

void Harl::error(){
     std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
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