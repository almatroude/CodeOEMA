/*Write a program that calculates and prints the sum of all the natural numbers divisible by
either 3 or 5, up to a given limit entered by the user.
NOTE: Or mean either divisible by 3, 5 or both*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    int i;
    int sum=0;

    

    cout << "Enter Limit" << endl;
    cin >> n;

    for (i = 0; i <= n; i++)

    {

        if ((i % 3 == 0 || i % 5 == 0))
        {
            sum = sum + i;
        }
    }

    cout << "The sum of all natural numbers divisible by 3 or 5 from 1 up to " << n<< " is " << sum<<endl;

    return 0;
}
