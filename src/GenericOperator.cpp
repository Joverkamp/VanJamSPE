#include "GenericOperator.h"


void GenericOperator::execute(){
  //while(inQueue.checkDone() == false || inQueue.empty() == false){
  while(numInputs != numInputsDone || inQueue.empty() == false){
    if(inQueue.empty() == false){
      processData(inQueue.pop());  
    }
  }
  if(downstreamOp != nullptr){
    //may need a mutex on this TODO
    downstreamOp->numInputsDone += 1;
    downstreamOp->inQueue.endStream();
  }
  //std::cout << "This operator is done" << std::endl;
}

