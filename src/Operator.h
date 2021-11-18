#pragma once
#include <iostream>
//#include "GenericOperator.h"

class GenericOperator;

class Operator {
    private:
        GenericOperator* downstreamOp;

    public:
        void connectTo(GenericOperator* op);
};
