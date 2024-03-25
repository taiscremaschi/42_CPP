/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:18:53 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/25 14:11:56 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
#define REPLACE_H

#include <string>
#include <iostream>

class replace{
    private:
    std::string filename;
    std::string s1;
    std::string s2;
    public:
    replace();
    ~replace();
    std::string getFile();
    std::string getS1();
    std::string getS2();
    
};


#endif
