#pragma once
#include "Operator.h"
#include "SafeQueue.h"


class GenericOperator : public Operator {
  public:
    virtual void processData(int data) = 0; //user defined
    SafeQueue<int> inQueue;
    void execute() {};
};
