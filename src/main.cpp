#include <iostream>
#include <string.h>
#include <fstream>
#include <algorithm>
#include <vector>
#include "processStream.h"

std::string revWord(std::string word){
  reverse(word.begin(), word.end());
  return word;
}

int main(){
  std::string inFileName = "data.txt";
  std::string outFileName = "out.txt";

  processStream(inFileName, &revWord, outFileName);

  return 0;

}

