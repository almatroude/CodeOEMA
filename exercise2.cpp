/* Write a program that prompts the user to input a number.The program
    should then output the number and a message saying whether the number is
        positive,
    negative, or zero. */

// input from the user should be an integer(intergers are both positive and negative whole numbers)
// hence i initialized a place holder to store the input of the user
// by using the  if else if statements;
//if (the number by user grater than zero){then the output should be a positive number}
//else if (number entered by is negative){then the output is negative number}
// if (the nuber entered by the user ==0){then the output is zero}

#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "please enter the number  " << endl;
    cin >> number;

    if (number > 0)
    {
        cout << number << " "<< "is a positive number" << endl;
    }

    else if (number < 0)
    {
        cout << number << " "
             << "is a nagetive number" << endl;
    }

    else 
    {
        cout << number << " "
             << "is zero" << endl;
    }

    return 0;
}
