#pragma once
#include <vector>
#include <any>

class GenericOperator;

class Operator {
  protected:
    //GenericOperator* downstreamOp = nullptr;
    std::vector<GenericOperator*> downstreamOps;
  public:
    void emit(std::any data);

    void connectTo(GenericOperator* op);
};
