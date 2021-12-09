
#include "Engine.h"


void Engine::registerInputOperator(InputOperator* op) {
  inputOps.push_back(op);
}

void Engine::registerGenericOperator(GenericOperator* op) {
  genericOps.push_back(op);
}

void Engine::run() {
  // TODO: Launch input thread


  // TODO: Launch generic thread
}

