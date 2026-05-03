#include <string>


#include "dish.hpp"


#include <iostream>


using namespace std;


class ClassTwo {
private:
    static const int capacity = 4;
    int above;
    Dish dishobject[capacity];
    


public:
    ClassTwo();

    void push(Dish dishes2);
    int size();
    Dish pop();
    Dish peek();

};
