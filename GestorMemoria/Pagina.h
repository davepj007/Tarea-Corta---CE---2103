//
// Created by davepj007 on 10/09/18.
//

#ifndef GESTORMEMORIA_PAGINA_H
#define GESTORMEMORIA_PAGINA_H

#include <iostream>
#include <string>

class Pagina {
private:
    std::string unidad;
    int tamPag;
    Pagina* ubicPag;
    int procs[3];
    int espLibre;
    bool isEmpty;

    void agregProcAux(int proc);
public:
    Pagina();
    Pagina(int tamPag, std::string unidad);

    bool agregProc(int proc);

    std::string getUnidad();
    void setUnidad(std::string unidad);

    int getTamPag();

    Pagina* getUbicPag();
    void setUbicPag(Pagina* ubic);

    int* getProcs();

    int getEspLibre();
    void setEspLibre(int espLibre);

    bool checkIsEmpty();

};


#endif //GESTORMEMORIA_PAGINA_H
