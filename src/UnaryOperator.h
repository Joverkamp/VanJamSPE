#pragma once
#include "GenericOperator.h"
#include "SafeQueue.h"

class UnaryOperator : public GenericOperator {
  public:
    virtual void processData(Data data) = 0;
    SafeQueue inQueue;
    int numInputs = 0;
    int numInputsDone = 0;
};
