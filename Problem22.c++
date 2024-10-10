#include <iostream>
#include <string>

using namespace std;

void ReadTriangleData(float& A, float& B)
{
    cout << "Pleas enter Triangle Side A ? \n";
    cin >> A;
    cout << "Pleas enter Triangle base B ? \n";
    cin >> B;
}

float CircleAreaByTriangle(float A, float B)
{
    const float PI = 3.141592653589793238;
    float Area = PI * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B));
    return Area;
}

void PrintResults(float Area)
{
    cout << "\n Circle Area = " << Area << endl;
}

int main()
{
    float A, B;
    ReadTriangleData(A, B);
    PrintResults(CircleAreaByTriangle(A, B));
}