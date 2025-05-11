#include "Driver.h"

Driver::Driver(int id, std::string name, int vehicleCapacity)
{
    this->vehicles = new AbstractVehicle * [vehicleCapacity];

    this->id = id;
    this->name = name;
    this->vehicleCount = 0;
}

Driver::~Driver()
{
    for (int i = 0; i < vehicleCount; i++)
    {
        if (this->vehicles[i] != nullptr)
        {
            delete this->vehicles[i];
        }
    }

    delete[] this->vehicles;
}

std::string Driver::getName()
{
    return this->name;
}

void Driver::addVehicle(AbstractVehicle *v)
{
    this->vehicles[this->vehicleCount] = v;
    this->vehicleCount += 1;
}

void Driver::removeVehicle(std::string spz)
{
    for (int i = 0; i < vehicleCount; i++)
    {
        if (this->vehicles[i] != nullptr)
        {
            if (this->vehicles[i]->GetSpz() == spz)
            {
                delete this->vehicles[i];
                this->vehicles[i] = nullptr;
            }
        }
    }
}

AbstractVehicle* Driver::getVehicle(std::string spz)
{
    for (int i = 0; i < this->vehicleCount; i++)
    {
        if (this->vehicles[i] != nullptr)
        {
            if (this->vehicles[i]->GetSpz() == spz)
            {
                return this->vehicles[i];
            }
        }
    }
    
    return nullptr;
}
