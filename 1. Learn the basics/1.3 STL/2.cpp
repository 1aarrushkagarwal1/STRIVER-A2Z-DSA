#include<bits/stdc++.h>
using namespace std;
void chompers(string s , int N)
{
    for(int i=0+N;i<s.length()-N;i++)
    {
        cout << s[i];
    }
}
int main()
{
    string s;
    int N;
    cout << "Please input the string and integer : ", cin >> s >> N;
    chompers(s,N);
}