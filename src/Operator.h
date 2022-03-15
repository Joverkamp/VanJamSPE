#pragma once
#include <vector>
#include <any>
#include "Data.h"

class GenericOperator;

class Operator {
  protected:
    //GenericOperator* downstreamOp = nullptr;
    std::vector<GenericOperator*> downstreamOps;
  public:
    void emit(Data data);

    void connectTo(GenericOperator* op);
};
