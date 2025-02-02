#include "hotel.h"
#include<QDebug>
using namespace std;

Hotel* Hotel::instance=nullptr; //initialization

Hotel::Hotel() {
    Room r1(101,250);   //push_back:firstly, object is created.Secondly, object is implemented to vector
    rooms.push_back(r1);  //copied here

    Room r2(102,250);
    rooms.push_back(r2);

    //emplace_back:object is directly created in vector
    rooms.emplace_back(103,250);  //no copy, directly connected
    rooms.emplace_back(201,250);
    rooms.emplace_back(202,500);  //suite room


}

Hotel* Hotel::getInstance() {
    if (instance == nullptr) {
        instance = new Hotel();
    }
    return instance;
}

Room* Hotel::findRoom(int roomNumber){
    for(auto& room:rooms){
        if(room.getRoomNumber()==roomNumber){
            return &room;
        }
    }
    return nullptr;
}

Hotel::~Hotel(){
    delete instance;
}
