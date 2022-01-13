#include <iostream>
#include <algorithm>
#include "VanJamSPE.h"

class PrintOp : public GenericOperator {

  void processData(int data){
    std::cout << data << std::endl;
  }
};

class IncrementOp : public GenericOperator {

  void processData(int data){
    emit(data+1);    
  }
};

class NumbersOp : public InputOperator {
  
  void generateData(){
    for(int i = 0; i < 100; i++){
      emit(i);
    }
  }
};

int main(){

  NumbersOp op1;
  IncrementOp op2; 
  PrintOp op3;

  op1.connectTo(&op2);
  op2.connectTo(&op3);

  Engine engine;
  engine.registerInputOperator(&op1);
  engine.registerGenericOperator(&op2);
  engine.registerGenericOperator(&op3);
  engine.run();

  return 0;

}

