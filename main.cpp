// main.cpp
#include <iostream>

int main(int argc, char const *argv[]) {
    int *p = new int;
    int const *Q = new int(100);
    std::cin >> *p;
    if (*p != *Q)
        std::cout << "Not 100. \n";
    delete p;
    delete Q;
    return 0;
}
