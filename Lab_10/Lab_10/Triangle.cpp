#include "Triangle.h"
#include <iostream>
#include <tuple>

Triangle::Triangle(Dot a, Dot b, Dot c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

std::tuple<double, double, double> Triangle::Ribs() {
    double rib_a, rib_b, rib_c;
    rib_a = a.distanceTo(b);
    rib_b = b.distanceTo(c);
    rib_c = c.distanceTo(a);
    return std::make_tuple(rib_a, rib_b, rib_c);
}

double Triangle::P() {
    return std::get<0>(Ribs()) + std::get<1>(Ribs()) + std::get<2>(Ribs());
}

double Triangle::S() {
    double p = P() / 2 ;
    return sqrt(p * (p - std::get<0>(Ribs())) * (p - std::get<1>(Ribs())) * (p - std::get<2>(Ribs())));
}