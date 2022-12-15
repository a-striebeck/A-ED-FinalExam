#include <iostream>
#include <figure.hpp>
#include <square.hpp>
#include <circle.hpp>

using namespace std;

int main(int argc, char const *argv[])
{figure* figs[3];

    figs[0] = new circle();
    figs[1] = new square();
    figs[2] = new square();

    figs[0]->setXvalue( 10 );
    figs[1]->setXvalue( 2 );
    figs[2]->setXvalue( 7 ); 

    int idx = 0;
    for ( int i = 0; i < 3 ; i++ ) {
        cout << "Figure number [" << idx++ << "]" 
             << "\n\tperimeter: " << figs[i]->perimeter()  // \n = salto de linea y \t es tabulación
             << "\n\tarea:..... " << figs[i]->area()     
             << std::endl;
    }

    delete figs[0];
    delete figs[1];
    delete figs[2];

    getchar();
    return 0;
}

