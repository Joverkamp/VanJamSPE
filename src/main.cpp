#include <iostream>
#include <string.h>
#include <fstream>
#include <algorithm>
#include <vector>
#include "VanJamSPE.h"

std::string revWord(std::string word){
  reverse(word.begin(), word.end());
  return word;
}

int main(){
/*
 * FIRST TRY WITH THREADS, BUT NO OPERATOR CLASS
 * std::string inFileName = "data.txt";
  std::string outFileName = "out.txt";

  processStream(inFileName, &revWord, outFileName);
*/

  std::cout << "Hello SPE" << std::endl;

  return 0;

}

