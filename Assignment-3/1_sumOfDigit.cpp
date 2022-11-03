/*Write a program to accept an integer N and calculate the sum of its digits. 
Please note N can have maximum 5 digits.*/
#include <iostream>
using namespace std;
void findSumOfDigit(int n)
{
    int sum = 0;
    int r = 0;
    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        sum = sum + r;
    }
    cout << sum << endl;
}

bool checkNumberFiveDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    if (count <= 5)
    {
        return true;
    }
    return false;
}

int main()
{
    int N;
    //accept an integer N
    cout << "Enter Integer N to calculate Sum of Digits" << endl;
    cin >> N;
    if (N >= 0)
    {
        //check No is less or equal to five digits
        if (checkNumberFiveDigit(N))
        {
            cout << "Sum Of Digits " << endl;
            findSumOfDigit(N);
        }
        else
        {
            cout << "Number is more than five Digit" << endl;
        }
    }
    else
    {
        cout << "Number must be a Possitive Number" << endl;
    }

    return 0;
}