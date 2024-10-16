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
    } while (Number <= 0 );
    return Number;
}

float TotalMonths(float LoanAmiount, float MonthlyInstallment)
{
    return (float)LoanAmiount / MonthlyInstallment;
}

int main()
{
    float LoanAmiount = ReadPositiveNumber("Pleas Enter Loan Amiount?");
    float MonthlyInstallment = ReadPositiveNumber("Pleas Enter MonthlyInstallmentt ?");
    cout << "\n Total Months to pay = " << TotalMonths(LoanAmiount,
    MonthlyInstallment) << endl;
}