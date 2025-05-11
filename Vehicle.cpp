#include "Vehicle.h"

int Vehicle::vehicleCount = 0;

Vehicle::Vehicle(std::string spz)
{
    this->spz = spz;
    Vehicle::vehicleCount += 1;
}

Vehicle::~Vehicle()
{
    Vehicle::vehicleCount -= 1;
}

std::string Vehicle::GetSpz()
{
    return this->spz;
}

int Vehicle::getVehicleCount()
{
    return vehicleCount;
}