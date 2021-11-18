
#include "Operator.h"


void Operator::connectTo(GenericOperator* op) {
    downstreamOp = op;
    std::cout << "I am connected." << std::endl;
}
