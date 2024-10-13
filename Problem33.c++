#include <iostream>
#include <string>

using namespace std;

int ReadNumberInRange(int Form, int To)
{
    int Grade;
    do
    {
        cout << "Pleas enter a Grade between 0 and 100 ? \n";
        cin >> Grade;
    } while (Grade < Form || Grade > To);
    return Grade;
}

char GetGradeLetter(int Grade)
{
    if (Grade >= 90)
        return 'A';
    else if (Grade >= 80)
        return 'B';
    else if (Grade >= 70)
        return 'C';
    else if (Grade >= 60)
        return 'D';
    else if (Grade >= 50)
        return 'E';
    else
        return 'F';
}

int main()
{
    cout << "Result = " << GetGradeLetter(ReadNumberInRange(0, 100)) <<endl;
}