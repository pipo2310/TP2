#ifndef VECTORCONTACTOS_H
#define VECTORCONTACTOS_H
#include <vector>
#include "Contacto.h"

class VectorContactos
{
    public:
        VectorContactos();
        virtual ~VectorContactos();
        void inserte(Contacto c);
        void show();

    protected:

    private:
        vector<Contacto> vecCont;
};

#endif // VECTORCONTACTOS_H
