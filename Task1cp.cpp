#include <iostream>
using namespace std;
string checkweather(string, string);

main()
{
    while (1)
    {
        string weather;
        string humidity;
        cout << "Enter the weather : ";
        cin >> weather;
        cout << "Enter the humidity :";
        cin >> humidity;
        string result = checkweather(weather, humidity);
        cout << result << endl;
    }
}
string checkweather(string weather, string humidity)
{
    string output;
    if (weather == "warm" && humidity == "dry")
    {
        output = "lets play tenis";
    }

    if (weather == "warm" && humidity == "humid")
    {
        output = "lets swim";
    }
    if (weather == "cold" && humidity == "dry")
    {
        output = "lets play basketball";
    }
    if (weather == "cold" && humidity == "humid")
    {
        output = "lets watch TV";
    }
    return output;
}