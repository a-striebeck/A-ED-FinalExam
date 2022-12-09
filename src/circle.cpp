#include <circle.hpp>
#include <cmath>

circle::circle(/* args */)
{
}

circle::~circle()
{
}

float circle::perimeter(){
    float perimeter = 2 * pi * x;
    return perimeter;
}

float circle::area(){
    float area = pow(pi * x, 2);
    return area;
}

void circle::setXvalue(float value){
    x = value;
}
