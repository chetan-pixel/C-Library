#include "test_lib.h"

myclass::myclass(char c, int b){
            obj1.name = c;
            obj1.roll_no = b;
        }

void myclass::show_data(void){
            std::cout << obj1.name << "\n";
            std::cout << obj1.roll_no << "\n";
        }