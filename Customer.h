#pragma once
#include "AbstractCustomer.h"

class Customer : public AbstractCustomer {
public:
    Customer(std::string name);
    Customer();
    ~Customer();

    std::string getName() override;
    void printInfo() override;
};