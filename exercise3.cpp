/*Write a program that reads a set of integers and then finds and prints the sum
of the even and odd integers. (use an array)
In c++ 
*/

#include <iostream>

using namespace std;

int main()
{
    int odd_sum = 0;
    int even_sum = 0;
    int n;
    int odd_sum_and_even_sum = 0;

    cout << "please enter the size of the array:";
    cin >> n;

    int size[n];
    cout << "please enter the elements of the array:";

    for (int i = 0; i < n; i++)
    {
        cin >> size[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (size[i] % 2 == 0)
        {
            even_sum += size[i];
        }
        else
        {
            odd_sum += size[i];
        }
    }
    cout << "the sum of odd numbers are: " << odd_sum << endl;
    cout << "the sum of even numbers are:" << even_sum << endl;

    
    return 0;
}