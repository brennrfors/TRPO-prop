#ifndef UNTITLED1_SOLVER_BASE_H
#define UNTITLED1_SOLVER_BASE_H
#include<iostream>
using namespace std;
class Solver{
    float X{};
    float a{};
    float b{};

protected:
    static auto comput_discr(float b, float a, float c){
        return(b*b - 4*a*c);
    }

public:
    std::string solve_linear(float a, float b);

    virtual void solve_quadro(int aa, int bb, int cc) {
        return;
    }


};
#endif //UNTITLED1_SOLVER_BASE_H
