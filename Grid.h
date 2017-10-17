#ifndef GRID_H
#define GRID_H


template<typename T>
class Grid {
public:
    Grid(int d, double delta);
    virtual ~Grid();
    
    Point<T> * nearestPoint(Point<T> * origin);
private:
    int d; // grid dimensions
    double delta; // grid point distance in one dimension
    Array<double> * t;
};

#include "Grid.hpp"

#endif /* GRID_H */

