#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(int& Num1, int& Num2 )
{
    cout << "Pleas enter Number 1 ? \n";
    cin >> Num1;
    cout << "Pleas enter Number 2 ? \n";
    cin >> Num2;
}

void Swap(int& A, int& B )
{
    int Temp;
    Temp = A;
    A = B;
    B = Temp;
}

void PrintResults(int Num1 , int Num2)
{
    cout << "\n Number 1 : " << Num1 << endl;
    cout << " Number 2 : " << Num2 << endl;
}

int main()
{
    int Num1, Num2 ;
    ReadNumbers(Num1, Num2 );
    PrintResults(Num1, Num2);
    Swap(Num1, Num2);
    PrintResults(Num1, Num2);
}