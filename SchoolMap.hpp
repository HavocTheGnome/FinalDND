#include "Door.hpp"
#include "Room.hpp"
#include "LinkedListOfStudents.hpp"
#include "Student.hpp"

class SchoolMap
{
    private:
        Room* Hallway1;
        Room* Hallway2;
        Room* HallwayNorth;
        Room* HallwaySouth1;
        Room* HallwaySouth2;
        Room* Lobby;
        Room* ServerRoom;
        Room* LockLairsOffice;
        Room* Esports;
        Room* OneHundredTwenty;
        Room* MacLab1;
        Room* MacLab2;
        Room* OneHundredEighteen;
        Room* AdvLab1;
        Room* AdvLab2;
        LinkedListOfStudents* Registry;
        Room* StartRoom;
    public:
        SchoolMap();
        void addStudent(string student, string occupy);
        void addObject(string object, string occupy);
        void StudentDropObject(string student, string Object);
        void StudentGrabObject(string student, string Object);

};