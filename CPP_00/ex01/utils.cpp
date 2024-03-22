/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 11:10:42 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/22 17:38:46 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

bool isNotNumber(std::string &str)
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

int convertIndex(std::string s)
{
    int result = 0;
    if(s[1])
        return -1;
    if(s[0] >= '8')
        return -1;
   result =  result + s[0] - '0';
    return result;
}

std::string trunc(std::string data)
{
    if(data.size() > 10)
    {
        data = data.substr(0, 9);
        data.push_back('.');
    }
    return data;
}
