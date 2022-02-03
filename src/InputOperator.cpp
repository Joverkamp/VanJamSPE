#include "InputOperator.h"
#include "GenericOperator.h"


void InputOperator::generate() {
  generateData();

  //let dowstreamOps now that input is done
  if(downstreamOps.empty() != true){
    for(auto op : downstreamOps){
      op->numInputsDone += 1;
      op->inQueue.endStream();
    }
  }

}
