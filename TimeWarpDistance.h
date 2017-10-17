#ifndef TIMEWARPDISTANCE_H
#define TIMEWARPDISTANCE_H

template <typename T>
class TimeWarpDistance : public TrackDistance<T> {
public:
    virtual double calculate(Track<T> * t1, Track<T> * t2) {
        // TODO
        return 0;
    }
};

#endif /* TIMEWARPDISTANCE_H */

