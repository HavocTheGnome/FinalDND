#include "SchoolMap.hpp"
#include "Door.hpp"
#include "Room.hpp"
#include "LinkedListOfStudents.hpp"
#include "Student.hpp"
#include <iostream>

SchoolMap::SchoolMap()
{
    this->Hallway1 = new Room("Hallway 1");
    this->Hallway2 = new Room("Hallway 2");
    this->HallwayNorth = new Room("Hallway North");
    this->HallwaySouth1 = new Room("Hallway South 1");
    this->HallwaySouth2 = new Room("Hallway South 2");
    this->Lobby = new Room("Lobby");
    this->ServerRoom = new Room("Server Room");
    this->LockLairsOffice = new Room("Lock Lairs Office");
    this->Esports = new Room("Esports");
    this->OneHundredTwenty = new Room("120");
    this->MacLab1 = new Room("Mac Lab 1");
    this->MacLab2 = new Room("Mac Lab 2");
    this->OneHundredEighteen = new Room("118");
    this->AdvLab1 = new Room("Adv Lab 1");
    this->AdvLab2 = new Room("Adv Lab 2");
    Door* Door1 = new Door("Hallway 1", Hallway1, "Hallway 2", Hallway2);
    this->Hallway1->addDoor(Door1);
    this->Hallway2->addDoor(Door1);
    Door* Door2 = new Door("Hallway North", HallwayNorth, "Hallway 2", Hallway2);
    this->HallwayNorth->addDoor(Door2);
    this->Hallway2->addDoor(Door2);
    Door* Door3 = new Door("Hallway South 1", HallwaySouth1, "Hallway 2", Hallway2);
    this->HallwaySouth1->addDoor(Door3);
    this->Hallway2->addDoor(Door3);
    Door* Door4 = new Door("Hallway 1", HallwaySouth1, "Hallway South 2", HallwaySouth2);
    this->HallwaySouth1->addDoor(Door4);
    this->HallwaySouth2->addDoor(Door4);
    Door* Door5 = new Door("Hallway South 2", HallwaySouth2, "120", OneHundredTwenty);
    this->HallwaySouth2->addDoor(Door5);
    this->OneHundredTwenty->addDoor(Door5);
    Door* Door6 = new Door("Hallway South 2", HallwaySouth2, "Lobby", Lobby);
    this->HallwaySouth2->addDoor(Door6);
    this->Lobby->addDoor(Door6);
    Door* Door7 = new Door("Lobby", Lobby, "Server Room", ServerRoom);
    this->Lobby->addDoor(Door7);
    this->ServerRoom->addDoor(Door7);
    Door* Door8 = new Door("Lobby", Lobby, "Lock Lairs Office", LockLairsOffice);
    this->Lobby->addDoor(Door8);
    this->LockLairsOffice->addDoor(Door8);
    Door* Door9 = new Door("Lobby", Lobby, "Esports", Esports);
    this->Lobby->addDoor(Door9);
    this->Esports->addDoor(Door9);
    Door* Door10 = new Door("Hallway North", HallwayNorth, "Adv Lab 1", AdvLab1);
    this->HallwayNorth->addDoor(Door10);
    this->AdvLab1->addDoor(Door10);
    Door* Door11 = new Door("Hallway North", HallwayNorth, "118", OneHundredEighteen);
    this->HallwayNorth->addDoor(Door11);
    this->OneHundredEighteen->addDoor(Door11);
    Door* Door12 = new Door("Hallway North", HallwayNorth, "Mac Lab 1", MacLab1);
    this->HallwayNorth->addDoor(Door12);
    this->MacLab1->addDoor(Door12);
    Door* Door13 = new Door("Adv Lab 1", AdvLab1, "Adv Lab 2", AdvLab2);
    this->AdvLab1->addDoor(Door13);
    this->AdvLab2->addDoor(Door13);
    Door* Door14 = new Door("Mac Lab 2", MacLab2, "Mac Lab 1", MacLab1);
    this->MacLab2->addDoor(Door14);
    this->MacLab1->addDoor(Door14);
    Door* Door15 = new Door("Mac Lab 2", MacLab2, "118", OneHundredEighteen);
    this->OneHundredEighteen->addDoor(Door15);
    this->MacLab2->addDoor(Door15);
    this->StartRoom = this->Hallway1;
    this->Registry = new LinkedListOfStudents();
}
void SchoolMap::addStudent(string name, string occupy)
{
    Student* Studs = new Student(name);
    if(Hallway1->getRoomName() == occupy)
    {
        Room* Stud = Hallway1;
        Studs->assignRoom(Stud);
        this->Registry->addFront(Studs);
    }
    else if(Hallway2->getRoomName() == occupy)
    {
        Room* Stud = Hallway2;
        Studs->assignRoom(Stud);
        this->Registry->addFront(Studs);
    }
    else if(HallwayNorth->getRoomName() == occupy)
    {
        Room* Stud = HallwayNorth;
        Studs->assignRoom(Stud);
        this->Registry->addFront(Studs);
    }
    else if(HallwaySouth1->getRoomName() == occupy)
    {
        Room* Stud = HallwaySouth1;
        Studs->assignRoom(Stud);
        this->Registry->addFront(Studs);
    }
    else if(HallwaySouth2->getRoomName() == occupy)
    {
        Room* Stud = HallwaySouth2;
        Studs->assignRoom(Stud);
        this->Registry->addFront(Studs);
    }
    else if(Lobby->getRoomName() == occupy)
    {
        Room* Stud = Lobby;
        Studs->assignRoom(Stud);
        this->Registry->addFront(Studs);
    }
    else if(ServerRoom->getRoomName() == occupy)
    {
        Room* Stud = ServerRoom;
        Studs->assignRoom(Stud);
        this->Registry->addFront(Studs);
    }
    else if(LockLairsOffice->getRoomName() == occupy)
    {
        Room* Stud = LockLairsOffice;
        Studs->assignRoom(Stud);
        this->Registry->addFront(Studs);
    }
    else if(Esports->getRoomName() == occupy)
    {
        Room* Stud = Esports;
        Studs->assignRoom(Stud);
        this->Registry->addFront(Studs);
    }
    else if(OneHundredTwenty->getRoomName() == occupy)
    {
        Room* Stud = OneHundredTwenty;
        Studs->assignRoom(Stud);
        this->Registry->addFront(Studs);
    }
    else if(MacLab1->getRoomName() == occupy)
    {
        Room* Stud = MacLab1;
        Studs->assignRoom(Stud);
        this->Registry->addFront(Studs);
    }
    else if(MacLab2->getRoomName() == occupy)
    {
        Room* Stud = MacLab2;
        Studs->assignRoom(Stud);
        this->Registry->addFront(Studs);
    }
    else if(OneHundredEighteen->getRoomName() == occupy)
    {
        Room* Stud = OneHundredEighteen;
        Studs->assignRoom(Stud);
        this->Registry->addFront(Studs);
    }
    else if(AdvLab1->getRoomName() == occupy)
    {
        Room* Stud = AdvLab1;
        Studs->assignRoom(Stud);
        this->Registry->addFront(Studs);
    }
    else if(AdvLab2->getRoomName() == occupy)
    {
        Room* Stud = AdvLab2;
        Studs->assignRoom(Stud);
        this->Registry->addFront(Studs);    
    }
    
}
void SchoolMap::addObject(string Object, string occupy)
{
    item* newObject = new item(Object);
    if(Hallway1->getRoomName() == occupy)
    {
        Hallway1->addItem(newObject);
    }
    else if(Hallway2->getRoomName() == occupy)
    {
        Hallway2->addItem(newObject);
    }
    else if(HallwayNorth->getRoomName() == occupy)
    {
        HallwayNorth->addItem(newObject);
    }
    else if(HallwaySouth1->getRoomName() == occupy)
    {
        HallwaySouth1->addItem(newObject);
    }
    else if(HallwaySouth2->getRoomName() == occupy)
    {
        HallwaySouth2->addItem(newObject);
    }
    else if(Lobby->getRoomName() == occupy)
    {
        Lobby->addItem(newObject);
    }
    else if(ServerRoom->getRoomName() == occupy)
    {
        ServerRoom->addItem(newObject);
    }
    else if(LockLairsOffice->getRoomName() == occupy)
    {
        LockLairsOffice->addItem(newObject);
    }
    else if(Esports->getRoomName() == occupy)
    {
        Esports->addItem(newObject);
    }
    else if(OneHundredTwenty->getRoomName() == occupy)
    {
        OneHundredTwenty->addItem(newObject);
    }
    else if(MacLab1->getRoomName() == occupy)
    {
        MacLab1->addItem(newObject);
    }
    else if(MacLab2->getRoomName() == occupy)
    {
        MacLab2->addItem(newObject);
    }
    else if(OneHundredEighteen->getRoomName() == occupy)
    {
        OneHundredEighteen->addItem(newObject);
    }
    else if(AdvLab1->getRoomName() == occupy)
    {
        AdvLab1->addItem(newObject);
    }
    else if(AdvLab2->getRoomName() == occupy)
    {
        AdvLab2->addItem(newObject);
    }
}
void SchoolMap::StudentDropObject(string student, string Object)
{
    int counter = this->Registry->getCount();
    for(int i = 0; i < counter; i++)
    {
        Student* currStudent = this->Registry->getAtIndex(i);
        if(student == currStudent->getName())
        {
            StudentNode* mesh = this->Registry->getAtIndexNode(i);
            mesh->removeItem(Object);
            Room* hello = currStudent->getCurrRoom();
            item* NewObject = new item(Object);
            hello->addItem(NewObject);
        }
    }
}
void SchoolMap::StudentGrabObject(string student, string Object)
{
    int counter = this->Registry->getCount();
    for(int i = 0; i < counter; i++)
    {
        Student* currStudent = this->Registry->getAtIndex(i);
        
        if(student == currStudent->getName())
        {
            Room* hello = currStudent->getCurrRoom();
            string holder = hello->removeItem(Object);
            StudentNode* stud = this->Registry->getAtIndexNode(i);
            item* yesh = new item(Object);
            stud->addItem(yesh);
            string mesh = stud->getItem(0);
        }
    }
}