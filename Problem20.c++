#include <iostream>
#include <string>

using namespace std;

float ReadSquareSide()
{
    float A;
    cout << "Pleas enter Square Side A ? \n";
    cin >> A;
    return A;
}

float CircleAreaInscribedInSquare(float A)
{
    const float PI = 3.141592653589793238;
    float Area = (PI * pow(A, 2)) / 4;
    return Area;
}

void PrintResults(float Area)
{
    cout << "\n Circle Area = " << Area << endl;
}

int main()
{
    PrintResults(CircleAreaInscribedInSquare(ReadSquareSide()));
}