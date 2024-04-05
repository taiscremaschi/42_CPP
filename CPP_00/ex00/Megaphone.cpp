/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:39:32 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/02 14:09:08 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    
    if(ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (0);
    }
    while(av[i])
    {
        j = 0;
        while (av[i][j]!= '\0')
        {
            std::cout << (char)toupper(av[i][j]);
            j++;
        }
        std::cout << " ";
        i++;
    }
    std::cout << "\n";
    return (0);
}
