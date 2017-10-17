#ifndef INPUT_H
#define INPUT_H

#include "Track.h"

#include <vector>

using namespace std;

typedef vector<Track<double> *> TrackSet;

enum Function { DFT,DTW };
enum Hash { CLASSIC, PROBABILISTIC };

class Input {
public:
    int K;      // K = 2
    int L;      // L = 3
    Function func;   // DFT, DTW
    int hash;   // CLASSIC, PROBABILISTIC
    
    int d;
    int maxM;
    TrackSet tracks;
    TrackSet queries;
};


#endif /* INPUT_H */

