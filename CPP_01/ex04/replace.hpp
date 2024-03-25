/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:18:53 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/25 14:38:09 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
#define REPLACE_H

#include <string>
#include <iostream>

class Replace{
    private:
    std::string _filename;
    std::string _s1;
    std::string _s2;
    public:
    Replace();
    ~Replace();
    std::string getFile();
    std::string getS1();
    std::string getS2();
    void setFile(std::string filename);
    void setS1(std::string s1);
    void setS2(std::string s2);
};


#endif
