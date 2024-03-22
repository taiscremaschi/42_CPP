/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:10:42 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/22 12:21:39 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

bool is_not_number(std::string &str)
{
    int i = 0;
    if(!str[i])
        return false;
    while(str[i])
    {
        if(!isdigit(str[i]))
            return false;
        i++;
    }
    return true;
}

int ft_atoi(std::string s)
{
    int result = 0;
    if(s[1])
        return -1;
    if(s[0] >= '8')
        return -1;
   result =  result + s[0] - '0';
    return result;
}
