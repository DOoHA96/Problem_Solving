#include <iostream>

#include <string>

using namespace std;

int ReadNumber()
{
    int Number;
    cout << "Pleas enter a Number?" << endl;
    cin >> Number;
    return Number;
}

int ReadPower()
{
    int Power;
    cout << "Pleas enter the Power?" << endl;
    cin >> Power;
    return Power;
}

int PowerOfM(int Number , int M)
{

    if (M == 1)
    return 1;
    int P = 1;
    for (int i = 1; i <= M; i++)
    {
    P *= Number;
    }
    return P;

}

int main()
{
    cout << "Result = " << PowerOfM(ReadNumber(), ReadPower());
}