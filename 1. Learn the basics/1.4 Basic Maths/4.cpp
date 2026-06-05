#include<bits/stdc++.h>
using namespace std;
bool armstrong ( int n){
    int l, b ,sum=0 , c ;
    b= n ;
    c= (int)log10(n) +1;
    while(n>0)
    {
        l=n%10;
        n=n/10 ;
        sum = sum+round(pow(l,c));
    }
    if(b==sum)
    {
        return true ;
    }
    else
    {
        return false ;
    }

}
int main(){
    int n,a ;
    cin >> n ;
    a = armstrong(n);
    if(a==1)
    {
        cout << "True" ;
    }
    else
    {
        cout << "False ";
    }

}