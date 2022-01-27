#include "Operator.h"
#include "GenericOperator.h"

void Operator::connectTo(GenericOperator* op) { 
  downstreamOp = op;
  downstreamOp->numInputs += 1;
}

void Operator::emit(int data){
  downstreamOp->inQueue.push(data);
}



