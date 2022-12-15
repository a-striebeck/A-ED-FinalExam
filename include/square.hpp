
#ifndef SQUARE_HPP
#define SQUARE_HPP
#include <figure.hpp>
class square : public figure
{
public:
    square();
    ~square();
    float perimeter();
    float area();
    void setXvalue(float value);
};

#endif // SQUARE