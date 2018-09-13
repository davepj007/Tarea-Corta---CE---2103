//
// Created by davepj007 on 10/09/18.
//

#include "GestorMemoria.h"
#include "Memoria.h"

#include <iostream>
#include <string>

GestorMemoria::GestorMemoria() {
    this->mem = Memoria();
    this->disp = false;
}

bool GestorMemoria::asigPags(Pagina pag) {
    Pagina *memo = this->mem.getMem();
    if (this->mem.getPagsLibres() >= pag.getTamPag()) {
        int ind = indPagLibre();
        memo[ind] = pag;
        pag.setUbicPag(&memo[ind]);
        this->mem.setPagsLibres(this->mem.getPagsLibres()-1);
        std::cout << "Pagina agregada exitosamente." << std::endl;
        return true;
    } else {
        std::cout << "No hay paginas disponibles." << std::endl;
        return false;
    }
}

bool GestorMemoria::desasigPag(Pagina pag) {
    Pagina* memo = this->mem.getMem();
    int i = 0;
    while(i < 8){
        if(memo[i].getUbicPag() == pag.getUbicPag()){
            memo[i] = Pagina();
            std::cout << "Pagina desasignada." << std::endl;
            return true;
        }
        i++;
    }
    std::cout << "No se encontro la pagina especificada." << std::endl;
    return false;
}

int GestorMemoria::indPagLibre() {
    int i = 0;
    Pagina* memo = mem.getMem();
    while(i < 8){
        if(memo[i].checkIsEmpty()){
            return i;
        }else{
            i++;
        }
    }
    return -1;
}