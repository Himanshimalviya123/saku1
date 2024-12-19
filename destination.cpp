# include<iostream>
using namespace std;
int main(){
int d;
cout<<"enter your location 1. 2. 3. 4."; cin>>d;
if(d==1)
{cout<<"enter your destination";cin>>d;
if(d==2)
{cout<<"enter your destination";cin>>d;
if(d==3)
{cout<<"enter your destination";cin>>d;
if(d==4)
{cout<<"reached your dstination";}
else{cout<<"invalid path";} }
else if(d==4)
{cout<<"reached your destination";}
else{cout<<"invalid path"; }}
else{ cout<<"invalid path";}}
}
#include<iostream>
using namespace std;
int main()
{
    for(int r=1;r<=5;++r)
    {
        for(int c=1;c<=9;++c)
        {
            if(c>=6-r && c<=4+r)
            {
                cout<<"*";
                
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;

    }
    // <----------------------pyramid------------------>
    #include<iostream>
using namespace std;
int main()
{
    for(int r=1;r<=5;++r)
    {
        for(int c=1;c<=9;++c)
        {
            if(c>=r &&c<=10-r)
            {
                cout<<"*";
                
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;

    }
}
// <--------------diamond---------------->
#include<iostream>
using namespace std;
int main()
{
    int a=0;
    for(int r=1;r<=9;++r)
    {
        (r<=5)?a++:a--;
        for(int c=1;c<=9;++c)
        {
            if(c>=6-a && c<=4+a)
            {
                cout<<"*";
                
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;

    }
}
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;++i)
    {
        for(int j=1;j<=i;++j)
        
        
            {
                cout<<i;
            }
            cout<<endl;
        
    }
}
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;++i)
    {
        for(int j=1;j<=i;++j)
        
        
            {
                cout<<j;
            }
            cout<<endl;
        
    }
}#include<iostream>
using namespace std;
int main()
{
    int a=1;
    for(int i=1;i<=4;++i)
    {
        for(int j=1;j<=i;++j)
        
        
            {
                cout<<a;
                a++;
            }
            cout<<endl;
        
    }
}
#include <iostream>
using namespace std;
int main()
{
    int arr[]={70,50,40,50,60};
    int min=arr[3];
    for(int i=1;i<5;++i)
    {
        if(arr[i]<min)
        {
            min=arr[i];
            
        }
    }
    cout<<min;
}
}
 
 
 
 
 
 
    
    
