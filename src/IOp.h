#pragma once
#include "InputOperator.h"
#include <iostream>

class IOp : public InputOperator {
    public:
        void generateData() {
            std::cout << "Hello User Created Input Operator." << std::endl;
        }
};
