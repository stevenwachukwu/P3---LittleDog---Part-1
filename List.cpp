#include "List.h"

void SList::start() {
    head = nullptr; //initializing the head with null pointer
    count = 0; //count with null
}
void SList::print(ostream& out) const {
    Cell* s = head; //assigning the head value to a temporary pointer 
    while (s != nullptr) {  //repeating the operation until the temporary pointer is null
        out << s->data << endl; //out the cell data
        s = s->next; //move into next cell
    }
}

void SList::insert(string data) {
    Cell* newcell = new Cell(data); //creating a new cell
    if (head != NULL) {
        newcell->next = head; //saving the head in a new item
        head = newcell; //making the head point to the newest entry
    }
    else {
        head = newcell;
    }
    count++;
}

void SList::setHead(Cell* h) {
   head = h;
}

void SList::setCount(int c) {
    count = c;
}

 Cell* SList::getHead() {
    return head;
}


int SList::getCount() {
    return count;
}
