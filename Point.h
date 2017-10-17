#ifndef POINT_H
#define POINT_H

#include "Array.h"
#include "Point.h"

template <typename T>
class Point : public Array<T> {
public:
    Point(int d);
    
    Point(T x, T y);
    Point(T x, T y, T z);
    Point(T x, T y, T z, T w);
    
    void print();
    
    size_t getD();
//    void operator<<(ostream & os, Point<T> & other);
};

typedef Point<double> PointD;


#include "Point.hpp"

#endif /* POINT_H */

