//
// Created by Rain on 07.05.2020.
//

#ifndef UNTITLED1_LOGINTERFACE_H
#define UNTITLED1_LOGINTERFACE_H



#include <iostream>
#include <sstream>
#include <cmath>
#include <vector>
#include <stdlib.h>
#include <exception>
#include <string>

namespace Core {
    class logInterface {
    public:
        virtual void log(std::string str)=0;
        virtual void write()=0;
        virtual void clear()=0;
    };
}



#endif //UNTITLED1_LOGINTERFACE_H
