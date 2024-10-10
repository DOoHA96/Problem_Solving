#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(float& A, float& H )
{
    cout << "Pleas enter triangle base A ? \n";
    cin >> A;
    cout << "Pleas enter triangle height H ? \n";
    cin >> H;
}

float TriangleArea(float A, float H)
{
    float Area = (A / 2) * H;
    return Area;
}

void PrintResults(float Area)
{
    cout << "\n Triangle Area = " << Area << endl;
}

int main()
{
    float Num1, Num2 ;
    ReadNumbers(Num1, Num2 );
    PrintResults(TriangleArea(Num1, Num2));
}