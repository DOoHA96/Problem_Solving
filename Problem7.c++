#include <iostream>
#include <string>

using namespace std;

int ReadNamber()
{
    int Num;
    cout << "Pleas enter your Number ? \n";
    cin >> Num;
    return Num;
}

float CalculateHalfNumber(int Num)
{
    return (float)Num / 2;
}
void PrintResults(int Num)
{
    string Result = "Half of " + to_string(Num) + " is " +
    to_string(CalculateHalfNumber(Num));
    
    cout << Result << endl;

}

int main()
{
    PrintResults(ReadNamber());
}