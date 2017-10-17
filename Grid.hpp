#include <stddef.h>

#include "Grid.h"
#include "RandomGenerator.h"
#include "Array.h"

template<typename T>
Grid<T>::Grid(int d, double delta) : d(d), delta(delta) {
    t = new Array<T>(d);
    
    for (int i=0;i<d;i++) {
        double x = RandomGenerator::doubleAll();
        t->add(x);
    }
}

template<typename T>
Grid<T>::~Grid() {
    delete t;
}

template<typename T>
Point<T> * nearestPoint(Point<T> * origin) {
    return NULL;
}
