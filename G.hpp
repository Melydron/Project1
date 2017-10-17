#include "G.h"
#include "H.h"

template<typename T>
G<T>::G(int k, int d, int v_dimension) : k(k), d(d), W(4) {
    h = new H*[k];

    int delta = 1; // ???

    for (int i = 0; i < k; i++) {
        Grid * g = new Grid<T>(d, delta);
        h[i] = new H(g);
    }
    
    v = new Array<double>(v_dimension);
    
    for (int i = 0; i < v_dimension; i++) {
        double x = RandomGenerator::normalDistribution();
        v->add(x);
    }
    
    t = RandomGenerator::rangeExcl(0, W);
    
    
}

template<typename T>
G<T>::~G() {
    for (int i = 0; i < k; i++) {
        Grid * grid = h[i]->getGrid();
        if (grid != NULL) {
            delete grid;
        }
        delete h[i];
    }
    delete [] h;
    
    delete v;
}

template<typename T>
GridTrack<T> * G<T>::gridify(Track<T> * track) {
    GridTrack<T> * result = new GridTrack<T>();


    for (int i = 0; i < k; i++) {
        GridTrack<T> * temp = h[i]->gridify(track);

        // merge with result
    }

    return result;
}

template<typename T>
ProjectionVector * G<T>::project(GridTrack<T> * gt) {
    // TODO
    return NULL;
}

template<typename T>
int G<T>::hash(ProjectionVector * p) {
    // hash with p v t
    return 0;
}

template<typename T>
int G<T>::hash(Track<T> *  track) {
    GridTrack<T> * gt = gridify(track);
    ProjectionVector * pv = project(gt);
    int M = hash(gt);
    return M;
}