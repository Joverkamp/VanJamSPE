#pragma once
#include <iostream>
#include "GenericOperator.h"

class Operator {
    private:
        GenericOperator* Op;

    public:
        void connectTo(GenericOperator* op){
            std::cout << "I am connected." << std::endl;
        }
};
