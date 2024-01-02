// ------------------- Control Structures , if else and Switch-case Statment ------------------------

// ----------->>>>>>>>>>>>>>>>> Control Structures

/* 
1. control Structures are just a way to specify flow of control in program
2. control Structures are 3 type
    I. Sequence Structures
    II. Selection Structures
    III. iteration/loop Structures

3. Sequence Structures -- we code run line by line without any condtion then called Sequence Structures

4. selection Structures -- when code run with condtion then called selection Structures

5. loop Structures -- if we make repeated code then called loop structures or iteration flow

*/

// -------------------

// -- here we discuss about Selection Structures , Sequence Structres see in previous code

#include <iostream>

using namespace std;

// int main(){
//     int age;
//     cout<<"Tell me your age :";
//     cin>>age;
//     if((age<18)  && (age>0)){
//         cout<<"you can not come to my party";
//     }
//     else if(age<1){
//         cout<<"you are not yet born";
//     }
//     else if(age==18){
//         cout<<"you are a able to come to party after one year";
//     }
//     else{
//         cout<<"you can come to my party";
//     }
// }


// ------------ Swtich case
int main(){
    int age;
    cout<<"enter your age :";
    cin>>age;
    switch (age){

    case 18:
        cout<<"age is 18";
        break;
    case 22:
        cout<<"age is 22";
        break;
    case 10:
        cout<<"age is 10";
        break;
    
    default:
        cout<<"no special case";
        break;
    }

}