#pragma once
#include "Operator.h"

class InputOperator : public Operator {
  public:
    virtual void generateData() = 0; //user defined

    void generate();

};
