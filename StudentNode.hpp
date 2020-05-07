#ifndef StudentNode_hpp
#define StudentNode_hpp
#include <iostream>
#include "Student.hpp"
#include "item.hpp"
using namespace std;

class StudentNode
{
    private:
        Student* payload;
        StudentNode* nextNode;
        item* object[10];
        int itemCount;

    public:
        StudentNode(Student* payload);
        void setNextNode(StudentNode* n);
        Student* getPayload();
        StudentNode* getNextNode();
        string getItem(string itemGrab);
        string getItem(int itemGrab);
        void addItem(item* itemGrab);
        string removeItem(string itemGrab);
};
#endif