#include <iostream>

using namespace std;

void PrintLettersAtoZ()
{
    for (int i = 65; i <= 90; i++)
    {
        cout << char(i) << endl;
    }
}

int main()
{
    PrintLettersAtoZ();
}