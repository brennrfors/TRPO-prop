//
// Created by Rain on 30.04.2020.
//

#include "solver_base.h"
#include <iostream>
#include <cmath>
using namespace std;

void Solver::solve_linear(float a, float b) {
    cout << a << "*X + " << b << " = 0" << endl;
    X = -b/a;
    cout << "X = " << X << endl;
}
