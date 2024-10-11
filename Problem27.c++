#include <iostream>
#include <string>

using namespace std;

int ReadNumber()
{
    int Num;
    cout << "Pleas enter your Number ? \n";
    cin >> Num;
    return Num;
}

void PrintRangeFrom1toNum_UsingFor(int Num)
{
    //This is the best solution of Three
    cout << "Range printed using For Statement: \n";
    for (int Counter = Num ; Counter > 1 ; Counter--)
    {
    cout << Counter << endl;
    }
}

void PrintRangeFrom1toNum_UsingWhile(int Num)
{
    int Counter = Num + 1;
    cout << "Range printed using While Statement: \n";
    while (Counter > 1)
    {
    Counter--;
    cout << Counter << endl;
    }
}

void PrintRangeFrom1toNum_UsingDoWhile(int Num)
{
    int Counter = Num + 1;
    cout << "Range printed using Do While Statement: \n";
    do
    {
    Counter--;
    cout << Counter << endl;
    } while (Counter > 1);
}

int main()
{
    int Num = ReadNumber();
    PrintRangeFrom1toNum_UsingFor(Num);
    PrintRangeFrom1toNum_UsingWhile(Num);
    PrintRangeFrom1toNum_UsingDoWhile(Num);
}