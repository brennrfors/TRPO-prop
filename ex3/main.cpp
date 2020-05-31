#include <iostream>
#include <cmath>
#include "solver_base.h"
#include "solver_quad.h"
#include "MyLog.h"
using namespace std;

int main(){
    MyLog mylog{};

    solver_quad my_solver;
    Solver bruh;


    mylog.log(my_solver.solve_linear(2,3));
    mylog.log(my_solver.solve(0,2,8));

    mylog.write();
}
