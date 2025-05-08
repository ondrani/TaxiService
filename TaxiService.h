#pragma once
#include <string>
#include "Driver.h"
#include "Dispatcher.h"
#include "Order.h"

class TaxiService
{
private:
    int orderCount;
    int driverCount;
    int dispatcherCount;

    Driver **drivers;
    Dispatcher **dispatchers;
    Order **orders;

public:
    TaxiService(int driverCount, int dispatcherCount, int orderCount);
    ~TaxiService();

    void addDriver(Driver *d);
    void addDispatcher(Dispatcher *d);
    void createOrder(Order *o);

    void getDriver(int id);
    void getDispatcher(int id);
    void getOrder(int id);
};