#pragma once
#include <string>

class AbstractVehicle
{
private:
public:
    AbstractVehicle();
    virtual ~AbstractVehicle() = 0;

    virtual std::string GetSpz() = 0;
};