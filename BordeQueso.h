//
// Created by pablo on 10/09/18.
//

#ifndef PIZZAS_BORDEQUESO_H
#define PIZZAS_BORDEQUESO_H


#include "Basica.h"

class BordeQueso : public Basica{
private:
    int bordes_queso=4;

public:
    int getBordes_queso() const {
        return bordes_queso;
    }

public:
    void crear(){
        getMasa();
        getSalsa();
        getPicar_ingredientes();
        getMoldear_masa();
        getBordes_queso();
        getIncluir_ingredientes();
        getHornear();
        getEmpacar_y_llevar();
    }

};


#endif //PIZZAS_BORDEQUESO_H
