#include <iostream>
#include <string>

using namespace std;

struct strTaskDuration
{
    int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message)
{
    float Number = 0;
    do
    {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

strTaskDuration ReadTaskDuration()
{
    strTaskDuration TaskDuration;
    TaskDuration.NumberOfDays = ReadPositiveNumber("Pleas Enter NumberOf Days ? ");
    TaskDuration.NumberOfHours = ReadPositiveNumber("Pleas Enter NumberOf Hours ? ");
    TaskDuration.NumberOfMinutes = ReadPositiveNumber("Pleas EnterNumber Of Minutes ? ");
    TaskDuration.NumberOfSeconds = ReadPositiveNumber("Pleas EnterNumber Of Seconds ? ");
    return TaskDuration;
}

int TaskDurationInSeconds(strTaskDuration TaskDuration)
{
    int DurationInSeconds = 0;
    DurationInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
    DurationInSeconds += TaskDuration.NumberOfMinutes * 60 ;
    DurationInSeconds += TaskDuration.NumberOfSeconds ;
    return DurationInSeconds;
}

int main()
{
    cout << endl << "Task Duration In Seconds : " <<
    TaskDurationInSeconds(ReadTaskDuration()) << endl;
}