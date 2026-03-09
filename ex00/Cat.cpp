/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:19:35 by fefo              #+#    #+#             */
/*   Updated: 2025/08/13 12:59:45 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
    type = "Cat";
    std::cout << "a wild Cat just spawned!" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    type = other.type;
    std::cout << "Cat copy constructed" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        type = other.type;
    }
    std::cout << "Cat assigned" << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Where did the cat go?" << std::endl;
}

void Cat::makeSound() const 
{
    std::cout << "Meeeeeeeeoooooooow" << std::endl << std::endl;
}


WrongCat::WrongCat() : WrongAnimal()
{
    type = "WrongCat";
    std::cout << "This cat is kynda strange..." << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    type = other.type;
    std::cout << "WrongCat copy constructed" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
    {
        WrongAnimal::operator=(other);
        type = other.type;
    }
    std::cout << "WrongCat assigned" << std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "looks like the STRANGE CAT vanished" << std::endl;
}
