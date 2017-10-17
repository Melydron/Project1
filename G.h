#ifndef G_H
#define G_H

#include "GridTrack.h"
#include "ProjectionVector.h"

template<typename T>

class G {
public:
    G(int k, int d, int v_dimension);
    virtual ~G();
    
    int hash(Track<T> *  track);
    
    GridTrack<T> * gridify(Track<T> *  track);
    ProjectionVector * project (GridTrack<T> * gt);
    int hash(ProjectionVector * pv);
private:
    int k;
    int d;
    H<T> ** h;
    
    
    Array<double> * v;
    double t;
    int W;
};

#include "G.hpp"

#endif /* G_H */

