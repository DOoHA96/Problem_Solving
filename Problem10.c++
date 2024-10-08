#include <iostream>
#include <string>

using namespace std;

void ReadNumbers(int& Mark1, int& Mark2, int& Mark3)
{
    cout << "Pleas enter your Mark 1 ? \n";
    cin >> Mark1;
    cout << "Pleas enter your Mark 2 ? \n";
    cin >> Mark2;
    cout << "Pleas enter your Mark 3 ? \n";
    cin >> Mark3;
}
int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
    return Mark1 + Mark2 + Mark3;
}

float CalculateAverage(int Mark1, int Mark2, int Mark3)
{
    return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

void PrintResults(float Average)
{
    cout << "\n The total sum of numbers is : " << Average << endl;
}

int main()
{
    int Mark1, Mark2, Mark3;
    ReadNumbers(Mark1, Mark2, Mark3);
    PrintResults(CalculateAverage(Mark1, Mark2, Mark3));
}