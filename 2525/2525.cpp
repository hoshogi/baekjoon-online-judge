/*
Title   : BOJ_2525 [오븐 시계]
Author  : Hoseok Lee
Date    : 2021/02/02
 
https://www.acmicpc.net/problem/2525
https://github.com/hoshogi
*/

#include <iostream>
using namespace std;

int main(void)
{
    int hour, minute, time;
    
    cin >> hour >> minute;
    cin >> time;
    
    hour += time / 60;
    minute += time % 60;
    
    if (minute >= 60)
    {
        minute %= 60;
        hour++;
    }
    
    if (hour > 23)
        hour -= 24;
    
    
    cout << hour << " " << minute << endl;
    
    return 0;
}
