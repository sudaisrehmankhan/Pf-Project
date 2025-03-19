#ifndef UPDATESEAT_H
#define UPDATESEAT_H
#include <iostream>
using namespace std;

void updateseat(int arr[4][5])
{
    int current_seat, new_seat;

    cout << "Enter the seat number you want to update (1-20): ";
    cin >> current_seat;

    while (current_seat < 1 || current_seat > 20)
    {
        cout << "Invalid Seat Number. Please select from 1-20: ";
        cin >> current_seat;
    }

    int current_row = (current_seat - 1) / 5;
    int current_col = (current_seat - 1) % 5;

    if (arr[current_row][current_col] == 0)
    {
        cout << "Seat " << current_seat << " is not booked. Cannot update it.\n";
        return;
    }

    cout << "Enter the new seat number you want to book (1-20): ";
    cin >> new_seat;

    while (new_seat < 1 || new_seat > 20)
    {
        cout << "Invalid Seat Number. Please select from 1-20: ";
        cin >> new_seat;
    }
    if (new_seat == current_seat)
    {
        cout << "New seat cannot be the same as current seat\n";
        return;
    }

    int new_row = (new_seat - 1) / 5;
    int new_col = (new_seat - 1) % 5;

    if (arr[new_row][new_col] == 1)
    {
        cout << "Seat " << new_seat << " is already booked. Please choose another seat.\n";
        return;
    }

    arr[current_row][current_col] = 0;
    arr[new_row][new_col] = 1;
    cout << "Successfully updated seat " << current_seat << " to " << new_seat << ".\n";
}

#endif
