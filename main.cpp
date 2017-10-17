#include <cstdlib>
#include <cstring>
#include <iostream>

#include "Point.h"
#include "List.h"
#include "Loader.h"
#include "Input.h"
#include "ExecInfo.h"

#include "TrackDistance.h"
#include "EuclideanDistance.h"
#include "FrechetDistance.h"
#include "TimeWarpDistance.h"
#include "Solver.h"
#include "Printer.h"

using namespace std;

void testFrechet() {
    Track<double> * t1 = new Track<double>("t1", 3);
    Track<double> * t2 = new Track<double>("t2", 3);

    PointD * a = new PointD(1, 1);
    PointD * b = new PointD(2, 2);
    PointD * c = new PointD(3, 3);

    Distance<PointD*> * distCalculator = new EuclideanDistance<double>();

    t1->addPoint(a, distCalculator, 1);
    t1->addPoint(b, distCalculator, 1);
    t1->addPoint(c, distCalculator, 1);

    PointD * d = new PointD(1, 1);
    PointD * e = new PointD(2, 2);
    PointD * f = new PointD(3, 3);

    PointD * g = new PointD(4, 4);
    PointD * h = new PointD(5, 5);

    t2->addPoint(d);
    t2->addPoint(e);
    t2->addPoint(f);
    t2->addPoint(g);
    t2->addPoint(h);

    t1->print();

    t2->print();
    //    int sum = 0;
    //    for (int i=0;i<a->size();i++) {
    //        sum = sum + (*a)[i];
    //    }
    //    
    //    for (list<double>::iterator p = a->begin(), q = b->begin(); p != a->end() && q != b->end();p++, q++) {
    //        sum += *p;
    //    }


    //    Distance< Track<double> * > * calculator = new FrechetDistance<double>();

    //    double result = calculator->calculate(t1, t2);

    //    cout << result;
}

void testTimeWarp() {
    Track<double> * t1 = new Track<double>("t1", 3);
    Track<double> * t2 = new Track<double>("t2", 3);

    PointD * a = new PointD(1, 1);
    PointD * b = new PointD(2, 2);
    PointD * c = new PointD(3, 3);

    t1->addPoint(a);
    t1->addPoint(b);
    t1->addPoint(c);

    PointD * d = new PointD(1, 1);
    PointD * e = new PointD(2, 2);
    PointD * f = new PointD(3, 3);

    t2->addPoint(d);
    t2->addPoint(e);
    t2->addPoint(f);

    //    TrackDistance<double> * calculator = new TimeWarpDistance<double>();

    //    double result = calculator->calculate(t1, t2);

    //    cout << result;
}

int main(int argc, char** argv) {
    ExecInfo execInfo = ExecInfo();
    execInfo.argHandling(argc, argv);

    cout << "Input file:\t" << execInfo.inputFile << endl;

    testFrechet();
    return 0;

    Loader * loader = new Loader();
    Solver * solver = new Solver();
    Printer * printer = new Printer();

    // Read input with loader
    Input * input = loader->load(execInfo.inputFile);
    
    Output * output1 = solver->solveByLSH(input);
    
    Output * output2 = solver->solveClassic(input);
    
    
    printer->print(input);
    printer->print(output1);
    printer->print(output2);
    
    
    input->func = DFT;


    //    Track<double> * t1 = new Track<double>("t1", 3);

    //    PointD * a = new PointD(1,1);
    //    PointD * a2 = new PointD(1,1,1);
    //    PointD * a3 = new PointD(1,1,1,1);
    
    delete loader;
    delete solver;
    delete input;
    
    return 0;
}

