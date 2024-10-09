#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(float& Num1, float& Num2 )
{
    cout << "Pleas enter rectangle Width ? \n";
    cin >> Num1;
    cout << "Pleas enter rectangle Length ? \n";
    cin >> Num2;
}

float CalculateRectangleArea(float Num1, float Num2 )
{
    return Num1 * Num2;
}

void PrintResults(float Area)
{
    cout << "\n Rectangle Area = " << Area << endl;
}

int main()
{
    float Num1, Num2 ;
    ReadNumbers(Num1, Num2 );
    PrintResults(CalculateRectangleArea(Num1, Num2));
}