#include <iostream>
#include "cassert"

float timeTravel(float distance, float speed){
    assert(distance >=0 && speed >0);
    return distance/speed;
}

float input(std::string prompt){
    std::cout << prompt << std::endl;
    float value;
    std::cin >> value;
    return value;
}
void output(std::string key,float value){
    std::cout << key << " = "  << value <<std::endl;
}
int main() {
    timeTravel(-10.f,90);
    timeTravel(80,0);
    output("Travel time",timeTravel(input("Input Distance: "), input("Input speed: ")));
    return 0;
}
