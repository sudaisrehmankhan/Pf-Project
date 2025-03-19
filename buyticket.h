#ifndef BUSTICKET_H
#define BUSTICKET_H
#include <iostream>
using namespace std;

int busticket(int arr[4][5])
{
    while (true)
    {
        string name;
        cout << "Enter your name: ";
        cin.ignore();
        getline(cin, name);

        int age;
        cout << "Enter your age: ";
        cin >> age;

        long contact;
        cout << "Enter your contact number: ";
        cin >> contact;

        int seat_number;
        cout << "Enter the seat number you want to book (1-20): ";
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
            cout << "Seat " << seat_number << " is already booked. Please select another seat.\n";
            return -1;
        }
        else
        {
            arr[row][column] = 1;
            cout << "You have successfully booked seat number " << seat_number << ".\n";
            return seat_number;
        }
    }
}

#endif
