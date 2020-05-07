#include "Door.hpp"
#include <iostream>

Door::Door(string directionToRoomA, Room* roomA, string directionToRoomB, Room* roomB)
{
    this->directionToRoomA = directionToRoomA;
    this->directionToRoomB = directionToRoomB;
    this->roomA = roomA;
    this->roomB = roomB;
}
Room* Door::GetRoom(string direction)
{
    if(direction == directionToRoomA)
    {
        return roomA;
    }
    else if(direction == directionToRoomB)
    {
        return roomB;
    }
    else
    {
        cout << "not a door in this room" << "\n";
    }
    
}