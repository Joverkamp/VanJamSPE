#include <iostream>
#include <algorithm>
#include "VanJamSPE.h"

std::string revWord(std::string word){
  reverse(word.begin(), word.end());
  return word;
}

int main(){

  // Read input file from "../apps/simple_test.in_data"
  std::cout << "Hello SPE" << std::endl;

  return 0;

}

