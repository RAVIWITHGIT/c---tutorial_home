// ------------>>>>>>>>>>>>>>>>>>>>> call by value and call by reference <<<<<<<<<<------------------

#include <bits/stdc++.h>
using namespace std;


/*  ------------------->>>> call by value
1. pass value in function thne store value in varabiel 
2. but pass value varaible and store value varaible diffrent  
3. if we change varaibe in swap function then not change in main function , both varaible are diffrent

*/
// void swap(int a, int b){
//     int temp = a;
//     a = b;
//     b = temp;
// }


// int main(){
//     int x=4,y=5;
//     cout<<"before call swap function value of x and y is "<<x<<" "<<y<<endl;
//     swap(x,y);
//     cout<<"after call swap function value of x and y is "<<x<<" "<<y<<endl;
//     return 0;
// }


/* ----------------->>>>>>>>> call by referene using pointers
1.  we can  say pass memory address not value

*/
// void swaPointer(int* a, int* b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }


// int main(){
//     int x=4,y=5;
//     cout<<"before call swaPointer function value of x and y is "<<x<<" "<<y<<endl;
//     swaPointer(&x , &y);
//     cout<<"after call swaPointer function value of x and y is "<<x<<" "<<y<<endl;
//     return 0;
// }


/* ----------->>>>>>>>>>>>>>> call by reference uisng c++ referecne varaible

*/
// void swaReferenceVar(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
// }


// int main(){
//     int x=4,y=5;
//     cout<<"before call swareferenceVar function value of x and y is "<<x<<" "<<y<<endl;
//     swaReferenceVar(x , y);
//     cout<<"after call swareferenceVar function value of x and y is "<<x<<" "<<y<<endl;
//     return 0;
// }


/*----------------->>>>>>>>>>>>>>>>>>>>> return by Reference
1.  return referenc , so we pass value in referenc 
*/

// int & swaReferenceVar(int &a, int &b){
//     int temp = a;
//     a = b;
//     b = temp;
//     return a;
// }


// int main(){
//     int x=4,y=5;
//     cout<<"before call swareferenceVar function value of x and y is "<<x<<" "<<y<<endl;
//     swaReferenceVar(x , y) = 766;
//     cout<<"after call swareferenceVar function value of x and y is "<<x<<" "<<y<<endl;
//     return 0;
// }