#pragma once
#include <string>
#include "AbstractVehicle.h"

class Vehicle : public AbstractVehicle
{
private:
    std::string spz;
    static int vehicleCount;

protected:
    bool isZTP;

public:
    Vehicle(std::string spz);
    ~Vehicle() override;

    static int getVehicleCount();
    std::string GetSpz() override;
    virtual std::string getInfo() = 0;
};