#include "Student.hpp"
#include <iostream>

Student::Student(string name)
{
    this->name = name;
    this->currentRoom = 0;
}
string Student::getName()
{
    return this->name;
}
Room* Student::getCurrRoom()
{
    if(this->currentRoom != 0)
    {
        return this->currentRoom;
    }
    else
    {
        cout << "not assigned" << "\n";
    }
    
}
void Student::assignRoom(Room* currRoom)
{
    this->currentRoom = currRoom;
}