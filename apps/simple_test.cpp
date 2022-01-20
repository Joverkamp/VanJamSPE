#include <iostream>
#include <algorithm>
#include "VanJamSPE.h"

class PrintOp : public GenericOperator {
  public:  
    void processData(int data){
      //std::cout << "printOp " <<  data << std::endl;
      std::cout << data << std::endl;
    }
};

class IncrementOp : public GenericOperator {
  public:  
    void processData(int data){
      //std::cout << "incrementOp emitting(" << data+1 << ")\n";
      emit(data+1);    
    }
};

class NumbersOp : public InputOperator {
  public:  
    void generateData(){
      for(int i = 0; i < 10; i++){
        //std::cout << "numbersOp emitting(" << i << ")\n";
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

