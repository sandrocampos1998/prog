#include "Bus.h"

Bus::Bus(unsigned int id, unsigned int driver, unsigned int line)
{
	this->orderInLine = id;
	this->driverId = driverId;
	this->lineId = line;
}

////////////////////////////////
// get methods
///////////////////////////////
unsigned int Bus::getBusOrderInLine() const
{
  return orderInLine;
}

unsigned int Bus::getDriverId() const
{
  return driverId;
}

unsigned int Bus::getLineId() const
{
  return lineId;
}

vector<Shift> Bus::getSchedule() const
{
  return schedule;
}

//////////////////////////////
// metodos set
/////////////////////////////
void Bus::setOrderInLine(unsigned int orderInLine)
{
	this->orderInLine = orderInLine;
}

void Bus::setDriverId(unsigned int driverId)
{
	this->driverId = driverId;
}

void Bus::setLineId(unsigned int lineId)
{
	this->lineId = lineId;
}

////////////////////////////
// outher methods
///////////////////////////
