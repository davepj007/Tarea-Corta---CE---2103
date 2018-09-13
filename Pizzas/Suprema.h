//
// Created by pablo on 10/09/18.
//

#ifndef PIZZAS_SUPREMA_H
#define PIZZAS_SUPREMA_H


#include "Basica.h"

class Suprema : public Basica {
private:
    int prep_extras=2;
public:
    int getPrep_extras() const;

public:

    void crear(){
        getMasa();
        getSalsa();
        getPicar_ingredientes();
        getPrep_extras();
        getMoldear_masa();
        getIncluir_ingredientes();
        getHornear();
        getEmpacar_y_llevar();
    }

};


#endif //PIZZAS_SUPREMA_H
