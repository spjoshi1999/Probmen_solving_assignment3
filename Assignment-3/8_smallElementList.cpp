//	Write a program to accept a list of N integers. Accept integer K.
// Find the Kth smallest number in the list and its position.
#include <iostream>
#include <algorithm>
#include <iterator>
#include <list>
using namespace std;

void findPosition(list<int> l, int ele)
{
    int pos, count = 0;

    list<int>::iterator itr = l.begin();
    for (auto itr = l.begin(); itr != l.end(); ++itr)
    {
        count++;
        if (*itr == ele)
        {
            pos = count;
            break;
        }
    }
    cout << "Position of the element in the list " << pos << endl;
}

void printList(list<int> l)
{
    list<int>::iterator itr = l.begin();
    for (auto itr = l.begin(); itr != l.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout << endl;
}

int findKthSmallestNo(list<int> l, int k)
{
    int count = 0;
    list<int>::iterator itr = l.begin();
    l.sort();
    int r;
    for (auto itr = l.begin(); itr != l.end(); ++itr)
    {
        count++;
        if (count == k)
        {
            cout << k << " th Smallest Number in the List= " << *itr << endl;
            return *itr;
        }
    }
    return 0;
}

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

int main()
{
    int N, K, ele;
    list<int> L1;
    list<int> L2;
    cout << "Enter Size of List" << endl;
    cin >> N;
    if (N >= 0)
    {
        cout << "Enter element K to find Kth Smallest Element" << endl;
        cin >> K;
        if (K <= N && K >= 0)
        {
            insertData(L1, N);
            printList(L1);
            ele = findKthSmallestNo(L1, K);
            findPosition(L1, ele);
        }
        else
        {
            cout << "K must be less than or equal to N" << endl;
        }
    }
    else
    {
        cout << "size of the list must be greater than zero" << endl;
    }

    return 0;
}