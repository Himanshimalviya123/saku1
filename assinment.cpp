// //print table with input by user
// #include<iostream>
// using namespace std;

// int table(){

//         int table;
//         cout<<"Enter the table :";
//         cin>>table;
//         for(int i=1;i<=10;i++){
//             cout<<i*table<<endl;
//         }

//         return 0;
//     }
// int main(){

//     table();
   
// }
// *******************************question:-2  calculator ***************************************
// #include<iostream>
// using namespace std;

// int calculator(){

//     int a,b,c,d,e,f;
//     cout<<"Enter the first number:";
//     cin>>a;
//     cout<<"Enter the second number:";
//     cin>>b;
    
//     cout<<"Addition is:"<<a+b<<endl;
//     cout<<"Substraction is:"<<a-b<<endl;
//     cout<<"Multiply is:"<<a*b<<endl;
//     cout<<"Division is:"<<a/b<<endl;
    
//     return 0;
// }
// int main(){

//     calculator();
// }
// ******************************question:-3 factorial*************************
//factorial non return type
// #include<iostream>
// using namespace std;

// void factorial(int num){

//     int ans=1;
//     for(int i=1;i<=num;i++){
//         ans=ans*i;
//     }
//     cout<<ans;
// }
// int main(){
//     int a;
//     cout<<"Enter Number for Factorial:";
//     cin>>a;
//     factorial(a);
// }
// ****************************question:-4 prime number*******************************
//check the number it is Prime or Not Prime
// #include<iostream>
// using namespace std;

// int prime(){
//     int num,count=0;
//     cout<<"Enter a number:";
//     cin>>num;
//     if(num<=1){
//         cout<<"not a prime";
//         return 0;
//     }
//     for(int i=2;i*i<=num;i++){

//         if(num%i==0){
//             cout<<"Not a prime";
          
//         }
//        else{
//         cout<<"Prime";
//        }
//     }
//     return 0;
   
// }

// int main(){

//     prime();
// }