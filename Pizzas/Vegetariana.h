//
// Created by pablo on 10/09/18.
//

#ifndef PIZZAS_VEGETARIANA_H
#define PIZZAS_VEGETARIANA_H


#include "Basica.h"

class Vegetariana : public Basica {
private:
    int ingre_vegetarianos=2;
public:
    int getIngre_vegetarianos() const;

public:
    void crear(){
        getMasa();
        getSalsa();
        getPicar_ingredientes();
        getMoldear_masa();
        getIngre_vegetarianos();
        getHornear();
        getEmpacar_y_llevar();
    }


};


#endif //PIZZAS_VEGETARIANA_H
