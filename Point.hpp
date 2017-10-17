#include "Point.h"

template <typename T>
Point<T>::Point(int d) : Array<T>(d) {
}

template <typename T>
Point<T>::Point(T x, T y) : Array<T>(2){
    (*this)[0] = x;
    (*this)[1] = y;
}

template <typename T>
Point<T>::Point(T x, T y, T z): Array<T>(3) {
    (*this)[0] = x;
    (*this)[1] = y;
    (*this)[2] = z;
}

template <typename T>
Point<T>::Point(T x, T y, T z, T w) : Array<T>(4) {
    (*this)[0] = x;
    (*this)[1] = y;
    (*this)[2] = z;
    (*this)[3] = w;
}

template <typename T>
size_t Point<T>::getD() {
    return this->size();
}

template <typename T>
void Point<T>::print() {
    for (size_t i = 0;i<this->size();i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << (*this)[i];
    }
    cout << endl;
}