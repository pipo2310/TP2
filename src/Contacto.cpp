#include "Contacto.h"
#include <sstream>

using namespace std;
Contacto::Contacto(){}

Contacto::Contacto(std::string nombre, std::string apellido, std::string tipo, std::string email)
{
    this->nombre = nombre;
    this->apellido = apellido;
    this->tipo = tipo;
    this->email = email;
}
void Contacto::setData(string n,string a,string t,string e)
{
    nombre=n;
    apellido=a;
    tipo=t;
    email=e;
}
string Contacto::getData()
{
    stringstream os;
    os<<"Nombre: "<<nombre<<"\nApellido: "<<apellido<<"\nTipo: "<<tipo<<"\nEmail: "<<email<<"\n"<<endl;
    return os.str();
}
