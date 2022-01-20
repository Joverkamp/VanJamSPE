#include "InputOperator.h"
#include "GenericOperator.h"


void InputOperator::generate() {
  generateData();
  if (downstreamOp != nullptr) {
    downstreamOp->inQueue.endStream();
  }
}
