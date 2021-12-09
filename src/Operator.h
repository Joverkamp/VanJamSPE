#pragma once

class GenericOperator;

class Operator {
  private:
    GenericOperator* downstreamOp;

  public:
    void emit(int data);

    void connectTo(GenericOperator* op);
};
