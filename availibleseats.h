#ifndef AVAILABLESEATS_H
#define AVAILABLESEATS_H

#include <iostream>
using namespace std;

void AvailableSeats(int arr[4][5])
{
    cout << "Available Seats:" << endl;

    bool found = false;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int seat_number = (i * 5) + (j + 1);
            if (arr[i][j] == 0)
            {
                cout << "Seat " << seat_number << " is available." << endl;
                found = true;
            }
        }
    }

    if (!found)
    {
        cout << "No seats are available at the moment." << endl;
    }
}

#endif
