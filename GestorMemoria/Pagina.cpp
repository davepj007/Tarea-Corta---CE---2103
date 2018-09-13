//
// Created by davepj007 on 10/09/18.
//

#include "Pagina.h"
#include <iostream>

Pagina::Pagina() {
    this->isEmpty = true;
}

Pagina::Pagina(int tamPag, std::string unidad) {
    this->tamPag = this->espLibre = tamPag;
    this->unidad = unidad;
    this->isEmpty = false;
}

bool Pagina::agregProc(int proc) {
    int residuo = 0;
    if(proc <= this->espLibre){
        if(proc > 3){
            int i = 0; int j = 0;
            while(i < 3){
                if(procs[i] == 0) j++;
            }
            if(j >= 2){
                residuo = proc - 3;
                proc -= residuo;
            }
        }
        agregProcAux(proc);
        agregProcAux(residuo);
        return true;
    }
    else{
        std::cout << "No hay suficiente espacio disponible." << std::endl;
        return false;
    }
}

void Pagina::agregProcAux(int proc) {
    int i = 0;
    while (procs[i] == 0 && i <= 3) i++;

    if (i == 3) {
        std::cout << "Capacidad de procesos al tope." << std::endl;
    } else {
        procs[i] = proc;
        this->espLibre -= proc;
        this->isEmpty = false;
        std::cout << "Proceso agregado con exito." << std::endl;
    }
}

std::string Pagina::getUnidad() {
    return this->unidad;
}

void Pagina::setUnidad(std::string unidad) {
    this->unidad = unidad;
}

int Pagina::getTamPag() {
    return this->tamPag;
}

Pagina* Pagina::getUbicPag() {
    return this->ubicPag;
}

void Pagina::setUbicPag(Pagina *ubic) {
    this->ubicPag = ubic;
}

int* Pagina::getProcs() {
    return this->procs;
}

int Pagina::getEspLibre() {
    return this->espLibre;
}

void Pagina::setEspLibre(int espLibre) {
    this->espLibre = espLibre;
}

bool Pagina::checkIsEmpty() {
    return this->isEmpty;
}