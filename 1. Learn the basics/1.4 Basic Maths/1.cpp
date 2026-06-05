#include<bits/stdc++.h>
using namespace std ;
int count1(int n)
{
    int c=0 , a;
    while(n>0)
    {
        c++ ;
        n= n / 10 ;
    }
    return c ;
}
int count2(int n)
{
    int c = (int)(log10(n))+1 ;
    return c ;
}
int main()
{
    int N,b,c;
    cin >> N;
    b = count1(N);
    c = count2(N) ;
    cout << b << endl;
    cout << c;
    return 0 ;

}