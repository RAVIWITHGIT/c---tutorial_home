// ----------------->>>>>>>>>>>>>>>>> constants , Manipulators and Operator Precedence<<<<<<<<------

#include <iostream>
#include <iomanip>  // Libary for Manipulators

using namespace std;


// ---------->>>>>>>>>>>>>>>> Constants

// if we want to create a variable that does not change then we use constants

// int main(){
//     const int a = 10;
//     a = 20;
//     cout<<a;
// }


// ---------->>>>>>>>>>>>>>>>> Manipulator

/*
1. many type of Manipulator present in c++
  exa -- \n , endl , setw, fixed , sceintific ,hex, oct, dec etc.

2. we already discuss about \n and endl
3. here we discuss about setw Manipulator

4. setw Manipulator set a space with including output

*/

// This “World” will be displayed in 10 spaces. Though the number of the alphabet is only 5, it will be shown in 10 places. 

// int main(){
//     cout<<setw(10)<<"world";
// }


// -------
// int main(){
//     int a=3, b=45, c=1233;
//     cout<<"the Value of a without setw is: "<<a<<endl;
//     cout<<"the Value of b without setw is: "<<b<<endl;
//     cout<<"the Value of c without setw is: "<<c<<endl<<endl;

//     cout<<"the Value of a with setw is: "<<setw(4)<<a<<endl;
//     cout<<"the Value of b with setw is: "<<setw(4)<<b<<endl;
//     cout<<"the Value of c with setw is: "<<setw(4)<<c<<endl;
// }


// --------------->>>>>>>>>>>>>>>> Operator Precedence

/* 
1. if we give 5*4+2 then which Operator first resolve and which Operator resovle last , the task of ensuring  by the Operator Presidency

2.  you can see in google which Operator Presidency high and which low
3.  according 5*4+2 , multiply Operator first reslove then addtion Operator resolve , so we can write this (5*4)+2 ,
4.  mean first 5*4 = 20+4 = 24 

*/

// int main(){
//     int a = 3, b=4;
//     int c = (a*5)+b;
//     cout<<c;
//     int d = ((((a*5)+b)-45)+87);
//     cout<<d;
// }