/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbolzan- <tbolzan-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 14:17:47 by tbolzan-          #+#    #+#             */
/*   Updated: 2024/04/05 16:13:39 by tbolzan-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include "Animal.hpp"

class Brain {
private:
    std::string _ideas[100];

public:
    Brain();
    ~Brain();
    Brain(const Brain& other);
    Brain &operator=(const Brain& other);
    std::string *getIdeas();
    void	setIdeas(std::string s);

};

#endif