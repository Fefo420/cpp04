/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:12:19 by fefo              #+#    #+#             */
/*   Updated: 2025/08/13 12:58:40 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") 
{
    std::cout << "Average Animal created" << std::endl;
}

Animal::~Animal() 
{
    std::cout << "Animal destroyed" << std::endl;
}

void Animal::makeSound() const 
{
    std::cout << "Boho or whatever average Animals Sound is" << std::endl << std::endl;
}


WrongAnimal::WrongAnimal() : type("Wrong Animal")
{
    std::cout << "WrongAnimal created" << std::endl;
}

WrongAnimal::~WrongAnimal() 
{
    std::cout << "WrongAnimal destroyed" << std::endl;
}

