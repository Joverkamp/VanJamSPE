
#include <thread>
#include "Engine.h"


void Engine::registerInputOperator(InputOperator* op) {
  inputOps.push_back(op);
}

void Engine::registerGenericOperator(GenericOperator* op) {
  genericOps.push_back(op);
}

void Engine::run() {
  // Launch input thread(s)
  std::vector<std::thread> inputThreads;
  for(auto inputOp : inputOps) {
    inputThreads.push_back( std::thread(&InputOperator::generate, inputOp) );
  }

  std::vector<std::thread> genericThreads;
  for(auto genericOp : genericOps) {
    inputThreads.push_back( std::thread(&GenericOperator::execute, genericOp) );
  }

  // Wait/join inputThreads
  for(auto &inputThread : inputThreads){
    inputThread.join();
  }

  for(auto &genericThread : genericThreads){
    genericThread.join();
  }


  // Done.
}

