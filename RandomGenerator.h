#ifndef RANDOMGENERATOR_H
#define RANDOMGENERATOR_H

class RandomGenerator {
public:
    static double rangeIncl(double min, double max);
    static double rangeExcl(double min, double max);
    static double doubleAll();
    static double normalDistribution();
//    void rangeInteger();
};

#endif /* RANDOMGENERATOR_H */

