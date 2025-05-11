#include "RegisteredCustomer.h"
#include <iostream>

RegisteredCustomer::RegisteredCustomer(std::string name, std::string email)
{
    this->name = name;
    this->email = email;
}

RegisteredCustomer::~RegisteredCustomer()
{
    
}

void RegisteredCustomer::printInfo()
{
    std::cout << "Registered customer: " << this->getName() << ", Email: " << this->email << std::endl;
}