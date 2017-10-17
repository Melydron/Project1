#ifndef PROJECTIONVECTOR_H
#define PROJECTIONVECTOR_H

#include "Array.h"


template <typename T>
class ProjectionVector : public Array<T> {
    ProjectionVector(int size) : Array<T>(size) {
    }
};

#endif /* PROJECTIONVECTOR_H */

