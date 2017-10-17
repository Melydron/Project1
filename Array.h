#ifndef ARRAY_H
#define ARRAY_H

#include <vector>

using namespace std;

template <typename T>
class Array : public vector<T>{
public:
    Array();
    Array(long unsigned int size);
};

#include "Array.hpp"

#endif /* ARRAY_H */

