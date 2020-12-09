#include <iostream>

#ifndef TEST_H
    #define TEST_H

    typedef unsigned char byte;

    struct my_structure_1{
        char name;
        int roll_no;
    };

    enum surname {nahar,sharma,pandey,tendulkar};


    class myclass
    {
        private:
            my_structure_1 obj1;
        public:
            int h;
            myclass(char c, int b);
            void show_data(void);
    };
    // myclass::myclass(char c, int b){
    //     obj1.name = c;
    //     obj1.roll_no = b;
    // }

    // void myclass::show_data(void){
    //             std::cout << obj1.name << "\n";
    //             std::cout << obj1.roll_no << "\n";
    //         }
#endif