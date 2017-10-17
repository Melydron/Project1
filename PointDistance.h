#ifndef POINT_DISTANCE_H
#define POINT_DISTANCE_H

#include "Point.h"


template <typename T>
class PointDistance : public Distance< Point<T>* > {
public:
    virtual double calculate(Point<T> * p1, Point<T> * p2) = 0;
};


#endif /* DISTANCE_H */

