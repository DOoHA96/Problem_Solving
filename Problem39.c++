#include <iostream>
#include <string>

using namespace std;

float ReadPositiveNumber(string Message)
{
    float Number = 0;
        do
        {
            cout << Message << endl;
            cin >> Number;

        } while (Number <= 0);

    return Number;
}

float CalculatRemainder(float TotalBill, float TotalCashPaid)
{
    return TotalCashPaid - TotalBill;
}

void PrintRemainder()
{
    float TotalBill = ReadPositiveNumber("Pleas Enter Total Bill?");
    float TotalCashPaid = ReadPositiveNumber("Pleas Enter Total CashPaid ?");
    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Cash Paid = " << TotalCashPaid << endl;
    cout << "************************\n";
    cout << "Remainder = " << CalculatRemainder(TotalBill,
    TotalCashPaid) << endl;
}

int main()
{
    PrintRemainder();
}