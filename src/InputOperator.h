#pragma once
#include "Operator.h"

class InputOperator : public Operator {
  public:
    virtual void generateData() = 0; //user defined

    /*
    // Maybe have the thread start on this function instead?!?!
    void startGeneratingData() {
      generateData();

      // Maybe this?
      done = true;

      // Probably this instead?
      call the done function/flag/whatever on the downstream SafeQueue?
    }
    */

};
