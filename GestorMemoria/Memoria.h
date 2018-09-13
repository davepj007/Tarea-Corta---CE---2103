//
// Created by davepj007 on 10/09/18.
//

#ifndef GESTORMEMORIA_MEMORIA_H
#define GESTORMEMORIA_MEMORIA_H

#include "Pagina.h"

class Memoria {
private:
    Pagina* ptrMem;
    int pagsLibres;
    Pagina mem[8];
public:
    Memoria();
    Pagina* getMem();
    Pagina* getPtrMem();
    int getPagsLibres();
    void setPagsLibres(int pagsLibres);
};


#endif //GESTORMEMORIA_MEMORIA_H
