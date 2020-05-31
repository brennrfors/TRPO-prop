//
// Created by Rain on 07.05.2020.
//

#ifndef UNTITLED1_MYLOG_H
#define UNTITLED1_MYLOG_H
#include "logAbstract.h"
#include "logInterface.h"

class MyLog : Core::logInterface, public Core::logAbstract<float>{
    std::string data{};
public:
    virtual void log(std::string str) override ;
    virtual void write() override;
    virtual void clear() override;
};


#endif //UNTITLED1_MYLOG_H
