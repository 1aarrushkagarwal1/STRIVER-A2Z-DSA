#include<bits/stdc++.h>
using namespace std;

int divisor1(int n)
{
    int i ;
    for(i=1 ; i<=n ;i++ )
    {
        if(n % i == 0) 
        {
            cout << i << " ";
        }
    }
    return 0 ;
}

int divisor2(int n)
{
    int i ;
    vector<int> v ;
    for( i=1 ; i<=sqrt(n) ;i++)
    {
        if(n%i==0)
        {
            v.emplace_back(i) ;
            if((n/i)!=i)
            {
                v.emplace_back(n/i) ;            }
        }
    }
      sort(v.begin(),v.end()) ;
      for(int j=0 ;j<(v.size());j++)
        {
            cout << v[j] << " ";        }
    return 0 ;

}
int main()
{
    int n ;
    cin >> n;
    divisor1(n);
    cout << endl ;
    divisor2(n) ;
    return 0 ;
}