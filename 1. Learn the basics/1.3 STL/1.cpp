#include<bits/stdc++.h>
 using namespace std ;
 void explainPair() {
    pair<int,int> p ={1,3};
    cout << p.first << " " << p.second ;
    pair<int,pair<int,int>> d ={1,{3,4}};
    cout << d.first << " " << d.second.second << " " << d.second.first ;
    pair<int , int > arr[]= {{1,2}, {2,5},{5,1}};
 }
 int main(){
    explainPair();
    return 0;
 }