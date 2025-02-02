#include "room.h"
#include <iostream>
using namespace std;


Room::Room(int number,int rate):roomNumber(number),guestName(""),dailyRate(rate),isOccupied(false),extraExpenses(0) {}

void Room::checkIn(const string &name){
    if(!isOccupied){
        guestName=name;
        isOccupied=true;
    }else{
        //Room is not empty
    }
}

void Room::checkOut(int days){
    if(isOccupied){
        int totalCost=(days*dailyRate)+extraExpenses; //calculate total cost
        guestName="";
        isOccupied=false; //room is set empty
        extraExpenses=0;
    }else{
        //Room is already empty
    }
}

void Room::addExtraExpense(int amount){
    if(isOccupied){
    extraExpenses+=amount;
    }
}

int Room::getRoomNumber(){
    return roomNumber;
}

bool Room::isRoomOccupied(){
    return isOccupied;
}

string Room::getGuestName() const
{
    return guestName;
}

int Room::getDailyRate() const
{
    return dailyRate;
}

int Room::getExtraExpenses() const
{
    return extraExpenses;
}
