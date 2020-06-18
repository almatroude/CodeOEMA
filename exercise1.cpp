/*Write a program that calculates and prints 
the sum of all the natural numbers divisible by 
either 3 or 5, up to a given limit entered by the user. */

/* ANALYSIS */

// formula to calculate the sum of numbers divisible by 3 or 4 from 1 to the limit the user want
// sum Sn= n/2 [2a + (n - 1)d].
// where n is the total number of terms in the series
// ..... a is the first term
// ..... d is the common difference
#include <iostream>
using namespace std;

int sum(int N)
{
    int S1, S2;

    S1 = ((N / 3)) * (2 * 3 + (N / 3 - 1) * 3) / 2;
    S2 = ((N / 4)) * (2 * 4 + (N / 4 - 1) * 4) / 2;

    return S1 + S2;
}

// main function;
int main()
{
    int N;
    cout << "please enter the number that you want to find the sum of all natural numbers  divisible by 3 or 4, from 1 to the number you want " << endl;
    cin >> N;

    cout << "the sum of the numbers divisible by 3 or 4  from 1 up " << N << " is  " << sum(N) << endl;

    return 0;
}
