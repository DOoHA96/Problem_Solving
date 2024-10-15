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

strTaskDuration SecondsToTaskDuration(int TotalSeconds)
{
    strTaskDuration TaskDuration;
    const int SecondsPerDay = 24 * 60 * 60;
    const int SecondsPerHours = 60 * 60;
    const int SecondsPerMinute = 60;
    int Remainder = 0;
    TaskDuration.NumberOfDays = floor(TotalSeconds / SecondsPerDay);
    Remainder = TotalSeconds % SecondsPerDay;
    TaskDuration.NumberOfHours = floor(Remainder / SecondsPerHours);
    Remainder = Remainder % SecondsPerHours;
    TaskDuration.NumberOfMinutes = floor(Remainder / SecondsPerMinute);
    Remainder = Remainder % SecondsPerMinute;
    TaskDuration.NumberOfSeconds = Remainder;
    return TaskDuration;
}

void PrintTaskDurationDetils(strTaskDuration TaskDuration)
{
    cout << endl;
    cout << TaskDuration.NumberOfDays << ":"
    << TaskDuration.NumberOfHours << ":"
    << TaskDuration.NumberOfMinutes << ":"
    << TaskDuration.NumberOfSeconds << "\n";
}

int main()
{
    int TotalSeconds = ReadPositiveNumber("Pleas Enter Total Seconds?");
    PrintTaskDurationDetils(SecondsToTaskDuration(TotalSeconds));
}