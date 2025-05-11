#pragma once
#include <string>
#include "AbstractDriver.h"
#include "AbstractVehicle.h"

class Driver : public AbstractDriver
{

private:
    AbstractVehicle **vehicles;

    std::string name;
    int vehicleCount;
    int id;


public:
    Driver(int id, std::string name, int vehicleCapacity);
    ~Driver();

    std::string getName();
    void addVehicle(AbstractVehicle *v);
    void removeVehicle(std::string spz);
    AbstractVehicle *getVehicle(std::string spz);
};