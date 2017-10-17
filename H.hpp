/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   H.hpp
 * Author: melydron
 *
 * Created on October 13, 2017, 11:04 AM
 */

#ifndef H_HPP
#define H_HPP

#include "H.h"


template <typename T>
H<T>::H(Grid<T> * grid) {
    this->grid = grid;
}

template <typename T>
H<T>::~H() {
}

template <typename T>
GridTrack<T> * H<T>::gridify(Track<T> * track) {
    return NULL;
}

template <typename T>
Grid<T> * H<T>::getGrid() {
    return grid;
}

#endif /* H_HPP */

