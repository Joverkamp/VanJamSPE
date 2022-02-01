#pragma once
#include "Operator.h"
#include "SafeQueue.h"


class GenericOperator : public Operator {
  public:
    virtual void processData(int data) = 0;
    SafeQueue<int> inQueue;
    int numInputs = 0;
    int numInputsDone = 0;
    void execute();
};
