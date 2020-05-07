#include "item.hpp"

item::item(string name)
{
    itemName = name;
}
string item::getItemName()
{
    return this->itemName;
}