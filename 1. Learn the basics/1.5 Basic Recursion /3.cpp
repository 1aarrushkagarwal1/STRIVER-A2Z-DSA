#include<bits/stdc++.h>
using namespace std;
void mine(int i,int n)
{
    if(i>n)
    {
     return ;
    }
    else
    {
        cout << n-i+1 << " ";
        mine(i+1,n);
    }
}
void f(int i,int n)
{
   if(i<1) 
   {
    return ;
   }
   cout << i << " ";
   f(i-1,n);
}

int main()
{
    int n ;
    cin >> n;
    mine(1,n);
    cout << endl ;
    f(n,n);
return 0;
} 