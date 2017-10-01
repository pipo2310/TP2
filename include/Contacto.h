#ifndef CONTACTO_H
#define CONTACTO_H
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

//Prop�sito: ver dos formas para sobrecargar el operador de comparaci�n
class Contacto
{
public:
	Contacto();
	Contacto(string n, string a, string t, string e);
	string getData();
	void setData(string,string,string,string);
	//bool operator<(const Estudiante& est) const;

	 string nombre;
     string apellido;
     string tipo;
     string email;

};


#endif // ESTUDIANTE_H
