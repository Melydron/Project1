#ifndef LOADER_H
#define LOADER_H

#include "Track.h"
#include "Input.h"


class Loader {
public:
    Loader();
    virtual ~Loader();
    
    Input * load(const char * filename);
};

#endif /* LOADER_H */

