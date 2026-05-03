#include <iostream>

#include "src/hello.hpp"

using namespace std;



int main() {

    int userselection = 0;
    string desc;

    ClassTwo listitem;


    while (userselection != 5) {
        std::cout<<"1. Push your dish"<<std::endl;
        std::cout<<"2. Pop your dish"<<std::endl;
        std::cout<<"3. Peek the very beginning dish"<<std::endl;
        std::cout<<"4. List quantity"<<std::endl;
        std::cout<<"5. Thank you for using the program!"<<std::endl;
        std::cout<<"Enter selection: "<<std::endl;
        std::cin>>userselection;


        if (userselection == 1) {
            std::cout<<"Enter dish description: "<<std::endl;
            cin.ignore();
            std::getline(std::cin,desc);


            Dish dish(desc);
            listitem.push(dish);

            std::cout<<"Quantity of the list as it is: "<<listitem.size()<<std::endl;


        };


        if (userselection == 2) {
            if (listitem.size() == 0) {
                std::cout<<"Empty list"<<std::endl;
            } else {
                Dish dishpop = listitem.pop();


                std::cout<<"Dish that was used in pop: "<<dishpop.get_description()<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"Quantity of the list as it is: "<<listitem.size()<<std::endl;



            };
        };


        if (userselection == 3) {
            if (listitem.size() == 0) {
                std::cout<<"Empty list"<<std::endl;
            } else {
                Dish verybeginningdish = listitem.peek();
                std::cout<<"Dish at the very beginningL "<<verybeginningdish.get_description()<<std::endl;
                std::cout<<"\n";
                std::cout<<"\n";
                std::cout<<"Quantity of the list as it is: "<<listitem.size()<<std::endl;


            };






        };


        if (userselection == 4) {
            std::cout<<"Quantity of the list as it is: "<<listitem.size()<<std::endl;
            std::cout<<"\n";
            std::cout<<"\n";

        };


        if (userselection == 5) {
            std::cout<<"Thanks for using this program. Hopefully youll use it next time!"<<std::endl;
            std::cout<<"\n";
            std::cout<<"\n";

        };


        if (userselection <1||userselection>5) {
            std::cout<<"Wrong range."<<listitem.size()<<std::endl;
            std::cout<<"\n";
            std::cout<<"\n";

        }







    };


    return 0;





}
