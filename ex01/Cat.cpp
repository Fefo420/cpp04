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
    brain = nullptr;
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

WrongCat::~WrongCat()
{
    std::cout << "looks like the STRANGE CAT vanished" << std::endl;
}
