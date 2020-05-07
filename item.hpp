#ifndef item_hpp
#define item_hpp
#include <string>

using namespace std;
class item
{
    private: 
        string itemName;

    public:
        item(string name);
        string getItemName();
};

#endif