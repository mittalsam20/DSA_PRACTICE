
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(5);
    dq.push_front(6);
    dq.push_front(7);
    dq.push_front(8);

    for (auto ele : dq)
        cout << ele << " ";
    cout << endl;
    dq.pop_back();
    for (auto ele : dq)
        cout << ele << " ";
    cout << endl;

    dq.pop_front();
    for (auto ele : dq)
        cout << ele << " ";
    cout << endl;
    cout << dq.size();
}