#include "Loader.h"
#include "TrackDistance.h"

#include <iostream>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

Loader::Loader() {
}

Loader::~Loader() {
}

Input * Loader::load(const char * inputFile) {
    Input * input = new Input;
    FILE * fp = fopen(inputFile, "r");


    // process first line here
    // find input->d from first line of file
    input->d = 2;

    string track_id;
    int track_size;
    char buf[1000];

    input->maxM = 0;
    
    while (fgets(buf, sizeof buf, fp) != NULL) {
        //for each line (track), read tag and number of points
        char* pch = strtok(buf, "\t");
        track_id = pch;
        pch = strtok(NULL, "\t");
        track_size = atoi(pch);

        cout << "id: " << track_id << "\tsize: " << track_size;
        Track<double> * track = new Track<double>(track_id, track_size);
        int i = 0;
        
        input->maxM = max(input->maxM, track_size);
        
        float p1, p2;
        while (pch != NULL) {
            pch = strtok(NULL, " ,()\n");
            if (pch != NULL) {
                if (i == 0) {
                    p1 = strtof(pch, NULL);
                    i++;
                } else {
                    p2 = strtof(pch, NULL);
                    i--;
                    cout << " (" << p1 << ", " << p2 << ")";

                }
            }
        }
        cout << endl;

        input->tracks.push_back(track);
    }
    
    // copy to input whatever needed
    
    return input;
}
