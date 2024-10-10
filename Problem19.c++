#include <iostream>
#include <string>

using namespace std;

float ReadDiameter()
{
    float D;
    cout << "Pleas enter Diameter R ? \n";
    cin >> D;
    return D;
}

float CircleAreaByDiameter(float D)
{
    const float PI = 3.141592653589793238;
    float Area = (PI * pow(D, 2)) / 4;
    return Area;
}

void PrintResults(float Area)
{
    cout << "\n Circle Area = " << Area << endl;
}
int main()
{
    PrintResults(CircleAreaByDiameter(ReadDiameter()));
}