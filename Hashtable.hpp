#include "Hashtable.h"
#include "G.h"

template<typename T>
Hashtable<T>::Hashtable(int k, int d, int v_dimension, int M) : k(k), d(d), v_dimension(v_dimension), M(M) {
    g = new G<T>(k, d, v_dimension);
}

template<typename T>
Hashtable<T>::~Hashtable() {
    delete g;
}

template<typename T>
void Hashtable<T>::insert(Track<T> * track) {
    int offset = g->hash(track) % M;
    
}