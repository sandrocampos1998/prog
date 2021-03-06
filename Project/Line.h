#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Line
{
 private:
  unsigned int id;
  unsigned int freqBus;
  vector<string> busStopList;
  vector<int> timesList;
 public:
  Line(unsigned int id, unsigned int freqBus, vector<string> busStopList, vector<int> timesList);
  Line(string textLine);
  // set methods
  void setId(unsigned int id);
  void setFreqBus(unsigned int freqBus);
  void setBusStopList(vector<string> busStopList);
  void setTimesList(vector<int> timeList);
  // get methods
  unsigned int getId() const;
  unsigned int getFreqBus() const;
  vector<string> getBusStops() const;
  vector<int> getTimings() const;
  // other methods
  vector<string> obterParagens(vector<string> busStopList);
  vector<int> obterTempos(vector<int> timesList);
};