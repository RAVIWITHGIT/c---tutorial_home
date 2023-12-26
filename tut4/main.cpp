// ---------------------- Varaible scope and Data Type ***********-------------------------------

// -------------************** Data Type
/*
-. Data type in c++ are categorised in Three groups
1. Bulit-in ---> int,float,char,double,boolean

2. User-definde --> Struct,Union,Enum , discuss in future

3. Derived --->Arrray, Function , Pointer , discuss in future


*/

// --- int data type

// #include <iostream>

// using namespace std;

// int main(){
//     int a = 14;
//     int b = 30;
//     cout<< "sub of "<<a<<" and "<<b<<" is "<<a+b;
//     return 0;
// }


// note --> if two data type is same so we write two varible in one line


// #include <iostream>

// using namespace std;

// int main(){
//     int a=14 , b=15;
//     cout<<"sum of a and b is "<<a+b;
// }

// #include <iostream>

// using namespace std;

// int main(){
//     int x,y,z;
//     x = y= z= 50;
//     cout<<x+y+z;
// }

// -------->> float data type , float data type pring only few number after decimal

// #include <iostream>

// using namespace std;

// int main(){
//     float x = 45.5;
//     float y = 78.245676678999;
//     cout<< x<< " "<<y;
// }


// --------->>double data type
// #include <iostream>

// using namespace std;

// int main(){
//     double x = 45.5;
//     double y = 78.245676678999;
//     cout<< x<< " "<<y;
// }

// --------->> char data type
// #include <iostream>

// using namespace std;

// int main(){
//     char a = 'a';
//     char b = 's';
//     cout<< a<< " "<<b;
// }

// --------->> boolean data type
// #include <iostream>

// using namespace std;

// int main(){
//     bool myBool = true;
//     bool myBool2 = false;
//     cout<< "true is "<<myBool<<endl;
//     cout<< "false is "<<myBool2;
// }


// ----------------- global and local varaible

// #include <iostream>

// using namespace std;
// int glob = 6;          // global varaible

// void sum(){
//     int a;
//     cout<<glob<<endl;

// }

// int main(){
//     int glob = 56;    //local varaible
//     glob = 100;
//     sum();
//     cout<<glob;
//     return 0;

// }