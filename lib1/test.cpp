#include "test_lib.h"
int main() {
    myclass h('0',10);
    h.show_data();
    myclass g('1',20);
    g = myclass('5',50);
    g.show_data();

    surname my;
    my = nahar;
    std::cout << my << "\n";

    return 0;
}