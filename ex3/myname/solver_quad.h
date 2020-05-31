//
// Created by Rain on 06.05.2020.
//

#ifndef UNTITLED1_SOLVER_QUAD_H
#define UNTITLED1_SOLVER_QUAD_H
#include "solver_base.h"
#include "EquationInterface.h"

class solver_quad : public Solver, public Core::EquationInterface{
public:
    void solve_quadro(int aa, int bb, int cc) override {
        Solver::solve_quadro(aa, bb, cc);
    }

    std::string solve (float a, float b, float c) override;
};


#endif //UNTITLED1_SOLVER_QUAD_H
