#include "AnonymousCustomer.h"
#include <iostream>

AnonymousCustomer::AnonymousCustomer() : Customer("Anonym")
{
    
}

AnonymousCustomer::~AnonymousCustomer()
{

}

void AnonymousCustomer::printInfo()
{
    std::cout << "Anonymous customer" << std::endl;
}
