
#include "MyLog.h"
#include <iostream>
void MyLog::log(std::string str) {
data += str;
}

void MyLog::write() {
    std::cout << data << endl;
}

void MyLog::clear() {
    data.clear();
}
