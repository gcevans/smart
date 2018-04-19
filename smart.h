#ifndef SMART_H
#define SMART_H

#include<iostream>


class DeleteMe {
public:
    DeleteMe() { std::cout << "Construct: " << this << std::endl;}
    ~DeleteMe() {std::cout << "Destruct: " << this << std::endl;}
};

#endif //SMART_H
