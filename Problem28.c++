#include <iostream>
#include <string>

using namespace std;

enum enOddOrEven { Odd = 1, Even =2 };

int ReadNumber()
{
    int Num;
    cout << "Pleas enter a Number ? \n";
    cin >> Num;
    return Num;
}

enOddOrEven CheckOddEven(int Number)
{
    if (Number % 2 != 0)
    return enOddOrEven::Odd;
    else
    return enOddOrEven::Even;
}

int SumOddFrom1toNum_UsingFor(int Num)
{

    cout << "Sum Odd Numbers using For Statement: \n";
    int Sum = 0;
    for (int Counter = 1 ; Counter <= Num ; Counter++)
    {
    if (CheckOddEven(Counter) == enOddOrEven::Odd)
    {
    Sum += Counter;
    }
    }
    return Sum ;
}

int SumOddFrom1toNum_UsingWhile(int Num)
{
    int Counter =0;
    int Sum = 0;
    cout << "Sum Odd Numbers using While Statement: \n";
    while (Counter <= Num)
    {
    if (CheckOddEven(Counter) == enOddOrEven::Odd)
    {
    Sum += Counter;
    }
    Counter++;
    }
    return Sum ;
}

int SumOddFrom1toNum_UsingDoWhile(int Num)
{
    int Counter = 0;
    int Sum = 0;
    cout << "Sum Odd Numbers using Do While Statement: \n";
    do
    {
    if (CheckOddEven(Counter) == enOddOrEven::Odd)
    {
    Sum += Counter;
    }
    Counter++;
    } while (Counter <= Num);
    return Sum;
}

int main()
{
    int Num = ReadNumber();
    cout << SumOddFrom1toNum_UsingFor(Num) << endl;
    cout << SumOddFrom1toNum_UsingWhile(Num) << endl;
    cout << SumOddFrom1toNum_UsingDoWhile(Num) << endl;
}