/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:19:06 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/25 16:57:28 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"
#include <iostream>
#include <fstream>


std::string  replaceStr(std::string buff, Replace data)
{
    int i = 0;
    int j = 0;
    int temp = 0;
    bool flag  = false;
    std::string result;

    while(i < (int)buff.size())
    {
        j = 0;
        std::cout << "passou\n" << buff[i] << std::endl;
        if(buff[i] == data.getS1()[j])
        {
            temp = i;
            while(buff[i] == data.getS1()[j])
            {
                if(data.getS1()[j + 1] == '\0')
                    flag = true;
                i++;
                j++;
            }
            if(flag == true)
            {
                result += data.getS2(); 
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
    Replace replace;
    std::string buff;
    std::string filenameReplace;
    if(ac != 4)
    {
        std::cerr << "wrong parameter numbers" << std::endl;
        return (1);
    }

    replace.setFile(av[1]);
    replace.setS1(av[2]);
    replace.setS2(av[3]);

    std::ifstream file(replace.getFile().c_str());
    if(!file)
    {
        std::cerr << "error in file" << std::endl;
        return 1;
    }
    filenameReplace = replace.getFile() + ".replace";
    std::ofstream output(filenameReplace.c_str());
    while(std::getline(file, buff))
    {
       std::string result = replaceStr(buff, replace);
        std::cout << result << std::endl;
        //output.write(buff, sizeBuffer);
    }
    
    return 0;
    
}