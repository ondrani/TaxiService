#pragma once
#include "Customer.h"

class RegisteredCustomer : public Customer {
private:
    std::string email;
public:
    RegisteredCustomer(std::string name, std::string email);
    ~RegisteredCustomer();

    void printInfo() override;
};