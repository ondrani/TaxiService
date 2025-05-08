#include <iostream>
#include <string>

#include "TaxiService.h"
#include "CarVehicle.h"
#include "BusVehicle.h"
#include "LuxuryVehicle.h"


#define DRIVER_COUNT 10
#define DISPATCHER_COUNT 10
#define ORDER_COUNT 100

using namespace std;

int main()
{
    TaxiService *ts = new TaxiService(DRIVER_COUNT, DISPATCHER_COUNT, ORDER_COUNT);

    Driver *d = new Driver(3, "Pepa", 30);
    Vehicle *car = new CarVehicle("1A2B3C");
    Vehicle *bus = new BusVehicle("4D5E6F");
    Vehicle *luxury = new LuxuryVehicle("7G8H9I");

    d->addVehicle(car);
    d->addVehicle(bus);
    d->addVehicle(luxury);
    ts->addDriver(d);

    delete ts;

    getchar();
    return 0;
}