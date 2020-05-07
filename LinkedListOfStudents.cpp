#include "LinkedListOfStudents.hpp"
#include <iostream>

LinkedListOfStudents::LinkedListOfStudents()
{
    this->count = 0;
}

void LinkedListOfStudents::addFront(Student* s)
{
    StudentNode* sn = new StudentNode(s);
    if(this->count == 0)
    {
        this->head = sn;
    }
    else
    {
        sn->setNextNode(this->head);
        this->head = sn;
    }
    this->count++;
}

Student* LinkedListOfStudents::getAtIndex(int index)
{
    //if they give us a bad index, return null
    if(index > this->count-1 || index < 0)
    {
        return 0;
    }
    else
    {
        StudentNode* currNode = this->head;
        for(int i = 0; i < index; i++)
        {
            currNode = currNode->getNextNode();
        }
        return currNode->getPayload();
    }
}

Student* LinkedListOfStudents::removeAtIndex(int index)
{
    //is the list empty or is index out of range?
    if(!this->head || index < 0 || index > this->count - 1)
    {
        return 0;
    }
    else
    {
        Student* studentToReturn = 0;

        if(index == 0)
        {
            //remove from front
            studentToReturn = this->head->getPayload();
            this->head = this->head->getNextNode();
        }
        else if(index == this->count - 1)
        {
            //remove from the end
            StudentNode* currNode = this->head;
            //positions currNode to the guy before the last guy
            for(int i = 0; i < this->count-1; i++)
            {
                currNode = currNode->getNextNode();
            }
            studentToReturn = currNode->getNextNode()->getPayload();
            StudentNode* nodeToDelete = currNode->getNextNode();
            currNode->setNextNode(0);
            delete nodeToDelete;
        }
        else
        {
            //remove from the middle
            //write code here
        }
        return studentToReturn;
    }
    
}

int LinkedListOfStudents::indexOf(Student* s)
{
    StudentNode* currNode = this->head;
    for(int i = 0; i < count-1; i++)
    {
        currNode = currNode->getNextNode();
        Student* currStudent = currNode->getPayload();
        if(currStudent == s)
        {
            return i;
            i = count;
        }
    }
    cout << "hello" << "\n";
}

int LinkedListOfStudents::getCount()
{
    if(0 < this->count)
    {
        return this->count;
    }
    else
    {
        return 0;
    }
    
}
StudentNode* LinkedListOfStudents::removeAtIndexNode(int index)
{
    if(!this->head || index < 0 || index > this->count - 1)
    {
        return 0;
    }
    else
    {
        StudentNode* studentToReturn = 0;

        if(index == 0)
        {
            //remove from front
            studentToReturn = this->head;
            this->head = this->head->getNextNode();
        }
        else if(index == this->count - 1)
        {
            //remove from the end
            StudentNode* currNode = this->head;
            //positions currNode to the guy before the last guy
            for(int i = 0; i < this->count-1; i++)
            {
                currNode = currNode->getNextNode();
            }
            studentToReturn = currNode->getNextNode();
            StudentNode* nodeToDelete = currNode->getNextNode();
            currNode->setNextNode(0);
            delete nodeToDelete;
        }
        else
        {
            //remove from the middle
            //write code here
        }
        return studentToReturn;
    }
}
StudentNode* LinkedListOfStudents::getAtIndexNode(int index)
{
    if(index > this->count-1 || index < 0)
    {
        return 0;
    }
    else
    {
        StudentNode* currNode = this->head;
        for(int i = 0; i < index; i++)
        {
            currNode = currNode->getNextNode();
        }
        return currNode;
    }
}