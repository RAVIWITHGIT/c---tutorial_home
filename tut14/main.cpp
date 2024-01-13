// -----------************** Structures,Unions & Enums *******************---------------------------

// ******************* Structures
/*
1. Array store only one data type
2. Structures can contain many diffrent data type like--> int,string , float etc
3. Structrues also called structs
4. we can create struct two type
    first --->  struct varaibleName{
                    code
            };

    second ---> struct {
                    code
            }varaibleName;

*/

#include <bits/stdc++.h>
using namespace std;


// --. first type

// struct employee{
//     int eid;
//     char favChar;
//     float salary;
// };

// int main(){
//     employee ravi ;
//     ravi.eid = 1;
//     ravi.favChar='n';
//     ravi.salary = 100000;
//     cout<<"the value of eid "<<ravi.eid<<endl;
//     cout<<"the value of favchar "<<ravi.favChar<<endl;
//     cout<<"the value of salary "<<ravi.salary<<endl;
//     return 0;
// }

// note we can short strcut varaible name using typedef , typedef is simply a way of giving a new name to an existing data type.

// typedef struct employee{
//     int eid;
//     char favChar;
//     float salary;
// }ep;

// int main(){
//     ep ravi ;
//     ravi.eid = 1;
//     ravi.favChar='n';
//     ravi.salary = 100000;
//     cout<<"the value of eid "<<ravi.eid<<endl;
//     cout<<"the value of favchar "<<ravi.favChar<<endl;
//     cout<<"the value of salary "<<ravi.salary<<endl;
//     return 0;
// }



// ---> second type


// struct {
//     int eid;
//     char favChar;
//     float salary;
// }ravi;


// int main(){
//     // ravi ravi;
//     ravi.eid = 1;
//     ravi.favChar='n';
//     ravi.salary = 100000;
//     cout<<"the value of eid "<<ravi.eid<<endl;
//     cout<<"the value of favchar "<<ravi.favChar<<endl;
//     cout<<"the value of salary "<<ravi.salary<<endl;
//     return 0;
// }


// *********************** Union
/*
1. Union same as struct
2. major diffrence between strcut and union is , 
   struct store diffrent memory address for diffrent varaible
   union store same memory address for all diffrent varaible

3. we can only one varaibe in one time in Union , but we can use diffrent varaible in same time in struct   


*/

// union money{
//     int rice;
//     char car;
//     float pounds;
// };

// int main(){
//     union money m1;
//     m1.rice = 34;
//     cout<<m1.rice;
//     return 0;
// }

// -------------------

// union money{
//     int rice;
//     char car;
//     float pounds;
// };

// int main(){
//     union money m1;
//     m1.rice = 34;
//     m1.car = 'h';
//     cout<<m1.rice;
//     return 0;
// }

// -----------------

// union money{
//     int rice;
//     char car;
//     float pounds;
// };

// int main(){
//     union money m1;
//     m1.rice = 34;
//     cout<<m1.rice;
//     m1.car = 'h';
//     cout<<m1.car;
//     return 0;
// }


// ************************* enum
/*
1. enum store value
2. every value of enum together integer of every value
3. we can change integer number of enum value
4. more discuss in future
*/


// int main(){
//     enum Meal{breakfast,lunch,dinner};
//     cout<<breakfast<<endl;
//     cout<<lunch<<endl;
//     cout<<dinner<<endl;
// }

// ---- change value

// int main(){
//     enum Meal{breakfast=20,lunch=56,dinner=78};
//     cout<<breakfast<<endl;
//     cout<<lunch<<endl;
//     cout<<dinner<<endl;
// }