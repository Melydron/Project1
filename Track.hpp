#include "Track.h"
#include "Distance.h"

template<typename T>
Track<T>::Track(string tag, int m) : tag(tag), m(m) {
//    this->resize(m);
}

template<typename T>
Track<T>::~Track() {
    for (size_t i = 0;i<this->size();i++) {
        delete (*this)[i];
    }
}

template<typename T>
size_t Track<T>::getLength() {
    return this->size();
}

template<typename T>
void Track<T>::addPoint(Point<T> * point, Distance< Point<T>* > * distCalculator, double bound) {
    if (this->size() > 0 && distCalculator != NULL) {
        Point<T> * previousPoint = (*this)[this->size() - 1];
        double distance = distCalculator->calculate(previousPoint, point);
        if (distance < bound) {
            return;
        }
    }
    this->push_back(point);
}

template<typename T>
void Track<T>::print() {
    cout << "Track: " << tag << " (" << this->size() << "):" << endl;
    for (size_t i = 0;i<this->size();i++) {
        cout << "\t";
        (*this)[i]->print();
    }
    cout << endl;
}