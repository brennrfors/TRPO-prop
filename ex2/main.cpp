#include <iostream>
#include <cmath>
#include "solver_base.h"
#include "solver_quad.h"
using namespace std;

int main(){
    solver_quad my_solver;
    my_solver.solve_quadro(1,2, 1);
    cout << "\n\n" << endl;
    Solver bruh;
    bruh.solve_linear(1,2);

}
