#include <square.hpp>

square::square(/* args */)
{}

square::~square()
{}

float square::perimeter(){
    float perimeter = x * x;
    return perimeter;
};

float square::area(){
    float area = x * 4;
    return area;
};

void square::setXvalue(float value){
    x = value;
}