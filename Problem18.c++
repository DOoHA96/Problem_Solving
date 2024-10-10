#include <iostream>
#include <string>

using namespace std;

float ReadRadious()
{
    float R;
    cout << "Pleas enter Radious R ? \n";
    cin >> R;
    return R;
}

float CircleArea(float R)
{
    const float PI = 3.141592653589793238;
    float Area = PI * pow(R ,2);
    return Area;
}

void PrintResults(float Area)
{
    cout << "\n Circle Area = " << Area << endl;
}

int main()
{
    PrintResults(CircleArea(ReadRadious()));
}