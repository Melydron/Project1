#ifndef DISTANCE_H
#define DISTANCE_H

template <typename U>
class Distance {
public:
    virtual double calculate(U obj1, U obj2) = 0;
};


#endif /* DISTANCE_H */

