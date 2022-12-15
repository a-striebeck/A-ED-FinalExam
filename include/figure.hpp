#ifndef FIGURE_HPP
#define FIGURE_HPP

class figure
{
    
    public:
    float x;
    figure();
    virtual ~figure();
    virtual float perimeter()=0;
    virtual float area()=0; 
    virtual void setXvalue(float value)=0;


};
figure::figure(){}
figure::~figure(){}

#endif