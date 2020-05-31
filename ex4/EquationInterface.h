//
// Created by Rain on 06.05.2020.
//

#ifndef UNTITLED1_EQUATIONINTERFACE_H
#define UNTITLED1_EQUATIONINTERFACE_H


#include <iostream>
#include <sstream>
#include <cmath>
#include <vector>
#include <stdlib.h>
#include <exception>
#include <string>


using namespace std;
namespace Core {
    class EquationInterface {
    public:
        vector <float> xcv;
        virtual std::string solve (float a, float b, float c) = 0;
    };


}


#endif //UNTITLED1_EQUATIONINTERFACE_H
