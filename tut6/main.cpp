
//note --> we include other file in c++ file , but which file we include ,present in current directory
// note --> here we include this.h file which preset in curret directory , this will produce an error if this.h is no present in the current directory

// #include <iostream>

// #include "this.h"

// using namespace std;

// int main(){
//     cout<<"hello world";
    
// }


// ----------------******************* Operators ****************------------------------------------

//------- Arithmetic Operators

// #include <iostream>

// using namespace std;

// int main(){
//     int a=4,b =3;
//     cout<<"the value of a+b is "<<a+b<<endl;
//     cout<<"the value of a-b is "<<a-b<<endl;
//     cout<<"the value of a*b is "<<a*b<<endl;
//     cout<<"the value of a/b is "<<a/b<<endl;
//     cout<<"the value of a%b is "<<a%b<<endl;
//     cout<<"the value of a++ is "<<a++<<endl;
//     cout<<"the value of a-- is "<<a--<<endl;
//     cout<<"the value of ++a is "<<++a<<endl;
//     cout<<"the value of --a is "<<--a<<endl;
// }

// ------ Assignment Operators --> used to assign values to variables
// #include <iostream>

// using namespace std;

// int main(){
//     int a=4,b =3;
//     cout<<"here '=' is Assignment Operators"<<endl;
// }

// ------ comparison Operators
// #include <iostream>

// using namespace std;

// int main(){
//     int a=4,b =3;
//     cout<<"the value of a==b is "<<(a==b)<<endl;
//     cout<<"the value of a!=b is "<<(a!=b)<<endl;
//     cout<<"the value of a>=b is "<<(a>=b)<<endl;
//     cout<<"the value of a<=b is "<<(a<=b)<<endl;
//     cout<<"the value of a>b is "<<(a>b)<<endl;
//     cout<<"the value of a<b is "<<(a<b)<<endl;

// }


// ------- Logical Operators
#include <iostream>

using namespace std;

int main(){
    int a=4,b =3;
    cout<<"following are the logical oPerators in c++"<<endl;
    cout<<"the value of this logical and Operator((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    cout<<"the value of this logical and Operator((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
    cout<<"the value of this logical and Operator(!(a==b)) is "<<(!(a==b))<<endl;


}