#ifndef TRACK_DISTANCE_H
#define TRACK_DISTANCE_H

#include "Distance.h"


template <typename T>
class TrackDistance : public Distance< Track<T> * > {
public:
    virtual double calculate(Track<T> * t1, Track<T> * t2) = 0;
};

#endif /* DISTANCE_H */

