#pragma once
#include <iostream>
#include <string.h>
#include <queue>
#include <mutex>
#include <any>

#include "Data.h"

class SafeQueue{
  private:
    std::queue<Data> q;
    std::mutex m;
    bool streamEnd = false;

  public:
    int size(){
      return q.size();
    }

    bool empty(){
      return q.empty();
    }

    void push(Data item){
      m.lock();
      q.push(item);
      m.unlock();
    }

    Data pop(){
      m.lock();
      Data retVal = q.front();
      q.pop();
      m.unlock();
      return retVal;
    }

    bool checkDone(){
      return streamEnd;
    }

    void endStream(){
      m.lock();
      streamEnd = true;
      m.unlock();
    }
};
