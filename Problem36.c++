#include <iostream>
#include <string>

using namespace std;

enum enOperationType {Add = '+' , Subtract = '-' ,
Multiply = '*' , Divide = '/' };

float ReadNumber(string Message)
{
    float Number = 0;
    cout << Message << endl;
    cin >> Number;
    return Number;
}

enOperationType ReadType()
{
    char OT = '+';
    cout << "Pleas enter Operation Type ( + , - , * , / )? \n";
    cin >> OT;
    return (enOperationType)OT;
}

float Calculate(float Number1, float Number2, enOperationType OpType)
{
    switch (OpType)
    {
        case enOperationType::Add:
        return Number1 + Number2;
        case enOperationType::Subtract:
        return Number1 - Number2;
        case enOperationType::Multiply:
        return Number1 * Number2;
        case enOperationType::Divide:
        return Number1 / Number2;
        default:
        return Number1 + Number2;
    }
}

int main()
{
    float Number1 = ReadNumber("Pleas enter the first Number ?");
    float Number2 = ReadNumber("Pleas enter the second Number ?");
    enOperationType OpType = ReadType();
    cout << endl << " Result = " << Calculate(Number1 , Number2 ,OpType)
    << endl;
}