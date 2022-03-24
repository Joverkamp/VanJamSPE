#pragma once
#include "Operator.h"
#include "SafeQueue.h"


class GenericOperator : public Operator {
  public:
//    virtual void processData(Data data) = 0;
//    SafeQueue inQueue;
//    int numInputs = 0;
//    int numInputsDone = 0;
//    void execute();
      virtual void execute() = 0;
};
