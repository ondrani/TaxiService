#include "Vehicle.h"

Vehicle::Vehicle(std::string spz)
{
    this->spz = spz;
}

Vehicle::~Vehicle()
{
}

std::string Vehicle::GetSpz()
{
    return this->spz;
}