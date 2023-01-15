#include <iostream>
using namespace std;
void price(string, string, float);

main()
{
    while (1)
    {
        string fruit;
        string day;
        float quantity;
        cout << "Enter the day of week : ";
        cin >> day;
        cout << "Enter the type of fruit : ";
        cin >> fruit;
        cout << "Enter the quantity of fruit : ";
        cin >> quantity;
        float amount;
        price(day, fruit, quantity);
    }
}
void price(string day, string fruit, float quantity)
{
    float price;
    if (day == "sunday" || day == "saturday")
    {
        if (fruit == "banana")
        {
            {
                price = quantity * 2.70;
                cout << "The price is : " << price << endl;
            }
        }
        {
            if (fruit == "apple")
            {
                price = quantity * 1.25;
                cout << "The price is : " << price << endl;
            }
        }
        if (fruit == "orange")
        {
            {
                price = quantity * 0.90;
                cout << "The price is : " << price << endl;
            }
        }
        if (fruit == "grapefruit")
        {
            {
                price = quantity * 1.60;
                cout << "The price is : " << price << endl;
            }
        }
        if (fruit == "kiwi")
        {
            {
                price = quantity * 3.00;
                cout << "The price is : " << price << endl;
            }
        }
        if (fruit == "pineapple")
        {
            {
                price = quantity * 5.60;
                cout << "The price is : " << price << endl;
            }
        }
        if (fruit == "grapes")
        {
            {
                price = quantity * 4.20;
                cout << "The price is : " << price << endl;
            }
        }
    }
    if (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
    {
        if (fruit == "banana")
        {
            {
                price = quantity * 2.50;
                cout << "The price is : " << price << endl;
            }
        }
        {
            if (fruit == "apple")
            {
                price = quantity * 1.20;
                cout << "The price is : " << price << endl;
            }
        }
        {
            if (fruit == "orange")
            {
                price = quantity * 0.85;
                cout << "The price is : " << price << endl;
            }
        }
        {
            if (fruit == "grapefruit")
            {

                price = quantity * 1.45;
                cout << "The price is : " << price << endl;
            }
        }
        {
            if (fruit == "kiwi")
            {
                price = quantity * 2.70;
                cout << "The price is : " << price << endl;
            }
        }
        {
            if (fruit == "pineapple")
            {
                price = quantity * 5.50;
                cout << "The price is : " << price << endl;
            }
        }
        {
            if (fruit == "grapes")
            {
                price = quantity * 4.20;
                cout << "The price is : " << price << endl;
            }
        }
    }
    if (day == "sunday" || day == "saturday" || day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
    {
        {
            if (fruit != "banana" && fruit != "apple" && fruit != "orange" && fruit != "grapefruit" && fruit != "kiwi" && fruit != "pineapple" && fruit != "grapes")

                cout << "error! This is an invalid information" << endl;
        }
    }
    if (day != "sunday" && day != "saturday" && day != "monday" && day != "tuesday" && day != "wednesday" && day != "thursday" && day != "friday")
    {
        {
            if (fruit == "banana" || fruit == "apple" || fruit == "orange" || fruit == "grapefruit" || fruit == "kiwi" || fruit == "pineapple" || fruit == "grapes")

                cout << "error! This is an invalid information" << endl;
        }
    }
    if (day != "sunday" && day != "saturday" && day != "monday" && day != "tuesday" && day != "wednesday" && day != "thursday" && day != "friday")
    {
        {
            if (fruit != "banana" && fruit != "apple" && fruit != "orange" && fruit != "grapefruit" && fruit != "kiwi" && fruit != "pineapple" && fruit != "grapes")

                cout << "error! This is an invalid information" << endl;
        }
    }
}