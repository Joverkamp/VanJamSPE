#include "Operator.h"
#include "GenericOperator.h"
#include "UnaryOperator.h"

/*
void Operator::connectTo(GenericOperator* op) { 
  //add operator to list of downstream ops
  downstreamOps.push_back(op);
  downstreamOps.back()->numInputs += 1;
}
*/

void Operator::connectTo(UnaryOperator* op) {
  //add operator to list of downstream ops
  downstreamOps.push_back(op);
  downstreamOps.back()->numInputs += 1;
}



void Operator::emit(Data data){
  //give data to all downstream ops
  for(auto op : downstreamOps){
    op->inQueue.push(data);
  }
}



