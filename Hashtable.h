/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Hashtable.h
 * Author: melydron
 *
 * Created on October 10, 2017, 6:35 PM
 */

#ifndef HASHTABLE_H
#define HASHTABLE_H

template <typename T>
class Hashtable {
public:
    Hashtable(int k, int d, int v_dimension, int M);
    virtual ~Hashtable();
    
    void insert(Track<T> * track);
    
    
    
    
    
    
private:
    G<T> * g;
    int k;
    int d;
    int v_dimension;
    int M;
};

#endif /* HASHTABLE_H */

