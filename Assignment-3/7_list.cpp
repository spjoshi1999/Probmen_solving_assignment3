//Write a program to a accept a list of N integers.
//Find the largest and the smallest number in the list and their respective positions in the list.

#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
using namespace std;

void insertData(list<int> &l, int N)
{
    int r;
    cout << "Enter Elements to insert in the list" << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> r;
        l.push_back(r);
    }
}

void findLarge(list<int> l)
{
    int index, max, count, pos;
    list<int>::iterator itr = l.begin();
    max = l.front();
    count = 0;
    pos = 0;
    for (auto itr = l.begin(); itr != l.end(); ++itr)
    {
        cout << *itr << " ";
        count++;
        if (max < *itr)
        {
            max = *itr;
            pos = count;
        }
    }
    if (max == l.front())
    {
        pos = 1;
    }
    cout << endl;
    cout << "Maximum element is " << max << endl;
    cout << "Position of Maximum element is = " << pos << endl;
}

void findSmall(list<int> l)
{
    int index, min, count, pos;
    list<int>::iterator itr = l.begin();
    min = l.front();
    count = 0;
    pos = 0;
    cout<<"List Elements are= "<<endl;
    for (auto itr = l.begin(); itr != l.end(); ++itr)
    {
        cout << *itr << " ";
        count++;
        if (min > *itr)
        {
            min = *itr;
            pos = count;
        }
    }
    if (min == l.front())
    {
        pos = 1;
    }
    cout << endl;
    cout << "Minimum element is " << min << endl;
    cout << "Position of minimum element is = " << pos << endl;
}
int main()
{
    int N;
    list<int> l;
    cout << "Enter Size of List" << endl;
    cin >> N;
    if(N>0)
    {
    insertData(l, N);
    findSmall(l);
    findLarge(l);
    }
    else
    {
        cout<<"N must be greater than or equals to 0"<<endl;
    }
    
    return 0;
}
