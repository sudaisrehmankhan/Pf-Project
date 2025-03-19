#include <iostream>
#include </Users/sudaiskhan/Desktop/Programming Fundamental Project/buyticket.h>
#include </Users/sudaiskhan/Desktop/Programming Fundamental Project/updateticket.h>
#include </Users/sudaiskhan/Desktop/Programming Fundamental Project/cancelseat.h>
#include </Users/sudaiskhan/Desktop/Programming Fundamental Project/availibleseats.h>


using namespace std;

int main()
{
    int arr[4][5];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = 0;
        }
    }

    int choice;

    do
    {

        cout << "\nBUS RESERVATION SYSTEM\n";
        cout << "======================\n";
        cout << "1. Buy Ticket\n";
        cout << "2. Update Seat\n";
        cout << "3. Cancel Seat\n";
        cout << "4. Available Seats\n";
        cout << "5. Exit\n";

        cout << "Enter the option you want to select :: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            busticket(arr);
            break;
        case 2:
            updateseat(arr);
            break;
        case 3:
            cancelSeat(arr);
            break;
        case 4:
            AvailableSeats(arr);
            break;
        case 5:
            cout << "Thank you for using the Bus Reservation System. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Please enter 1, 2, 3, 4, 5.\n";
        }
    } while (choice != 5);

    return 0;
}
