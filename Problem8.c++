#include <iostream>
#include <string>

using namespace std;

enum enPassFail { PASS = 1, FAIL = 2 };

int ReadMark()
{
    int Mark;
    cout << "Pleas enter your Mark ? \n";
    cin >> Mark;
    return Mark;
}

enPassFail CheckMark(int Mark)
{
    if ( Mark >= 50)
    return enPassFail::PASS;
    else
    return enPassFail::FAIL;
}
void PrintResults(int Mark)
{
    if (CheckMark(Mark) == enPassFail::PASS)
    cout << "\n You Passed \n";
    else
    cout << "\n You Faild \n";
}

int main()
{
    PrintResults(ReadMark());
}