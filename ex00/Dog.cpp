/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:24:54 by fefo              #+#    #+#             */
/*   Updated: 2025/08/13 12:45:14 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
    type = "Dog";
    std::cout << "a wild Dog just spawned!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Who let the dog out?" << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "BARK BARK GET OUT OF MY HOUSE BARK BARK" << std::endl << std::endl;
}