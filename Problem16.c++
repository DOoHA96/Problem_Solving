#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(float& A, float& D )
{
    cout << "Pleas enter rectangle Side A ? \n";
    cin >> A;
    cout << "Pleas enter rectangle Diagonal D ? \n";
    cin >> D;
}
float RectangleAreaBySideAndDiagonal(float A, float D)
{
    float Area = A * sqrt(pow(D, 2) - pow(A, 2));
    return Area;
}
void PrintResults(float Area)
{
    cout << "\n Rectangle Area = " << Area << endl;
}
int main()
{
    float Num1, Num2 ;
    ReadNumbers(Num1, Num2 );
    PrintResults(RectangleAreaBySideAndDiagonal(Num1, Num2));
}