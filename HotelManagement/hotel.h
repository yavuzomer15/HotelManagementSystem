#ifndef HOTEL_H
#define HOTEL_H

#include "room.h"
#include <vector>
using namespace std;

class Hotel
{
private:
    static Hotel* instance;
    vector<Room>rooms;
    Hotel();//private constructor for Singleton pattern
public:
    static Hotel* getInstance();

    Room* findRoom(int roomNumber);

    ~Hotel();
};

#endif // HOTEL_H
