#include "Array.h"
#include <iostream>
#include <cstdlib>

using namespace std;

template <typename T>
Array<T>::Array() {

}

template <typename T>
Array<T>::Array(long unsigned int size) {
    this->resize(size);
}