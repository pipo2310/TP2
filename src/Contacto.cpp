#include "Contacto.h"
#include <sstream>

using namespace std;
Contacto::Contacto(){
    nombre="";
    apellido="";
    tipo="";
    email="";

}

void Contacto::setData(string n,string a,string t,string e,string tC, int nu)
{
    nombre=n;
    apellido=a;
    tipo=t;
    email=e;
    numeros.setNumero(tC,nu);
}
std::string Contacto::getData()
{
    stringstream datos;
    datos<<"Nombre: "<<nombre<<"\nApellido: "<<apellido<<"\nTipo: "<<tipo<<"\nEmail: "<<email<<"\n"<<endl;
    datos<<numeros.showNumeros()<<"\n"<<endl;
    return datos.str();
}
