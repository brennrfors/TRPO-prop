#ifndef UNTITLED1_LOGABSTRACT_H
#define UNTITLED1_LOGABSTRACT_H

#pragma once

#include <iostream>
#include <sstream>
#include <cmath>
#include <vector>
#include <stdlib.h>
#include <exception>
#include <string>

using namespace std;

namespace Core {
    template<typename T>
    class logAbstract {
    protected: string str;
        vector <string> logs;
        logAbstract() {}
        logAbstract (const logAbstract&) = delete;
        logAbstract& operator = (logAbstract&) = delete;
    public:
        //friend class ryzhov::Log;

        static T& getInstance() {
            static T* instance = new T();
            return *instance;
        }

        //virtual void _write() = 0;

    };
}
// class Log : logAbstract<Log>




#endif //UNTITLED1_LOGABSTRACT_H
