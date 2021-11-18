#pragma once
#include <iostream>

class GenericOperator;

class Operator {
    private:
        GenericOperator* downstreamOp;

    public:
        void connectTo(GenericOperator* op);
};
