// ------------------------- Array and Pointer Arithmetic -------------------------------------------

// ------------------- Array
#include <bits/stdc++.h>
using namespace std;

// int main(){
//     string arr[4] = {"ravi","shiv","ranu","pooja"};
//     cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[3]<<endl;
//     return 0;
// }

// int main(){
//     string arr[4] = {};
//     arr[0] = "ravi";
//     arr[1] = "ranu";
//     arr[2] = "shiv";
//     arr[3] = "pooja";
//     cout<<arr[0]<<endl;
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[3]<<endl;
//     return 0;
// }

// -- update array value
// int main(){
//     string arr[4] = {"ravi","shiv","ranu","pooja"};
//     cout<<arr[0]<<endl;
//     arr[1] = "babu";
//     cout<<arr[1]<<endl;
//     cout<<arr[2]<<endl;
//     cout<<arr[3]<<endl;
//     return 0;
// }


// --- iterate using for loop , while loop and do while loop
// int main(){
//     string arr[4] = {"ravi","shiv","ranu","pooja"};
//     for (int i = 0; i < 4; i++)
//     {
//         cout<<arr[i]<<endl;
//     }
    
//     return 0;
// }


// int main(){
//     int arr[4] = {1,2,3,4};
//     int i = 0;
//     while(i<4){
//         cout<<arr[i]<<endl;
//         i++;
//     }
// }

// int main(){
//     int arr[4] = {1,2,3,4};
//     int i = 0;
//     do{
//         cout<<arr[i]<<endl;
//         i++;
//     }while(i<4);
// }


// ------------------ Pointer in Array ------>>>>>>>>>>>>>

// -----------we can store address any data type in below code
// int main(){
//     int a = 10;
//     int* p = &a;
//     cout<<p<<endl;
//     cout<<*p<<endl;
// }

// in Array case we not require & symbol to store array address ,  p varaible not store array address rather store first element address of array
// so we can access all value using increment of pointer

// int main(){
//     string arr[4] = {"ravi","shiv","ranu","pooja"};
//     string* p = arr;
//     cout<<p<<endl;
//     cout<<*p<<endl;
//     cout<<*(p+1)<<endl;
//     cout<<*(p+2)<<endl;
//     cout<<*(p+3)<<endl;

// }


// int main(){
//     string arr[4] = {"ravi","shiv","ranu","pooja"};
//     string* p = arr;
//     cout<<*(p++)<<endl;
//     cout<<*(++p)<<endl;

// }