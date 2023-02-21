#include <iostream>
#include "box.h"
#include "lower.h"
int main(){
    std::string result;
    result = box(3,5);
    std::cout << "box(3,5):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    std::string results;
    results = lower(6);
    std::cout << "lower(6):\n";
    std::cout << results;
    std::cout << "\n------------------\n";
    return 0;
}