#ifndef EUCLIDEANDISTANCE_H
#define EUCLIDEANDISTANCE_H

#include "Point.h"
#include "PointDistance.h"

template <typename T>
class EuclideanDistance : public PointDistance<T> {
public:
    double calculate(Point<T> * p1, Point<T> * p2) {
        // TODO
        return 0;
    }
};

#endif /* EUCLIDEANDISTANCE_H */

