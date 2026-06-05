#include<bits/stdc++.h>
using namespace std;

int gcd1(int n1, int n2 ){
    int c ;
    for(int i=1 ; i<= min(n1,n2);i++)
    {
        if((n1%i==0)&&(n2%i==0))
        {
            c =i;
        }
    }
    return c ;
}
int gcd2(int n1, int n2 ){
    int c ;
    for(int i=min(n1,n2) ; i>= 1;i++)
    {
        if((n1%i==0)&&(n2%i==0))
        {
            c=i ;
           break ;
        }
    }
    return c;
}
int EA(int n1,int n2){
    while((n1>0) && (n2>0) )
    {
        if(n1>n2)
        {
            n1=(n1%n2);
        }
        else
        {
            n2=(n2%n1);
        }
    }
    if(n1==0)
{
    cout << n2 ;
}
else
{
    cout << n1 ;
}
return 0;
}
int main()
{
    int n1 ,n2 ,a ,b ;
    cin >> n1 >> n2 ;
    a = gcd1(n1,n2) ;
    cout << a << endl ;
    b = gcd2(n1,n2) ;
    cout << b << endl ;
    EA(n1,n2);
    return 0 ;
}