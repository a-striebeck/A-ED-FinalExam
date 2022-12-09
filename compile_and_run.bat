:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include -c .\src\circle.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\square.cpp 
g++ -Wall -std=c++11 -I.\include -c main.cpp 

:: Compilo el Binario
g++ -I.\include circle.o square.o main.o -o application.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto
application.exe