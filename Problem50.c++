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
int Counter = 3;
    do
    {
        Counter--;
        PinCode = ReadPinCode();
        if (PinCode == "1234")
        {
            return true;
        }
        else
        {
            cout << "\nWrong PIN , you have " << Counter << " moretries \n";
            system("color 4F");
        }
    } while (PinCode != "1234" && Counter >= 1);
    return false;
}

int main()
{

    if (Login())
    {
        system("color 2F"); // turn screen to green
        cout << "\n Your account balance is " << 7500 << '\n';
    }
    else
    {
        cout << "\n Your card blocked call the bank for help. \n";
    }
}