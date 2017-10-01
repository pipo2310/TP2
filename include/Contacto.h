#ifndef CONTACTO_H
#define CONTACTO_H
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include "VectorNumeros.h"

using namespace std;

class Contacto
{
public:
	Contacto();
	string getData();
	void setData(string,string,string,string,string,int);

	 string nombre;
     string apellido;
     string tipo;
     string email;
     VectorNumeros numeros;

};


#endif // ESTUDIANTE_H
