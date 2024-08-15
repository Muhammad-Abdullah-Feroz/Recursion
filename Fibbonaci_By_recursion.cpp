#include <iostream>
#include <conio.h>

using namespace std;

int fibonacci(int n)                // This function will take an integer for position and will return 
{                                   // the number that is at that position in fibonacci sequence
    if (n == 1 or n == 2)           
    {
        return 1;
    }
    else
    {
        return (fibonacci(n - 1) + fibonacci(n - 2));
    }
}

int main()
{
    int n1 = 1, n2 = 1;
    int n = 20;

    for (int i = 1; i <= n / 2; i++)
    {
        cout << n1 << " . " << n2 << " . ";
        n1 = n1 + n2;
        n2 = n1 + n2;
    }

    // The code uptill now int the MAIN FUNCTION is used to display the complete fibonacci sequence for the first 20 terms

    cout << endl
         << "The tenth term of the fibonacci sequence is " << fibonacci(10);
}


//      Although it would be faster if done through loops instead
//      of recursion becauserecursion would add the time to call 
//      the function again and agian as an overhead but in larger
//      and complex problems recursion would be really beneficial