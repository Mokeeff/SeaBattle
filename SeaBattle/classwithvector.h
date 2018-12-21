#ifndef CLASSWITHVECTOR_H
#define CLASSWITHVECTOR_H

#include "ships.h"
#include <QVector>

class ClassWithVector :public Ships {
public:
    QVector <Ships> vector_ships;

    ClassWithVector() {
        vector_ships = new QVector <Ships>;
    }
};
#endif // CLASSWITHVECTOR_H
