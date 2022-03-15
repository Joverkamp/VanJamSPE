#pragma once
#include <chrono>
#include <any>

class Data{
  public:
    std::any data;
    long long int timeStamp;

    Data(std::any _data){
      data = _data;
      timeStamp = now();
    }
    
    Data(std::any _data, long long int _timeStamp){
      data = _data;
      timeStamp = _timeStamp;
    }

  private:
      long long int now() {
        using namespace std::chrono;
        duration<double, std::micro> t = system_clock::now().time_since_epoch();
        return t.count();
    }
};
