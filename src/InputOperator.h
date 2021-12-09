#pragma once
#include "Operator.h"

class InputOperator : public Operator {
  virtual void generateData() = 0; //user defined
};
