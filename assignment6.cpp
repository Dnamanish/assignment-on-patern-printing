#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout << "Enter no for m:";
    cin >> m;
    cout << "Enter no for n:";
    cin >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
          if(i==1||i==m||j==1||j==n)
          {
            cout<<"*";
          }
          else
          {
            cout<<" ";
          }
        }
        cout << endl;
    }
}