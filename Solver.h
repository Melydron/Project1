/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Solver.h
 * Author: melydron
 *
 * Created on October 16, 2017, 11:47 AM
 */

#ifndef SOLVER_H
#define SOLVER_H

#include "Input.h"
#include "Output.h"


class Solver {
public:
    Solver();
    virtual ~Solver();
    
    Output * solveByLSH(Input * input);
    Output * solveClassic(Input * input);
private:

};

#endif /* SOLVER_H */

