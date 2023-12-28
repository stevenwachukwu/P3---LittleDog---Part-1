#ifndef cell_h
#define cell_h

#include <string>
using namespace std;

//Cell class 
class Cell {
    friend class SList;
public:
    string data; //data part of cell
    Cell* next = nullptr; //address part of the next cell
public:
    //the constructor
    Cell(string dataPassedIn) : data(dataPassedIn) {}
};
#endif
