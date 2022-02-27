#include <iostream>
#include <algorithm>
#include "VanJamSPE.h"

class PrintOp : public GenericOperator {
  public:  
    void processData(Data data){
      //std::cout << "printOp " <<  data << std::endl;
      //std::cout << std::any_cast<int>(data) << std::endl;
      std::cout << std::any_cast<int>(data.data) << std::endl;
    }
};

class IncrementOp : public GenericOperator {
  public:  
    void processData(Data data){
      //std::cout << "incrementOp emitting(" << data+1 << ")\n";
      //int val = std::any_cast<int>(data.data)+1;    
      data.data = std::any_cast<int>(data.data)+1;    
      emit(data);    
    }
};

class EvenNumbersOp : public InputOperator {
  public:  
    void generateData(){
      for(int i = 0; i < 100; i+=2){
        //std::cout << "numbersOp emitting(" << i << ")\n";
        emit(Data(i));
      }
    }
};

class OddNumbersOp : public InputOperator {
  public:  
    void generateData(){
      for(int i = 1; i < 100; i+=2){
        //std::cout << "numbersOp emitting(" << i << ")\n";
        emit(Data(i));
      }
    }
};
int main(){

  EvenNumbersOp op1;
  OddNumbersOp op2;
  IncrementOp op3; 
  PrintOp op4;
  PrintOp op5;

  op1.connectTo(&op3);
  op2.connectTo(&op3);
  op3.connectTo(&op4);
  op3.connectTo(&op5);

  Engine engine;
  engine.registerInputOperator(&op1);
  engine.registerInputOperator(&op2);
  engine.registerGenericOperator(&op3);
  engine.registerGenericOperator(&op4);
  engine.registerGenericOperator(&op5);
  engine.run();

  return 0;

}

