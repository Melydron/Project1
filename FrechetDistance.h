#ifndef FRECHETDISTANCE_H
#define FRECHETDISTANCE_H

#include "TrackDistance.h"

template <typename T>
class FrechetDistance : public TrackDistance<T> {
public:
    double calculate(Track<T> * t1, Track<T> * t2) {
        // TODO
        return 0;
    }
};


#endif /* FRECHETDISTANCE_H */

