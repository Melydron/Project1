/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   H.h
 * Author: melydron
 *
 * Created on October 10, 2017, 6:48 PM
 */

#ifndef H_H
#define H_H

#include "Grid.h"
#include "List.h"

template <typename T>
class H {
public:
    H(Grid<T> * grid);
    virtual ~H();
    
    GridTrack<T> * gridify(Track<T> * track);
    
    Grid<T> * getGrid();
private:
    Grid<T> * grid;
};

#include "H.hpp"

#endif /* H_H */

