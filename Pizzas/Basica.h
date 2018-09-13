//
// Created by pablo on 10/09/18.
//

#ifndef PIZZAS_PIZZA_H
#define PIZZAS_PIZZA_H

#include "../GestorMemoria/GestorMemoria.h"

class Basica {
private:
    int masa = 5;
    int salsa= 3;
    int picar_ingredientes=2;
    int moldear_masa=1;
    int incluir_ingredientes=1;
    int hornear=2;
    int empacar_y_llevar=2;
public:
    int getMasa() const;

    int getSalsa() const;

    int getPicar_ingredientes() const;

    int getMoldear_masa() const;

    int getIncluir_ingredientes() const;

    int getEmpacar_y_llevar() const;

    int getHornear() const;

public:
    void crear(){
        getMasa();
        getSalsa();
            getPicar_ingredientes();
        getMoldear_masa();
        getIncluir_ingredientes();
        getHornear();
        getEmpacar_y_llevar();
    }


};


#endif //PIZZAS_PIZZA_H
