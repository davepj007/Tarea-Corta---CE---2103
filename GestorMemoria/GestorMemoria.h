//
// Created by davepj007 on 10/09/18.
//

#ifndef GESTORMEMORIA_GESTORMEMORIA_H
#define GESTORMEMORIA_GESTORMEMORIA_H

#include "Memoria.h"

class GestorMemoria {
public:
    Memoria mem;
    bool disp;

    GestorMemoria();
    bool asigPags(Pagina pag);
    bool desasigPag(Pagina pag);
    int indPagLibre();
};


#endif //GESTORMEMORIA_GESTORMEMORIA_H
