/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:57:23 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/03 12:24:38 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl say;

    if(ac != 2)
    {
        std::cout << "error, insert just one parameter please" << std::endl;
        return 1;
    }
    say.complain(av[1]);
    
    return 0;
}