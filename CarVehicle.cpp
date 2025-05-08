#include "CarVehicle.h"

CarVehicle::CarVehicle(std::string spz) : Vehicle(spz)
{
    this->isZTP = false;
}

CarVehicle::~CarVehicle()
{

}

std::string CarVehicle::getInfo()
{
    return "Car vehicle with SPZ: " + this->GetSpz() + ", ZTP: " + (this->isZTP ? "Yes" : "No");
}