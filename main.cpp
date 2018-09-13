#include "GestorMemoria/Memoria.h"
#include "GestorMemoria/GestorMemoria.h"
#include <iostream>
#include <string>

int main() {
    GestorMemoria gMem = GestorMemoria();
    Pagina pag = Pagina(4, "Pizza Suprema");

    gMem.asigPags(pag);
    std::cout << "Libre: " << gMem.mem.getPagsLibres() << std::endl;

    return 0;
}