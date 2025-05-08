#include "TaxiService.h"

TaxiService::TaxiService(int driverCount, int dispatcherCount, int orderCount)
{
    this->drivers = new Driver *[driverCount];
    this->dispatchers = new Dispatcher *[dispatcherCount];
    this->orders = new Order *[orderCount];

    this->orderCount = 0;
    this->dispatcherCount = 0;
    this->orderCount = 0;
}

TaxiService::~TaxiService()
{
    for (int i = 0; i < driverCount; i++)
    {
        if (this->drivers[i] != nullptr)
        {
            delete this->drivers[i];
        }
    }

    for (int i = 0; i < dispatcherCount; i++)
    {
        if (this->dispatchers[i] != nullptr)
        {
            delete this->drivers[i];
        }
    }

    for (int i = 0; i < orderCount; i++)
    {
        if (this->orders[i] != nullptr)
        {
            delete this->orders[i];
        }
    }

    delete[] this->drivers;
    delete[] this->orders;
    delete[] this->dispatchers;
}

void TaxiService::addDriver(Driver *d)
{
    this->drivers[this->driverCount] = d;
    this->driverCount += 1;
}