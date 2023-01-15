#include <iostream>
#include <cmath>
using namespace std;
main()
{
    while (1)
    {
        int starthour;
        int startmins;
        int arrivalhour;
        int arrivalmins;
        cout << " Enter the starting hours :";
        cin >> starthour;
        cout << "Enter the starting mins :";
        cin >> startmins;
        cout << "Enter the arrival hours :";
        cin >> arrivalhour;
        cout << "Enter the arrival mins :";
        cin >> arrivalmins;
        int sechours = starthour * 3600;
        int secmins = startmins * 60;
        int sechours1 = arrivalhour * 3600;
        int secmins1 = arrivalmins * 60;
        int add1 = sechours + secmins;
        int add2 = sechours1 + secmins1;
        int difference = add1 - add2;
        int hours = difference / 3600;
        int mins = difference / 60;
        mins = mins % 60;

        if (difference >= 0)
        {
            if (hours == 0 && mins > 30)
            {
                cout << "Early" << endl
                     << mins << " mins before the starting time";
            }
            else if (hours == 0 && mins <= 30)
            {
                cout << "On time" << endl
                     << mins << " mins before the starting time";
            }
            else
            {
                cout << "Early" << endl
                     << hours << ":" << mins << " hours before the starting time";
            }
        }
        else
        {
            if (hours == 0)
            {
                cout << "Late" << endl
                     << abs(mins) << " mins after the starting time";
            }
            else
            {
                cout << "Late" << endl
                     << abs(hours) << ":" << abs(mins) << " hours after the starting time";
            }
        }
    }
}
