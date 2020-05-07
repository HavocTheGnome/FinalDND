#include <iostream>
#include "SchoolMap.hpp"
#include "Room.hpp"


using namespace std;

int main()
{ 
    SchoolMap* hello = new SchoolMap();
    hello->addStudent("Jeff", "Hallway 1");
    hello->addStudent("Jef", "Hallway 1");
    hello->addStudent("Je", "Hallway 1");
    hello->addObject("apple", "Hallway 1");
    hello->StudentGrabObject("Jeff", "apple");
    hello->StudentDropObject("Jeff", "apple");
    return 0;
    
}