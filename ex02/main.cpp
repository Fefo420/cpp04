/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 11:01:18 by fefo              #+#    #+#             */
/*   Updated: 2025/08/14 18:45:32 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"



int main()
{
    // Animal a; // Uncommenting this line should make a compile error. 
                    //cannot declare variable 'a' to be of abstract type 'Animal'
    std::cout << std::endl << "If you see this, that means we good" << std::endl;
    
    std::cout << std::endl << "--- Polymorphic Array Test ---" << std::endl;
    const int size = 10;
    Animal* animals[size];
    for (int i = 0; i < size; ++i) {
        if (i < size / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }
    std::cout << std::endl << "--- Sound Test ---" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << animals[i]->getType() << ": ";
        animals[i]->makeSound();
    }
    std::cout << std::endl << "--- Deletion Test ---" << std::endl;
    for (int i = 0; i < size; ++i)
        delete animals[i];

    std::cout << std::endl << "--- Deep Copy Test (Dog) ---" << std::endl;
    Dog dog1;
    dog1.getBrain()->setIdea(0, "I want a bone!");
    Dog dog2 = dog1; // Copy constructor
    dog2.getBrain()->setIdea(0, "I want to chase a cat!");
    std::cout << "dog1 idea[0]: " << dog1.getBrain()->getIdea(0) << std::endl;
    std::cout << "dog2 idea[0]: " << dog2.getBrain()->getIdea(0) << std::endl;

    std::cout << std::endl << "--- Deep Copy Test (Cat) ---" << std::endl;
    Cat cat1;
    cat1.getBrain()->setIdea(0, "Nap time!");
    Cat cat2;
    cat2 = cat1; // Assignment operator
    cat2.getBrain()->setIdea(0, "Climb the curtain!");
    std::cout << "cat1 idea[0]: " << cat1.getBrain()->getIdea(0) << std::endl;
    std::cout << "cat2 idea[0]: " << cat2.getBrain()->getIdea(0) << std::endl;

    std::cout << std::endl << "--- Leak Check: Single Allocation/Deletion ---" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j; // should not leak
    delete i;

    std::cout << std::endl << "All tests done!" << std::endl;
    return 0;
}
