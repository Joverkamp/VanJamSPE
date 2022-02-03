#include "Operator.h"
#include "GenericOperator.h"

void Operator::connectTo(GenericOperator* op) { 
  //add operator to list of downstream ops
  downstreamOps.push_back(op);
  downstreamOps.back()->numInputs += 1;
}

void Operator::emit(int data){
  //give data to all downstream ops
  for(auto op : downstreamOps){
    op->inQueue.push(data);
  }
}



