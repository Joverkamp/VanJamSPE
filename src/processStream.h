#include <iostream>
#include <string.h>
#include <fstream>
#include <queue>

void processStream(std::string inFileName,
              std::string(*func)(std::string),
              std::string outFileName){
  //open in/out files
  std::ifstream inFile(inFileName);
  std::ofstream outFile(outFileName);
  //create in/out queus
  std::queue<std::string> in;
  std::queue<std::string> out;
  
  //readdata from inFile into inQueue
  std::string word;
  while(inFile >> word){
    in.push(word);
  }
  inFile.close();
  
  //process data from inQueue into outQueue
  while(!in.empty()){
    std::string nextWord = in.front();
    in.pop();
    std::string outWord = func(nextWord);
    out.push(outWord);
  }

  //write data from outQueue to outFile
  while(!out.empty()){
    std::string nextWord = out.front();
    out.pop();
    outFile << nextWord;
  }
  outFile.close();
}
