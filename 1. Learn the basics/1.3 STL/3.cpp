#include<bits/stdc++.h>
using namespace std;
void adjacent (int H,int W)
{
    for(int m=1;m<=H;m++)
    {
        for(int n=1;n<=W;n++)
        {
            int c=0;
            for(int i=1;i<=H;i++)
            {
                for(int j=1;j<=W;j++)
                {
                    if(((m-i)*(m-i)+(n-j)*(n-j))==1)
                    {
                        c++;
                    }
                }
            }
            cout << c << " ";
        }
        cout << endl;
    }
}
int main()
{
    int H , W;
    cin >> H;
    cin >> W;
    adjacent(H,W);
    return 0;
}