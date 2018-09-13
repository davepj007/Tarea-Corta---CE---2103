//
// Created by davepj007 on 10/09/18.
//
#include "Memoria.h"

#include <iostream>

Memoria::Memoria() {
    this->ptrMem = &this->mem[0];
    this->pagsLibres = 8;
}

Pagina* Memoria::getMem() {
    return this->mem;
}

int Memoria::getPagsLibres() {
    return this->pagsLibres;
}

void Memoria::setPagsLibres(int pagsLibres) {
    this->pagsLibres = pagsLibres;
}
Pagina* Memoria::getPtrMem() {
    return this->ptrMem;
}

