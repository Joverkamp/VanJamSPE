#include "GenericOperator.h"


void GenericOperator::execute(){
  while(inQueue.checkDone() == false || inQueue.empty() == false){
    if(inQueue.empty() == false){
      processData(inQueue.pop());  
    }
  }
  if(downstreamOp != nullptr){
    downstreamOp->inQueue.endStream();
  }
  //std::cout << "This operator is done" << std::endl;
}

