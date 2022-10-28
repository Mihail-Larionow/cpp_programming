#pragma once
#include "Dot.h"
#include <tuple>

class Triangle {
    private: 
        Dot a, b, c;

    public:
        Triangle(Dot, Dot, Dot);
        std::tuple<double, double, double> Ribs();
        double S();
        double P();

};

