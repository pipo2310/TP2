#include "VectorNumeros.h"
#include <sstream>

VectorNumeros::VectorNumeros()
{
    //ctor
}

VectorNumeros::~VectorNumeros()
{
    //dtor
}

void VectorNumeros::setNumero(string tC, int nu){
    refNumeros.insert(make_pair(tC,nu));
}

string VectorNumeros::getNumeros(){
    stringstream os;
    multimap<string,int>::iterator iter;
    os<<"Numeros: "<<"\n"<<endl;
    for(iter=refNumeros.begin();iter!=refNumeros.end();iter++){
        os<<"Numero: "<<iter->second<<"   Tipo: "<<iter->first<<endl;
    }
    return os.str();
}
