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

Dog::Dog(const Dog& other) : Animal(other)
{
    type = other.type;
    std::cout << "Dog copy constructed" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        type = other.type;
    }
    std::cout << "Dog assigned" << std::endl;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Who let the dog out?" << std::endl;
}

void Dog::makeSound() const 
{
    std::cout << "BARK BARK GET OUT OF MY HOUSE BARK BARK" << std::endl << std::endl;
}