/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:18:58 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/03/25 14:37:29 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace(){ 
}

Replace::~Replace(){
}

std::string Replace::getFile(){
    return _filename;
}

std::string Replace::getS1(){
    return _s1;
}

std::string Replace::getS2(){
    return _s2;
}

void Replace::setFile(std::string filename){
    _filename = filename;
}

void Replace::setS1(std::string s1){
    _s1 = s1;
}

void Replace::setS2(std::string s2){
    _s2 = s2;
}