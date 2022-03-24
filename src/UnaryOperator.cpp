#include "UnaryOperator.h"


void UnaryOperator::execute(){
  //process data while stream is not closed and queue isnot empty
  while(numInputs != numInputsDone || inQueue.empty() == false){
    if(inQueue.empty() == false){
      processData(inQueue.pop());
    }
  }

  //let dowstreamOps now that input is done
  if(downstreamOps.empty() != true){
    for(auto op : downstreamOps){
      op->numInputsDone += 1;
      op->inQueue.endStream();
    }
  }
  //std::cout << "This operator is done" << std::endl;
}
