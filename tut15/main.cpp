// ------------->>>>>>>>>>>>>>>>> Function and Function Prototypes <<<<<<<<<<<--------------------


#include <bits/stdc++.h>
using namespace std;
// -------------------------- Function 

// int sum(int a,int b){
//     int c = a+b;
//     return c;
// }


// int main(){
//     int num1,num2;
//     cout<<"Enter first number"<<endl;
//     cin>>num1;
//     cout<<"Enter second number"<<endl;
//     cin>>num2;
//     cout<<"The sum is "<<sum(num1,num2);
//     return 0;
// }


// --------------------------- Function Prototype
/*
1.  Generally we cannot use the function below the main function
2.  by using function prototype we can use the function below the main function
*/


// --- without using function prototype

// int main(){
//     int num1,num2;
//     cout<<"Enter first number"<<endl;
//     cin>>num1;
//     cout<<"Enter second number"<<endl;
//     cin>>num2;
//     cout<<"The sum is "<<sum(num1,num2);
//     return 0;
// }


// int sum(int a,int b){
//     int c = a+b;
//     return c;
// }

// -------using function prototype

// int sum(int a,int b);   

// int main(){
//     int num1,num2;
//     cout<<"Enter first number"<<endl;
//     cin>>num1;
//     cout<<"Enter second number"<<endl;
//     cin>>num2;
//     cout<<"The sum is "<<sum(num1,num2);
//     return 0;
// }


// int sum(int a,int b){
//     int c = a+b;
//     return c;
// }


// ------------- way to create function prototype

// int sum(int a,int b);   //--> Acceptable
// int sum(int a, b);   //-->not Acceptable
// int sum(int , int);   //--> Acceptable

// int main(){
//     int num1,num2;
//     cout<<"Enter first number"<<endl;
//     cin>>num1;
//     cout<<"Enter second number"<<endl;
//     cin>>num2;
//     cout<<"The sum is "<<sum(num1,num2);
//     return 0;
// }


// int sum(int a,int b){
//     int c = a+b;
//     return c;
// }


// --------------- void function without function prototype
// void sum(){
//     cout<<"good nigth ravi"<<endl;
// }

// int main(){
//     sum();
//     return 0;
// }

// --------------- void function with function prototype

// void sum(void); //--> Acceptable
// void sum();    //--> Acceptable

// int main(){
//     sum();
//     return 0;
// }

// void sum(){
//     cout<<"good nigth ravi"<<endl;
// }



// ------------------------------ Actual and formal Parameters
// int sum(int a,int b){
//     //formal Parameters --> a and b will be taking values from actual parameters num1 and num2
//     int c = a+b;
//     return c;
// }


// int main(){
//     // Actual Parameters --> num1 and num2 are actual parameters
//     int num1,num2;
//     cout<<"Enter first number"<<endl;
//     cin>>num1;
//     cout<<"Enter second number"<<endl;
//     cin>>num2;
//     cout<<"The sum is "<<sum(num1,num2);
//     return 0;
// }