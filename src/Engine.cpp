
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
    inputThreads.push_back( std::thread(&InputOperator::generateData, inputOp) );
  }


  // TODO: Launch generic threads
  // While Not all operators are done
    // For each not done operator (Since some are still running)
      // Process data


  // Wait/join inputThreads
  for(auto &inputThread : inputThreads)
    inputThread.join();


  // Done.
}

