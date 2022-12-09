#ifndef FIGURE
#define FIGURE

class figure
{
    private:
    float x;
    public:
    figure(/* args */);
    ~figure();
    virtual float perimeter()=0;
    virtual float area()=0; 
    virtual void setXvalue()=0;


};
figure::figure(/* args */){};
figure::~figure(){};

#endif // FIGURE