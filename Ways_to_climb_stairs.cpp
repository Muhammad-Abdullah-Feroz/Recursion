// In how many ways you can climb n stairs if you can go either 1 or 2 steps at once

#include <iostream>
#include <conio.h>

using namespace std;

int climbStairs(int n)
{
    if (n > 0)
    {
        if (n == 1)
            return 1;
        if (n == 2)
            return 2;
        return (climbStairs(n - 1) + climbStairs(n - 2));
    }
    else
        return 0;
}

int main()
{
    int stairs = 8;
    cout<<"The possible distinct ways to climb "<<stairs<<" stairs are "<<climbStairs(stairs);
    return 0;
}