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
        cout << epsilon[i]<<"   ";
    }

    cout << endl;

    for (int i = 10; i < 20; i++)
    {
        epsilon[i] = 3 * i;
        cout << epsilon[i]<<"   ";
    }

    cout<< endl;
    
    return 0;
}