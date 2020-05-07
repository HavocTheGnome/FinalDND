#include "StudentNode.hpp"

StudentNode::StudentNode(Student* payload)
{
    this->payload = payload;
    this->nextNode = 0;
    this->itemCount = 0;
}

void StudentNode::setNextNode(StudentNode* n)
{
    this->nextNode = n;
}

Student* StudentNode::getPayload()
{
    return this->payload;
}

StudentNode* StudentNode::getNextNode()
{
    return this->nextNode;
}

string StudentNode::getItem(string itemGrab)
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

string StudentNode::getItem(int itemGrab)
{
    item* currItem = this->object[itemGrab];
    return currItem->getItemName();
}

void StudentNode::addItem(item* itemGrab)
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
string StudentNode::removeItem(string itemGrab)
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