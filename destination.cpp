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
// <===================================array starts==============================>
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
// <========================arrray wwithout 3=========================>
#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5};
    for(int i=0;i<5;++i)
    {
        if(arr[i]!=3)
        {
            cout<<arr[i];
        }
    }
}
// <===================comparision=======================>
#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,1,2,1};
    for(int i=0;i<5;++i)
    {
        for(int j=i+1;j<5;++j)
        {
        if(arr[i]==arr[j])
        {
            cout<<arr[i];
        }
    }
}
}
#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,7,1,2,8,7,1,5,2};
    for(int i=0;i<10;++i)
    {
    bool dup=false;
    
        for(int j=i+1;j<10;++j)
        {
        if(arr[i]==arr[j] )
        {
            
            cout<<arr[i];
        }
    }
}
}
// <=============================unique======================>
#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,7,1,8,7,1,5,2,6};
    for(int i=0;i<10;++i)
    {
    bool dup=false;
    
        for(int j=i+1;j<10;++j)
        {
        if(arr[i]==arr[j] && arr[i]!=-1 )
        {
            
            arr[j]=-1;
            dup=true;
        }
    }

if(!dup && arr[i]!=-1)
{
    cout<<arr[i];
}
}
}
// <==============================duplicate=========================>
#include <iostream>
using namespace std;
int main()
{
    int arr[]={1,2,7,1,8,7,1,5,2,6};
    for(int i=0;i<10;++i)
    {
    bool dup=false;
    
        for(int j=i+1;j<10;++j)
        {
        if(arr[i]==arr[j] && arr[i]!=-1 )
        {
            
            arr[j]=-1;
            dup=true;
        }
    }

if(dup )
{
    cout<<arr[i];
}
}
}
// <==========================frequency============================>
# include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,1,3,3,6,8,5,5,6,6,4};
    for(int i=0;i<12;++i)
    {
        int count=1;
        for(int j=i+1;j<12;++j)
    {
        if(arr[i]==arr[j])
        {
            count++;
            arr[j]=-1;
            
        }
    }
    if(arr[i]!=-1)
    {
        cout<<"the freq of"<<arr[i]<<"is"<<count<<endl;    }
    }
}
// <================reverse number==================>
# include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,1,3,3,6};
    for(int i=0;i<6/2;++i)
    {
       int temp;
       temp=arr[i];
       arr[i]=arr[6-i-1];
       arr[6-i-1]=temp;
    }
     for(int i=0;i<6;++i)
     {
         cout<<arr[i];
  
    }
}
// <==================palindrown=====================>
# include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,1,2,1};
    for(int i=0;i<5/2;++i)
 {
     if(arr[i]!=arr[5-i-1])
     {
         cout<<"not pallin";
         return 0;
     }
 }
 cout<<"palindrown";
      
}
}
 
 
 
 
 
 
    
    
