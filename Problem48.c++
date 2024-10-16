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

float MonthlyInstallment(float LoanAmiount, float HowManMonths)
{
    return (float)LoanAmiount / HowManMonths;
}

int main()
{
    float LoanAmiount = ReadPositiveNumber("Pleas Enter Loan Amiount?");
    float HowManMonths = ReadPositiveNumber("How Man Months ?");
    cout << "\n Monthly Installmenty = " <<
    MonthlyInstallment(LoanAmiount, HowManMonths) << endl;
}
