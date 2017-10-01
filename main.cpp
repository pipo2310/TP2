#include <iostream>
#include <vector>
#include "Contacto.h"
#include "VectorContactos.h"

using namespace std;

int main()
{
    int resp=1000;
    VectorContactos *contcs=new VectorContactos();


      while(resp!=0)
        {
        cout<<"Que desea hacer:\n1. Agregar contacto.\n2. Mostrar contactos.\n3. Mueva a arbol.\n4. Buscar Contacto.\n5. Buscar en arbol.\n6. Agregar numero.\n7. Borre Contacto.\n0. Terminar"<<endl;
        cin>>resp;

        if(resp==1){
            string nombre="";
            string apellido="";
            string tipo="";
            string email="";
            string categoria="";
            cout<<"De el nombre del contacto: "<<endl;
            cin>>nombre;
            cout<<"El apellido: "<<endl;
            cin>>apellido;
            cout<<"Que tipo de contacto esta agregando: "<<endl;
            cin>>tipo;
            cout<<"Cual es el email: "<<endl;
            cin>>email;
            contcs->inserte(Contacto(nombre,apellido,tipo,email));
}
        }
        contcs->show();

          }







