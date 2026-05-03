#include <string>


#include "dish.hpp"


#include <iostream>


using namespace std;


class ClassTwo {
private:
    static const int capacity = 4;
    Dish dishobject[capacity];
    int above;


public:
    ClassTwo();

    void push(Dish dishes2);
    int size();
    Dish pop();
    Dish peek();

};