/*
Write a program that declares an array epsilon of 20 components of
type int . Initialize the array so that the first 10 components are equal to
the cube of the index variable, and the last 10 components are equal to
three times the index variable. Output the array so that 10 elements per line
are printed.
*/

#include <iostream>

using namespace std;

int main()
{
    int epsilon[20];

    for (int i = 0; i < 10; i++)
    {
        epsilon[i] = i * i * i;
        cout << epsilon[i] << "   ";
    }
    cout << endl;
    for (int j = 10; j < 20; j++)
    {
        epsilon[j] = 3 * j;
        cout << epsilon[j] << "   ";
    }
    cout<<endl;
    return 0;
}