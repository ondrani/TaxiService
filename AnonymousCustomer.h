#pragma once
#include "Customer.h"

class AnonymousCustomer : public Customer {
public:
    AnonymousCustomer();
    ~AnonymousCustomer();

    void printInfo() override;
};