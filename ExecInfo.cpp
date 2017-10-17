#include "ExecInfo.h"

#include <cstring>
#include <iostream>

using namespace std;



ExecInfo::ExecInfo() {

}

ExecInfo::~ExecInfo() {
}

void ExecInfo::argHandling(int argc, char** argv){
    
    int i = 1;
    while (i < argc) {
        if (strcmp(argv[i], "-d") == 0) {
            if (inputFileFlag) {
                cerr << "Wrong arguments!" << endl;
                return;
            }
            inputFile = argv[++i];
            inputFileFlag = true;
        } else if (strcmp(argv[i], "-q") == 0) {
            if (queryFileFlag) {
                cerr << "Wrong arguments!" << endl;
                return;
            }
            queryFile = argv[++i];
            queryFileFlag = true;
        } 
        else {
            cerr << "Wrong arguments!" << endl;
         }
        i++;
    }
}

