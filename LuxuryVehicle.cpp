#include "LuxuryVehicle.h"

LuxuryVehicle::LuxuryVehicle(std::string spz) : Vehicle(spz)
{
    this->isZTP = false;
}

LuxuryVehicle::~LuxuryVehicle()
{

}

std::string LuxuryVehicle::getInfo()
{
    return "Luxury vehicle with SPZ: " + this->GetSpz() + ", ZTP: " + (this->isZTP ? "Yes" : "No");
}