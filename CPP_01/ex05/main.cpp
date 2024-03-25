/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 17:57:23 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/25 18:51:10 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl say;
    
    say.complain("DEBUG");
    say.complain("INFO");
    say.complain("WARNING");
    say.complain("ERROR");
    say.complain("HI");
    
    return 0;
}