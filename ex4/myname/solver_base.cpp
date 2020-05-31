//
// Created by Rain on 30.04.2020.
//

#include "solver_base.h"
#include <iostream>
#include <cmath>
using namespace std;

std::string Solver::solve_linear(float a, float b) {
    char str[80];
    std::string data_back{};
    //cout << a << "*X + " << b << " = 0" << endl;
    X = -b/a;
    //cout << "X = " << X << endl;
    sprintf(str, "--------\nLinear\n%fX + %f = 0 \nX = %f\n---------\n", a,b, X);
    data_back += str;
    return data_back;
}
