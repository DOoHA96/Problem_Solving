#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(int& Num1, int& Num2, int& Num3)
{
    cout << "Pleas enter your Number 1 ? \n";
    cin >> Num1;
    cout << "Pleas enter your Number 2 ? \n";
    cin >> Num2;
    cout << "Pleas enter your Number 3 ? \n";
    cin >> Num3;
}
int SumOf3Numbers(int Num1, int Num2, int Num3)
{
    return Num1 + Num2 + Num3;
}
void PrintResults(int Total)
{
    cout << "\n The total sum of numbers is : " << Total << endl;
}

int main()
{
    
    int Mark1, Mark2, Mark3;
    ReadNumbers(Mark1, Mark2, Mark3);
    PrintResults(SumOf3Numbers(Mark1, Mark2, Mark3));

}
