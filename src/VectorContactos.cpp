#include "VectorContactos.h"
#include "Contacto.h"
#include <iostream>

using namespace std;
VectorContactos::VectorContactos()
{
    //ctor
}

VectorContactos::~VectorContactos()
{
    //dtor
}
void VectorContactos::inserte(Contacto c)
{
    vecCont.push_back(c);
}


void VectorContactos::show()
{
    std::vector<Contacto>::iterator it;
    for(it=vecCont.begin(); it<vecCont.end(); it++)
    {
        cout<<"Nombre: "<<it->nombre<<"\nApellido: "<<it->apellido<<"\nTipo: "<<it->tipo<<"\nEmail: "<<it->email<<"\n"<<endl;
    }
}
