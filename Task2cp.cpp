#include <iostream>
using namespace std;
string result(int, int, int, int, int, float);

main()
{
    int english, maths, chemistry, science, biology;
    float total = 500;
    string name;
    cout << "Enter the english marks :";
    cin >> english;
    cout << "Enter the maths marks :";
    cin >> maths;
    cout << "Enter the chemistry marks :";
    cin >> chemistry;
    cout << "Enter the science marks :";
    cin >> science;
    cout << "Enter the bio marks :";
    cin >> biology;
    cout << "Enter the name of student :";
    cin >> name;
    string output;
    output = result(english, maths, chemistry, science, biology, total);
    cout << "your grade is :" << output << endl;
}
string result(int english, int maths, int chemistry, int science, int biology, float total)
{
    string grade;
    float percentage;
    float obtained;
    obtained = english + maths + chemistry + science + biology;
    percentage = (obtained / total) * 100;
    if (percentage > 90 && percentage <= 100)
    {
        grade = "A+";
    }
    else if (percentage > 80 && percentage <= 90)
    {
        grade = "A";
    }
    else if (percentage > 70 && percentage <= 80)
    {
        grade = "B+";
    }
    else if (percentage > 60 && percentage <= 70)
    {
        grade = "B";
    }
    else if (percentage > 50 && percentage <= 60)
    {
        grade = "C";
    }
    else if (percentage > 40 && percentage <= 50)
    {
        grade = "D";
    }
    else if (percentage < 40)
    {
        grade = "F";
    }
    cout << "your percentage is " << percentage << '%' << endl;
    return grade;
}