#include <figure.hpp>
#ifndef SQUARE
#define SQUARE

class square : public figure
{
private:
    float x;
public:
    square(/* args */);
    ~square();
    float perimeter();
    float area();
    void setXvalue(float value);
};

#endif // SQUARE