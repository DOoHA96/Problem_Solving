#include <iostream>
#include <string>

using namespace std;

string ReadPinCode()
{
    string Pincode;
    cout << "Pleas Enter PIN Code \n";
    cin >> Pincode;
    return Pincode;
}

bool Login()
{
    string PinCode;
    do
    {
        PinCode = ReadPinCode();
        if (PinCode == "1234")
        {
            return true;
        }
        else
        {
            cout << "\nWrong PIN \n";
            system("color 4F");
        }
    } while (PinCode != "1234");
}
int main()
{
    if (Login())
    {
    system("color 2F"); // turn screen to green
    cout << "\n Your account balance is " << 7500 << '\n';
}