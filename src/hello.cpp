#include <string>

#include "hello.hpp"
#include <iostream>


using namespace std;





int ClassTwo::size() {
    return above;
};


ClassTwo::ClassTwo() : dishobject{ Dish(""), Dish(""), Dish(""), Dish("") } {
    above = 0;

};



void ClassTwo::push(Dish dishes2) {
    if (above ==capacity) {
        std::cout<<"There is no room left."<<std::endl;
        return;
    };

    dishobject[above] = dishes2;
    above++;
};



Dish ClassTwo::peek() {
    if (above==0) {
        std::cout<<"This is empty, add something here."<<std::endl;
        return Dish("");
    };
    return dishobject[above-1];
}

Dish ClassTwo::pop() {
    if (above==0) {
        std::cout<<"This is empty, add something here.."<<std::endl;
        return Dish("");
    };

    above--;
    return dishobject[above];
};




