#include "InputOperator.h"
#include "GenericOperator.h"


void InputOperator::generate() {
  generateData();
  if (downstreamOp != nullptr) {
    //may need a mutex on this TODO
    downstreamOp->numInputsDone += 1;
    downstreamOp->inQueue.endStream();
  }
}
