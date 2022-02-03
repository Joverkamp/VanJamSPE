#pragma once
#include "Operator.h"
#include "SafeQueue.h"


class GenericOperator : public Operator {
  public:
    virtual void processData(std::any data) = 0;
    SafeQueue<std::any> inQueue;
    int numInputs = 0;
    int numInputsDone = 0;
    void execute();
};
