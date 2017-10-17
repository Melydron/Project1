#ifndef TRACK_H
#define TRACK_H

#include <string>


#include "List.h"
#include "Point.h"
#include "Distance.h"

using namespace std;

template<typename T>
class Track : public Array< Point<T>* > {
public:
    Track(string tag, int m);
    virtual ~Track();
    
    void addPoint(Point<T> * point, Distance< Point<T>* > * distance = 0, double bound = 0);
    size_t getLength();
    
    void print();
    
    const string tag;  
    const int m;
};

#include "Track.hpp"

#endif /* TRACK_H */

