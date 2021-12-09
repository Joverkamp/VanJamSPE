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

  // Read input file from "../apps/simple_test.in_data"
  PrintOp op3;
  IncrementOp op2; 
  NumbersOp op1;

  op1.connectTo(&op2);
  op2.connectTo(&op3);

  return 0;

}

