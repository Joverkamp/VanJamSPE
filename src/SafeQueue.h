#pragma once
#include <iostream>
#include <string.h>
#include <queue>
#include <mutex>

template <typename T>
class SafeQueue{
  private:
    std::queue<T> q;
    std::mutex m;
    bool streamEnd = false;

  public:
    int size(){
      return q.size();
    }

    bool empty(){
      return q.empty();
    }

    void push(T item){
      m.lock();
      q.push(item);
      m.unlock();
    }

    T pop(){
      m.lock();
      T retVal = q.front();
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
