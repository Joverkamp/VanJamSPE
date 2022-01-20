#pragma once

class GenericOperator;

class Operator {
  protected:
    GenericOperator* downstreamOp = nullptr;

  public:
    void emit(int data);

    void connectTo(GenericOperator* op);
};
