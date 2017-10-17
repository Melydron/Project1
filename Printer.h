/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Printer.h
 * Author: melydron
 *
 * Created on October 16, 2017, 12:03 PM
 */

#ifndef PRINTER_H
#define PRINTER_H

#include "Input.h"
#include "Output.h"


class Printer {
public:
    Printer();
    void print(Input * input);
    void print(Output * output);
private:

};

#endif /* PRINTER_H */

