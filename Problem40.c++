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

float TotalBillAfterServiceAndTax(float TotalBill)
{
    TotalBill *= 1.1;
    TotalBill *= 1.16;
    return TotalBill;
}

void PrintTotalBillAfterServiceAndTax()
{
    float TotalBill = ReadPositiveNumber("Pleas Enter Total Bill?");
    cout << endl;
    cout << "Total Bill = " << TotalBill << endl;
    cout << "Total Bill After service Fee and Sales Tax = "
    << TotalBillAfterServiceAndTax(TotalBill) << endl;
}

int main()
{
    PrintTotalBillAfterServiceAndTax();
}