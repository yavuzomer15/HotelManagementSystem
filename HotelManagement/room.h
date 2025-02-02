#ifndef ROOM_H
#define ROOM_H

    #include <string>
    using namespace std;

class Room
{
private:
    int roomNumber;
    string guestName;
    int dailyRate;
    bool isOccupied;
    int extraExpenses;

public:
    Room(int number,int rate);

    void checkIn(const string& name);

    void checkOut(int days);

    void addExtraExpense(int amount);

    int getRoomNumber();

    bool isRoomOccupied();
    string getGuestName() const;
    int getDailyRate() const;
    int getExtraExpenses() const;
};

#endif // ROOM_H
