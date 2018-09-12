//
// Created by pablo on 10/09/18.
//

#ifndef PIZZAS_HAWAIANA_H
#define PIZZAS_HAWAIANA_H


#include "Basica.h"

class Hawaiana : public Basica {
private:
    int incluir_piña=3;
public:
    int getIncluir_piña() const;

public:
    void crear(){
        getMasa();
        getSalsa();
        getPicar_ingredientes();
        getMoldear_masa();
        getIncluir_ingredientes();
        getIncluir_piña();
        getHornear();
        getEmpacar_y_llevar();
    }


};


#endif //PIZZAS_HAWAIANA_H
