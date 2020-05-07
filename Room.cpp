#include "Room.hpp"
#include <iostream>

Room::Room(string title)
{
    this->title = title;
    this->currentNumberOfDoors = 0;
}
string Room::getRoomName()
{
    return this->title;
}
void Room::addDoor(Door* portal)
{
    for(int i = 0; i < 10; i++)
    {
        if(this->collectionOfDoors[i] == 0)
        {
            this->collectionOfDoors[i] = portal;
            i = 10;
        }
    }
}
void Room::doorDisplay()
{
    for(int i = 0; i < 10; i++)
    {
        cout << this->collectionOfDoors[i] << "\n";
    }
}
string Room::getItem(string itemGrab)
{
    for(int i = 0; i < itemCount; i++)
    {
        item* currItem = this->object[i];
        if(currItem->getItemName() == itemGrab)
        {
            return currItem->getItemName();
        }
    }
}

string Room::getItem(int itemGrab)
{
    item* currItem = this->object[itemGrab];
    return currItem->getItemName();
}

void Room::addItem(item* itemGrab)
{
    if(itemCount < 100)
    {
        this->object[itemCount] = itemGrab;
        itemCount = itemCount + 1;
    }
    else
    {
        cout << "your pockets are too full!" << "\n";
    }
}
string Room::removeItem(string itemGrab)
{
    int position = -1;
    for(int i = 0; i < itemCount; i++)
    {
        item* currItem = this->object[i];
        if(currItem->getItemName() == itemGrab)
        {
            position = i;
        }
    }
    if(position == -1)
    {
        cout<< "you don't have this item in your pockets" << "\n";
    }
    else
    {
        string returnholder = object[position]->getItemName();
        object[position] = 0;
        for(int i = position; i < itemCount -1; i++)
        {
            this->object[i] = this->object[i+1];
        }
        object[itemCount] = 0;
        return returnholder;
    }
    
}