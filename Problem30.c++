#include <iostream>
#include <string>

using namespace std;

int ReadPOsitiveNumber(string Message)
{
    int Number;
    do
    {
    cout << Message << endl;
    cin >> Number;
    } while ( Number <= 0 );
    return Number;
}

int Factorial(int Num)
{
    int Factorial = 1;
    for (int Counter = Num; Counter >= 1; Counter--)
    {
    Factorial *= Counter;
    }
    return Factorial;
}

int main()
{
    cout << Factorial(ReadPOsitiveNumber("Pleas enter a Positive Number?")) << endl;
}