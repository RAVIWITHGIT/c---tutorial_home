// ---------->>>>>>>>>>>> Inline function , Default Argument & Constant Arguments<<<<<<<<<<<---------

/* ------------->>>>>>>> Inline Function 
1. Inline function see like normal function 
2. if funtion code is short and multiple time use thses function then we use Inline function
2. in normal function when call function then compiler go to where code delcleartion and read and excute
3. in case of Inline function when call inline function , compiler not go delceartion function but replace call function to decleartion function , mean we also say we write function in main function and in main function , function is automatic call
4. lnline function are useful when there is very little code
5. if there are many lines of code inside the function then inline function is not useful at that time
6. more understand in future
*/

#include <bits/stdc++.h>
using namespace std;

// inline  int total(int a, int b){
//     return a+b;
// }


// int main(){
//     int a=6,b=8;
//     cout<<"the total of "<<a<<" and "<<b<<" is "<<total(a,b)<<endl;
//     cout<<"the total of "<<a<<" and "<<b<<" is "<<total(a,b)<<endl;
//     cout<<"the total of "<<a<<" and "<<b<<" is "<<total(a,b)<<endl;
//     cout<<"the total of "<<a<<" and "<<b<<" is "<<total(a,b)<<endl;
//     cout<<"the total of "<<a<<" and "<<b<<" is "<<total(a,b)<<endl;
//     cout<<"the total of "<<a<<" and "<<b<<" is "<<total(a,b)<<endl;
//     cout<<"the total of "<<a<<" and "<<b<<" is "<<total(a,b)<<endl;
//     cout<<"the total of "<<a<<" and "<<b<<" is "<<total(a,b)<<endl;
//     return 0;
// }


/* ------------------>>>>>>>>>>>> Static varaible
1.  the static keyword tells the compiler that this variable must remain throughout the program. This means that the variable is initialized only once and is not deallocated until the termination of the complete program.
*/

// int s(int a,int b){
//     static int c = 0;
//     c = c+1;
//     return a+b*c;
// }

// int main(){
//     int a = 4, b = 3;
//     cout<<s(a,b)<<endl;
//     cout<<s(a,b)<<endl;
//     cout<<s(a,b)<<endl;
//     cout<<s(a,b)<<endl;
//     cout<<s(a,b)<<endl;
//     cout<<s(a,b)<<endl;
// }


/* ------------>>>>>>>>>>> default argument

*/

// float moneyreceived(int currentMoney, float factor = 1.04){
//     return currentMoney*factor;
// }

// int main(){
//     int money = 10000;
//     cout<<moneyreceived(money)<<endl;     //use default argument
//     cout<<moneyreceived(money,1.14)<<endl;   //not use default argument
// }


//--------------->>>>>>>>>>>> constant argument 

int a(const int &b){
    b = 20;
    return b;

}

int main(){
    int first = 10;
    cout<<a(first)<<endl;
    cout<<first<<endl;
}