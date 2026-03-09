/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:19:35 by fefo              #+#    #+#             */
/*   Updated: 2025/08/14 18:16:04 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain())
{
    type = "Cat";
    std::cout << "a wild Cat just spawned!" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    brain = new Brain(*other.brain);
    type = other.type;
    std::cout << "Cat copy constructed!" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        Animal::operator=(other);
        type = other.type;
        if (brain)
            delete brain;
        brain = new Brain(*other.brain);
    }
    std::cout << "Cat assigned!" << std::endl;
    return *this;
}

Cat::~Cat()
{
    if (brain)
        delete brain;
    brain = 0;
    std::cout << "Cat: Where did the cat go?" << std::endl;
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

std::string Cat::getIdea(int i) const
{
    return brain->getIdea(i);
}

Brain* Cat::getBrain()
{
    return brain;
}

const Brain* Cat::getBrain() const
{
    return brain;
}

void WrongCat::makeSound() const
{
    std::cout << "Can i get a dollar?" << std::endl << std::endl;
}
