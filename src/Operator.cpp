#include "Operator.h"
#include "GenericOperator.h"

void Operator::connectTo(GenericOperator* op) { 
  downstreamOp = op;
}

void Operator::emit(int data){
  downstreamOp->inQueue.push(data);
}



