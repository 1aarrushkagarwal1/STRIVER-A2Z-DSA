#include<bits/stdc++.h>
using namespace std;
int reverse(int x){
  int rn , ld ,b ;
    b = abs(x);
    rn=0;
    while(b>0)
    {
         ld = b % 10 ;
        b=b/10 ;
         rn = (rn*10)+ ld ;
    }
    if(abs(rn)==abs(x))
    {
        return true ;
    }
    else{
        return false ;
    }

}
int main(){
    int n ,a ;
    cin >> n ;
    a = reverse(n);
    if(a==1)
    {
        cout << "True" ;
    }
    else
    {
        cout << "False ";
    }

}