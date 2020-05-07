#ifndef Room_hpp
#define Room_hpp
#include "item.hpp"
#include <string>
#include <iostream>

class Door; // allows us to reference door when door refereneces Room.
class Student;

using namespace std;

class Room
{
    private:
        string title;
        Door* collectionOfDoors[10];
        int currentNumberOfDoors;
        item* object[10];
        int itemCount;
    
    public:
        Room(string title);
        string getRoomName();
        void addDoor(Door* portal);
        void doorDisplay();
        string getItem(string itemGrab);
        string getItem(int itemGrab);
        void addItem(item* itemGrab);
        string removeItem(string itemGrab);

};
#endif