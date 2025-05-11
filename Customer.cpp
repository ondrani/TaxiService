#include "Customer.h"
#include <iostream>

Customer::Customer(std::string name) : AbstractCustomer(name)
{

}

Customer::Customer() : AbstractCustomer("Anonym")
{

}

Customer::~Customer()
{

}

std::string Customer::getName()
{
    return this->name;
}

void Customer::printInfo()
{
    std::cout << "Customer: " << this->name << std::endl;
}