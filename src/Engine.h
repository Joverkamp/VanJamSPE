#pragma once
#include <vector>

#include "GenericOperator.h"
#include "InputOperator.h"

class Engine {
  private:
    std::vector<InputOperator*> inputOps;
    std::vector<GenericOperator*> genericOps;

  public:
    void registerInputOperator(InputOperator* op);
    void registerGenericOperator(GenericOperator* op);
    void run();

};
