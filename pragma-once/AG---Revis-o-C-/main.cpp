
#include <iostream>
#include "zoo.hpp"
#include "animal.hpp"

int main()
{
    Zoo myZoo;
    Animal myAnimal("mogie", 10);
    myZoo.addAnimals(myAnimal);
    std::cout << "teste";
}