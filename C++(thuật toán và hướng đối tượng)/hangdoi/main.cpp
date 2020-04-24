#include <iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;
    for (int i=1;i<=5;i++) q.push(i);
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        q.push(q.front());
        q.push(q.front());
        q.pop();
    }
    cout<<q.front();
    return 0;
}
