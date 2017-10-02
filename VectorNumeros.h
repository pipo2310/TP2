#ifndef VECTORNUMEROS_H
#define VECTORNUMEROS_H
#include <iostream>
#include <map>

using namespace std;

class VectorNumeros
{
    public:
        VectorNumeros();
        virtual ~VectorNumeros();
        void setNumero(string, int);
        string getNumeros();

        multimap<string,int> refNumeros;
    protected:

    private:
};

#endif // VECTORNUMEROS_H
