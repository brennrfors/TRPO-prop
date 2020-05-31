#include <iostream>
#include <cmath>
#include "solver_base.h"
#include "solver_quad.h"
#include "MyLog.h"
#include <stdexcept>
using namespace std;

int main(){
    MyLog mylog{};

    solver_quad my_solver;
    Solver bruh;

    try {
        mylog.log(my_solver.solve_linear(2,3));
        mylog.log(my_solver.solve(16,16,0));
    } catch (const std::runtime_error& e) {
        printf("Execution caugh with message: %s\n", e.what());
    }

    mylog.write();
}
