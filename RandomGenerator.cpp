/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   RandomGenerator.cpp
 * Author: melydron
 * 
 * Created on October 10, 2017, 6:36 PM
 */

#include "RandomGenerator.h"

#include <cstdlib>

double RandomGenerator::doubleAll() {  // [ -RAND_MAX/2, +RAND_MAX/2-1 ]
    int i = rand();
    double j = i - RAND_MAX*0.5;
    return j;
}

double normalDistribution() {
    return 1;
}
double rangeIncl(double min, double max) {
    return 0;
}
    
double rangeExcl(double min, double max) {
    return 0;
}

