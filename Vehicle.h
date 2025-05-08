#pragma once
#include <string>
#include "AbstractVehicle.h"

class Vehicle : public AbstractVehicle
{
private:
    std::string spz;

public:
    Vehicle(std::string spz);
    ~Vehicle() override;

    std::string GetSpz() override;
};