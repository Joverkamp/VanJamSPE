#pragma once
#include <vector>

class GenericOperator;

class Operator {
  protected:
    //GenericOperator* downstreamOp = nullptr;
    std::vector<GenericOperator*> downstreamOps;
  public:
    void emit(int data);

    void connectTo(GenericOperator* op);
};
