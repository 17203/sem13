//tiene la declaración completa de las clases con la siguiente estructura:
#include "clases.h"
#include <string>
using namespace std;
class Animal {
public: 
string especie;
Animal(string especie);
void saludar();
};

class Perro:public Animal{
public:
Perro();
};
class Gato:public Animal{
public:
Gato();
};
//Perro y Gato heredan de animal y tienen las mismas propiedades