#include <iostream>
#include "box.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
int main(){
    std::string result;
    result = box(3,5);
    std::cout << "box(3,5):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = cross(8);
    std::cout << "cross(8):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = lower(6);
    std::cout << "lower(6):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = upper(6);
    std::cout << "upper(6):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    result = trapezoid(12,5);
    std::cout << "trapezoid(12,5):\n";
    std::cout << result;
    std::cout << "\n------------------\n";
    return 0;
}