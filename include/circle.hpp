#include <figure.hpp>
#ifndef CIRCLE
#define CIRCLE

class circle : public figure
{
private:
    float x;
    const float pi = 3.1416;
public:
    circle(/* args */);
    ~circle();
    float perimeter();
    float area();
    void setXvalue(float value);
};

#endif // CIRCLE
