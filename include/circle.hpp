
#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include <figure.hpp>
class circle : public figure
{
private:
    const float pi = 3.1416;
public:
    circle();
    ~circle();
    float perimeter();
    float area();
    void setXvalue(float value);
};

#endif 
