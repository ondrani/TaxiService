#pragma once
#include <string>

class AbstractCustomer {
protected:
    std::string name;
public:
    AbstractCustomer(std::string name);
    virtual ~AbstractCustomer() = 0;

    virtual std::string getName() = 0;
    virtual void printInfo() = 0;
};
