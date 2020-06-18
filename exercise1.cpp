/*Write a program that calculates and prints the sum of all 
the natural numbers divisible by either 3 or 5, up to a given 
limit entered by the user.*/


// C++ program to print all the natural numbers
// divisible by 3 and 5 for a given number
#include <iostream>
using namespace std;


void result(int n)
{

    for (int num = 0; num < n; num++)
    {
        
        if (num % 3 == 0 && num % 5 == 0)
            cout << num << " ";
    }
}


int main()
{
    
    int n;
    cout << "please enter the limit of the numbers divisible both 3 and 5 \n";
    cin >> n;
    
    result(n);
    return 0;
}
