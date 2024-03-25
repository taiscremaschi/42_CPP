/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:19:06 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/25 17:52:31 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include <iostream>
#include <fstream>

std::string  replaceStr(std::string buff, std::string s1, std::string s2)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    bool flag  = false;
    std::string result;

    while(i < (int)buff.size())
    {
        j = 0;
        if(buff[i] == s1[j])
        {
            temp = i;
            while(buff[i] == s1[j])
            {
                i++;
                j++;
                if(s1[j] == '\0')
                {
                    flag = true;
                    break;
                }
            }
            if(flag == true)
            {
                result += s2; 
                flag = false;           
            }
            else
            {
                i = temp;
                result += buff[i];
                i++;
            }
        }
        else 
        {
            result += buff[i];
            i++;
        }
    }
    return result;
}

int main(int ac, char **av)
{
    std::string buff;
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string filenameReplace = filename + ".replace";

    if(ac != 4)
    {
        std::cerr << "wrong parameter numbers" << std::endl;
        return (1);
    }
    std::ifstream file(filename.c_str());
    if(!file)
    {
        std::cerr << "error in file" << std::endl;
        return 1;
    }
    std::ofstream output(filenameReplace.c_str());
    bool first = true;
    std::string result;
    while(std::getline(file, buff))
    {
        if (first == false)
            result = "\n";
        result += replaceStr(buff, s1, s2);
        output.write(result.c_str(), result.size());
        first = false;
    }

    return 0;
}