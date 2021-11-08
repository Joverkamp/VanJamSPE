#include <iostream>
#include <string.h>
#include <fstream>
#include <thread>
#include <unistd.h>
#include "SafeQueue.h"

void readFile(std::string inFileName, SafeQueue<std::string> *inQueue){
  std::ifstream inFile(inFileName);
  std::string word;
  while(inFile >> word){
    inQueue->push(word);
  }
  inQueue->endStream();
  inFile.close();
}


void processData(SafeQueue<std::string> *inQueue, SafeQueue<std::string> *outQueue, std::string(*func)(std::string)){ 
  //process data from inQueue into outQueue
  while(inQueue->checkDone() == false || !inQueue->empty()){
    while(!inQueue->empty()){
      std::string nextWord = inQueue->pop();
      std::string outWord = func(nextWord);
      outQueue->push(outWord);
    }
  }
  outQueue->endStream();
}


void writeFile(std::string outFileName, SafeQueue<std::string> *outQueue){ 
  std::ofstream outFile(outFileName);
  //write data from outQueue to outFile
  while (outQueue->checkDone() == false || !outQueue->empty()){
    while(!outQueue->empty()){
      std::cout << "inside empty: " <<outQueue->checkDone() << std::endl;
      std::cout << outQueue->empty() << std::endl;
      std::string nextWord = outQueue->pop();
      outFile << nextWord << std::endl;
    }
  }
  outFile.close();
}


void processStream(std::string inFileName,
                   std::string(*func)(std::string),
                   std::string outFileName){
  //open in/out files
  std::ofstream outFile(outFileName);
  //create in/out queus
  SafeQueue<std::string> inQueue;
  SafeQueue<std::string> outQueue;

  //Spawn threads to read data/process data/write data
  std::thread t1(readFile, inFileName, &inQueue);
  std::thread t2(processData, &inQueue, &outQueue, func);
  std::thread t3(writeFile, outFileName, &outQueue);
  t1.join();
  t2.join();
  t3.join();
}
