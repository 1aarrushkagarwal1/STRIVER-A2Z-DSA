#include <bits/stdc++.h>
using namespace std;
void print1(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void print2(int n){
    for(int i=0; i < n ; i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << "* ";
        }
        cout << endl ;
    }

}
void print3(int n){
    for(int i=0; i < n ; i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << " "<< j+1 ;
        }
        cout << endl ;
    }

}
void print4(int n){
    for(int i=0; i < n ; i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << " "<< i+1 ;
        }
        cout << endl ;
    }

}
void print5(int n){
    for(int i=0; i < n ; i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout << "*";
        }
        cout << endl ;
    }

}
void print6(int n){
    for(int i=0; i < n ; i++)
    {
        for(int j=0;j<n-i;j++)
        {
            cout << j+1 << " ";
        }
        cout << endl ;
    }

}
void print7(int n){
    for(int i=0; i < n ; i++)
    {
        for(int s=0;s<n-i-1;s++)
        {
            cout << "  ";
        }
        for(int j=0;j<2*(i)+1;j++)
        {
            cout << "* ";
        }
        cout << endl ;
    }

}
void print8(int n){
    for(int i=0; i < n ; i++)
    {
        for(int s=0;s<i;s++)
        {
            cout << "  ";
        }
        for(int j=0;j<2*(n-i-1)+1;j++)
        {
            cout << "* ";
        }
        cout << endl ;
    }

}
void print9(int n){
    for(int i=0; i < n ; i++)
    {
        for(int s=0;s<n-i-1;s++)
        {
            cout << "  ";
        }
        for(int j=0;j<2*(i)+1;j++)
        {
            cout << "* ";
        }
        cout << endl ;
    }
    for(int i=0; i < n ; i++)
    {
        for(int s=0;s<i;s++)
        {
            cout << "  ";
        }
        for(int j=0;j<2*(n-i-1)+1;j++)
        {
            cout << "* ";
        }
        cout << endl ;
    }

}
void print10(int n){
    for(int i=0 ; i< (2*n)-1 ;i++)
    {
        if(i<n)
        { 
            for(int j=0;j<=i;j++)
            {
                cout << "* ";
            }
        }
        else 
        {
            for(int j=0 ;j<(2*n)-1-i;j++)
            {
                cout << "* ";
            }
        }
        cout << endl ;
    }
}
void print11(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                cout << "1 ";
            }
            else 
            {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}
void print12(int n){

    for(int i=0; i < n ; i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << j+1 ;
        }
        for(int s=0;s<(2*(n-1-i));s++)
        {
            cout << " ";
        }
        for(int j=0 ;j<=i ;j++)
        {
            cout << i-j+1 ;
        }
        cout << endl ;

    }

}
void print13(int n){
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            count++;
            cout << count << " ";
        }
        cout << endl ;
    }
}
void print14(int n){
    for(int i=0;i<n;i++)
    {
        char c='A';
        for(int j=0;j<=i;j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl ;
    }
}
void print15(int n){
    for(int i=0;i<n;i++)
    {
        char c='A';
        for(int j=0;j< n-i;j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl ;
    }
}
void print16(int n){
    char c='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << c << " ";
        }
          c++;
        cout << endl ;
    }
}
void print17(int n){
    for(int i=0; i < n ; i++)
    {
        char c= 64;
        for(int s=0;s<n-i-1;s++)
        {
            cout << " ";
        }
        for(int j=0;j<2*(i)+1;j++)
        {
            if(j<=i)
            {
                c++;
                cout << c ;
            }
            else
            {
                c--;
                cout << c ;
            }
        }
        cout << endl ;
    }

}
void print18(int n){
    char c = 'A';
    for(int i=0;i<n;i++)
    {
        c= 'A'+ n -1 -i ;
        for(int j=0;j<=i;j++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}
void print19(int n){
    for(int i=0;i<2*n;i++)
    {
        if(i<n)
        {
            for(int j=0;j<n-i;j++)
            {
                cout << "*";
            }
            for(int s=0;s<2*i;s++)
            {
                cout << " ";
            }
            for(int j=0;j<n-i;j++)
            {
                cout << "*";
            }
        }
        else
        {
            for(int j=0;j<=i-n;j++)
            {
                cout<< "*";
            }
            for(int s=0;s<2*(2*n-i-1);s++)
            {
                cout << " ";
            }
            for(int j=0;j<=i-n;j++)
            {
                cout<< "*";
            }
        }
        cout << endl ;
    }
}
void print20(int n){
    for(int i=0;i<2*n;i++)
    {
        if(i<n)
        {
            for(int j=0;j<=i;j++)
            {
                cout << "*";
            }
            for(int s=0;s<(2*(n-i-1));s++)
            {
                cout << " ";
            }
            for(int j=0;j<=i;j++)
            {
                cout << "*";
            }
        }
         else
    {
        for(int j=0; j<(2*n -i-1) ;j++)
        {
            cout << "*";
        }
        for(int s=0; s < (2*(i-n+1));s++)
        {
            cout << " ";
        }
    for(int j=0; j<(2*n -i-1) ;j++)
        {
            cout << "*";
        }
    }
    cout << endl;
}
}
void print21(int n){
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || j==0 || i==(n-1) || j==(n-1) )
            {
                cout << " * ";
            }
            else 
            {
                cout << "   ";
            }
        }
        cout << endl;
    }
}
void print22(int n){
    int c;
    for(int i=1;i<=(2*n)-1;i++)
    {
        for(int j=1;j<=(2*n)-1;j++)
        {
            
        }
        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    print22(t);
}
