/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:01:18 by fefo              #+#    #+#             */
/*   Updated: 2025/08/13 12:48:06 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"


int main()
{
    const Animal* average_animal = new Animal();
    const Animal* dog1 = new Dog();
    const Animal* cat1 = new Cat();
    const WrongAnimal* strange_animal = new WrongAnimal();
    const WrongAnimal* wrong_cat_as_animal = new WrongCat(); // Demonstrates lack of polymorphism
    const WrongCat* strange_cat = new WrongCat();
    
    std::cout << dog1->getType() << ": ";
    dog1->makeSound();
    std::cout << cat1->getType() << ": ";
    cat1->makeSound(); //will output the cat sound!
    std::cout << average_animal->getType() << ": ";
    average_animal->makeSound();
    
    std::cout << "\n--- Testing WrongAnimal (no polymorphism) ---" << std::endl;
    std::cout << strange_animal->getType() << ": ";
    strange_animal->makeSound();
    std::cout << wrong_cat_as_animal->getType() << " (as WrongAnimal*): ";
    wrong_cat_as_animal->makeSound(); // Will call WrongAnimal::makeSound(), not WrongCat's!
    std::cout << strange_cat->getType() << " (as WrongCat*): ";
    strange_cat->makeSound();

    delete average_animal;
    delete dog1;
    delete cat1;
    delete strange_animal;
    delete wrong_cat_as_animal;
    delete strange_cat;

    return 0;
}