// ----------------------------------- Pointer -----------------------------------------------------

/*
1. & symbol help to make reference varaible or we use & symbol to get memory address
1. Pointer is data type like int,string
2. Pointer holds the address of other data types
3. we can make Pointer  using *
4. we write *after any Data type

*/



#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int a = 10;
//     cout<<&a;   //& symbol to get memory address of varaible
//     return 0;
// }


// ------------ if we want store memory address in other varaible then we use Pointer , without make Pointer we can not direct store memory address in varaible

// int main(){
//     int a = 10;
//     int b = &a;
//     cout<<b;
// }


// ------- make Pointer
// int main(){
//     int a = 10;
//     int* b = &a;
//     cout<<b<<endl;
//     cout<<&a<<endl;
// }


// -------- access value using memory address
// int main(){
//     int a = 10;
//     int* b = &a;
//     cout<<"memory address of a is "<<b<<endl;
//     cout<<"value of memory address is "<<*b;
// }


// ------------- we can also store memory address of pointer data type
// int main(){
//     int a = 10;
//     int* b = &a;
//     int** c = &b;
//     cout<<&b<<endl;
//     cout<<c<<endl;
// }


// ------------ here we see how access  address of pointer data type and we can also access value of first varaible value using Pointer to Pointer
// int main(){
//     int a = 3;
//     int* b = &a;
//     int** c = &b;
//     cout<<*c<<endl;
//     cout<<**c;
// }