#include <iostream>
using namespace std;
float charges(char, int, char);
main()
{
    char code;
    int mins;
    char time;
    cout << "Enter the service code : ";
    cin >> code;
    cout << "Enter number of mins you used the service : ";
    cin >> mins;
    cout << " Enter the time :";
    cin >> time;
    float output;
    output = charges(code, mins, time);
    cout << "The charges are : " << output << "$" << endl;
}
float charges(char code, int mins, char time)
{
    int newmins = mins - 50;
    int min2 = mins - 75;
    float price;
    if (code == 'R' || code == 'r')
    {
        if (mins <= 50)
        {
            price = 10.00;
        }
        else if (mins > 50)
        {
            price = newmins * 0.2 + 10;
        }
    }
    if (code == 'P' || code == 'p' )
    {
        if (time == 'D' || time == 'd')
        {
            if (mins <= 75)
            {
                price = 25;
            }
            if (mins > 75)
            {
                price = min2 * 0.10 + 25;
            }
        }
        if (time == 'N' || time == 'n')
        {
            if (mins <= 100)
            {
                price = 25;
            }
            if (mins > 100)
            {
                price = min2 * 0.05 + 25;
            }
        }
        
    }
    return price;
}