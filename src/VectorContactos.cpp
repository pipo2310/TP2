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
void VectorContactos::inserte(Contacto *c)
{
    vecCont.push_back(*c);
}


void VectorContactos::show()
{
    vector<Contacto>::iterator it;
    cout<<"Contactos: "<<"\n"<<endl;
    for(it=vecCont.begin(); it<vecCont.end(); it++)
    {
        cout<<it->getData()<<"\n"<<endl;
    }
}
