#include <iostream>
using namespace std;

string symbol(string, int);

main()
{
    while (1)
    {
        string month;
        int date;
        cout << "Enter the month : ";
        cin >> month;
        cout << "Enter the date : ";
        cin >> date;
        string output;
        output = symbol(month, date);
        cout << "Your Zodiac sign is : " << output << endl;
    }
}
string symbol(string month, int date)
{
    string sign;
    if ((month == "March" && date >= 21) || (month == "April" && date <= 19))
    {
        sign = "Aries";
    }
    if ((month == "April" && date >= 20) || (month == "May" && date <= 20))
    {
        sign = "Tauras";
    }
    if ((month == "May" && date >= 21) || (month == "June" && date <= 20))
    {
        sign = "Gemini";
    }
    if ((month == "June" && date >= 21) || (month == "July" && date <= 22))
    {
        sign = "Cancer";
    }
    if ((month == "July" && date >= 23) || (month == "August" && date <= 22))
    {
        sign = "Leo";
    }
    if ((month == "August" && date >= 23) || (month == "September" && date <= 22))
    {
        sign = "Virgo";
    }
    if ((month == "September" && date >= 23) || (month == "October" && date <= 22))
    {
        sign = "Libra";
    }
    if ((month == "October" && date >= 23) || (month == "November" && date <= 21))
    {
        sign = "Scorpio";
    }
    if ((month == "November" && date >= 22) || (month == "December" && date <= 21))
    {
        sign = "Sagittarius";
    }
    if ((month == "December" && date >= 22) || (month == "January" && date <= 19))
    {
        sign = "Capricon";
    }
    if ((month == "January" && date >= 20) || (month == "february" && date <= 18))
    {
        sign = "Aquarius";
    }
    if ((month == "February" && date >= 19) || (month == "March" && date <= 20))
    {
        sign = "Aquarius";
    }
    return sign;
}