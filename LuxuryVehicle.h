#pragma once

#include "Vehicle.h"

class LuxuryVehicle : public Vehicle
{
private:
public:
    LuxuryVehicle(std::string spz);
    ~LuxuryVehicle();

    std::string getInfo() override;
};