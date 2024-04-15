//Tiene la implementacion de los constructores de las 3 clases y el método void saludar de Animal.
#include "animales.h"
#include <iostream>
using namespace std;

Animal::Animal(string esp){
    this->especie=esp;
}
void Animal::saludar(){
cout << "Hola,como te va?" << endl;
}
Perro::Perro():Animal("Perro"){}
Gato::Gato():Animal("Gato"){}

void Perro::saludar(){
    cout << "guao" << endl;
}
void Gato::saludar(){
    cout << "miau" << endl;
}


