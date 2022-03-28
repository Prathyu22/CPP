//Deque --> Double ended queue
// It is having an iterator instead of pointers.

/*
Functions:
push_back()
push_front()
pop_front()
pop_back()
front()
back()
size()
empty()
emplace_front()
emplace_back()
clear()
swap()
at()
insert()
erase()
*/

#include<iostream>
using namespace std;
#include<deque>

int main()
{
    deque <int> d;
    d.push_back(10);
    d.push_front(20);
    d.push_back(30);
    d.push_front(40);

    deque <int> :: iterator it = d.begin();

    while(it!=d.end())
    {
        cout<<*it<<" "; // 40 20 10 30
        it++;
    }
    return 0;
}
