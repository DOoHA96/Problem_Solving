#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(int& Num1, int& Num2 , int& Num3)
{
    cout << "Pleas enter Number 1 ? \n";
    cin >> Num1;
    cout << "Pleas enter Number 2 ? \n";
    cin >> Num2;
    cout << "Pleas enter Number 3 ? \n";
    cin >> Num3;
}

int MaxOf3Numbers(int Num1, int Num2 , int Num3)
{
    if (Num1 > Num2)
    if (Num1 > Num3)
    return Num1;
    else
    return Num3;
    else
    if (Num2 > Num3)
    return Num2;
    else
    return Num3;
}

void PrintResults(int Max)
{
    cout << "\n The Maximun Number is : " << Max << endl;
}

int main()
{
    int Num1, Num2 , Num3;
    ReadNumbers(Num1, Num2 , Num3);
    PrintResults(MaxOf3Numbers(Num1, Num2 , Num3));
}