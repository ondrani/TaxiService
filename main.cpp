#include <iostream>
#include <string>

#include "TaxiService.h"
#include "CarVehicle.h"
#include "BusVehicle.h"
#include "LuxuryVehicle.h"
#include "RegisteredCustomer.h"
#include "AnonymousCustomer.h"

#define DRIVER_COUNT 10
#define DISPATCHER_COUNT 10
#define ORDER_COUNT 100

using namespace std;

int main()
{
    cout << "--- Driver and Vehicle Management ---" << endl;

    // Vytvoření instance TaxiService
    TaxiService *ts = new TaxiService(DRIVER_COUNT, DISPATCHER_COUNT, ORDER_COUNT);

    // Vytvoření řidiče a vozidel
    Driver *d = new Driver(3, "Pepa", 30);
    cout << "Driver name: " << d->getName() << endl;

    AbstractVehicle *car = new CarVehicle("1A2B3C");
    AbstractVehicle *bus = new BusVehicle("4D5E6F");
    AbstractVehicle *luxury = new LuxuryVehicle("7G8H9I");

    // Přidání vozidel k řidiči
    d->addVehicle(car);
    d->addVehicle(bus);
    d->addVehicle(luxury);
    cout << "Vehicle count: " << Vehicle::getVehicleCount() << endl;

    // Odstranění vozidla
    d->removeVehicle("1A2B3C");
    cout << "Vehicle count: " << Vehicle::getVehicleCount() << endl;

    // Přidaení řidiče do taxi služby
    ts->addDriver(d);

    cout << d->getVehicle("4D5E6F")->getInfo() << endl;
    cout << d->getVehicle("7G8H9I")->getInfo() << endl;
    cout << endl;

    cout << "--- Customer Management ---" << endl;

    AbstractCustomer *customer1 = new RegisteredCustomer("Petr", "petr@email.cz");
    AbstractCustomer *customer2 = new AnonymousCustomer();
    customer1->printInfo();
    customer2->printInfo();
    cout << endl;
    

    delete ts;

    getchar();
    return 0;
}