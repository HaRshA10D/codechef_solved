#include <iostream>
#include <cmath>
using namespace std;
void printDivisors(int n)
{
    // Note that this loop runs till square root
    for (int i=1; i<=sqrt(n)+1; i++)
    {
        if (n%i==0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
                printf("%d ", i);
 
            else // Otherwise print both
                printf("%d %d ", i, n/i);
        }
    }
}
 
/* Driver program to test above function */
int main()
{
    printf("The divisors of 100 are: \n");
    printDivisors(9);
    return 0;
}
