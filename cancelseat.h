#ifndef CANCSEAT_H
#define CANCSEAT_H
#include <iostream>
using namespace std;

void cancelSeat(int arr[4][5])
{
    int seat_number;
    cout << "Enter the seat number you want to cancel (1-20): ";
    cin >> seat_number;

    while (seat_number < 1 || seat_number > 20)
    {
        cout << "Invalid Seat Number. Please select from 1-20: ";
        cin >> seat_number;
    }
    int row = (seat_number - 1) / 5;
    int column = (seat_number - 1) % 5;

    if (arr[row][column] == 1)
    {
        arr[row][column] = 0;
        cout << "Seat " << seat_number << " has been successfully canceled.\n";
    }
    else
    {
        cout << "Seat " << seat_number << " is not booked. Cannot cancel.\n";
    }
}

#endif
