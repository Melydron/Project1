/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Printer.cpp
 * Author: melydron
 * 
 * Created on October 16, 2017, 12:03 PM
 */

#include "Printer.h"
#include <iostream>

using namespace std;

Printer::Printer() {
}

void Printer::print(Input * input) {
    cout << "Dimensions:\t" << input->d << endl;
    cout << "Tracks found: " << input->tracks.size() << endl;
}

void Printer::print(Output * output) {

}

