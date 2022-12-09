#include <iostream>
#include <square.hpp>
#include <circle.hpp>

using namespace std;

int main(int argc, char const *argv[])
{
    figure* figura[3];
    figura[0] = new circle();
    figura[1] = new square();
    figura[2] = new square();

        
    
    delete figura[0];
    delete figura[1];
    delete figura[2];
    getchar();
    return 0;
}

