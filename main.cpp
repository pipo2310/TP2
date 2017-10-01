#include <iostream>
#include <vector>
#include "Contacto.h"
#include "VectorContactos.h"

using namespace std;

int main()
{
    int resp=1000;
    VectorContactos *contcs=new VectorContactos();
    Contacto *cont=new Contacto();
      while(resp!=0){
        cout<<"Que desea hacer:\n1. Agregar contacto.\n2. Mostrar contactos.\n0. Terminar"<<endl;
        cin>>resp;
        if(resp==1){
            string nombre="";
            string apellido="";
            string tipo="";
            string email="";
            string tipoNum="";
            int numero=0;
            cout<<"De el nombre del contacto: "<<endl;
            cin>>nombre;
            cout<<"El apellido: "<<endl;
            cin>>apellido;
            cout<<"Que tipo de contacto esta agregando: "<<endl;
            cin>>tipo;
            cout<<"Cual es el email: "<<endl;
            cin>>email;
            cout<<"Que tipo de numero va a agregar: "<<endl;
            cin>>tipoNum;
            cout<<"Cual es el numero: "<<endl;
            cin>>numero;
            cont->setData(nombre,apellido,tipo,email,tipoNum,numero);
            contcs->inserte(cont);
        }else if(resp==2){
                contcs->show();
        }
    }
    return 0;
}




