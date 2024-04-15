//Tiene la implementacion de los constructores de las 3 clases y el método void saludar de Animal.
#include "animales.h"
#include <iostream>
using namespace std;

void Animal::saludar(){
cout << "Hola, soy un" << endl;
}
void Perro::saludar(){
cout << "Hola, soy un perro" << endl;
}
void Gato::saludar(){
cout << "Hola, soy un gato" << endl;
}
Animal::Animal(string esp){
    especie=esp;
}
Perro::Perro(string esp){
especie=esp;
}
Gato::Gato(string esp){
especie=esp;
}