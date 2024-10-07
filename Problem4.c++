/*Write a program that asks the user to enter their details: age and
driver's license, then 'rented' if they are over 21 years old and have a
driver's license, otherwise print 'disapproved'*/

#include <iostream>

using namespace std;

struct stInfo
{
    short Age;
    bool HasDrivingLicense;
};
stInfo ReadInfo()
{
    stInfo Info;
    cout << "Pleas enter Your Age ?" << endl;
    cin >> Info.Age;
    cout << "Do you has driver License?" << endl;
    cin >> Info.HasDrivingLicense;
    return Info;
}
bool IsAccepted(stInfo Info)
{
    return (Info.Age > 21 && Info.HasDrivingLicense);
}
void PrintResult(stInfo Info)
{
    if (IsAccepted(Info))
    cout << "\n Hired \n";
    else
    cout << "\n Rejected \n";
}

int main()
{
    PrintResult(ReadInfo());
}