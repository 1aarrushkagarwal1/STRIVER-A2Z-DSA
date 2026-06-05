#include<bits/stdc++.h>
using namespace std;

int prime1(int n)
{
    int i , c=0 ;
    for(i=1 ; i<=n ;i++ )
    {
        if(n % i == 0) 
        {
            c++ ;
        }
    }
    if( c==2)
    {
        cout << " Prime " ;
    }
    else
    {
        cout << " Not ";
    }
    return 0 ;
}

int prime2(int n)
{
    int i ,c =0;
    vector<int> v ;
    for( i=1 ; i<=sqrt(n) ;i++)
    {
        if(n%i==0)
        {
            if((n/i)!=i)
            {
                            c++       ; 
         }
         c++ ;
        }
    }
              if( c==2)
    {
        cout << " Prime " ;
    }
    else
    {
        cout << " Not ";
    }
    return 0 ;

}
int main()
{
    int n ;
    cin >> n;
    prime1(n);
    cout << endl ;
    prime2(n) ;
    return 0 ;
}