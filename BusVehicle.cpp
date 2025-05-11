#include "BusVehicle.h"

BusVehicle::BusVehicle(std::string spz) : Vehicle(spz)
{
    this->isZTP = true;
}

BusVehicle::~BusVehicle()
{

}

std::string BusVehicle::getInfo()
{
    return "Bus vehicle with SPZ: " + this->GetSpz() + ", ZTP: " + (this->isZTP ? "Yes" : "No");
}