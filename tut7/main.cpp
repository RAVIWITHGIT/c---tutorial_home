// ------******** Reference variable , global and local varaible, typecasting in javascript*****-----
#include <iostream>
#include <typeinfo>  // libarya for type check of varaible


using namespace std;

// ----------------->>>>>>>>>>>>>>>>>> global and local variable

// ----- if we same varaible present in local and global then local varaible always print

// int c = 40;

// int main(){
//     int a=20 , b= 80;
//     int c = 100;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     cout<<c<<endl;
// }

// ----------->>>>>>> if we same varaible present in local and global then we want print global varaible in function then we use ==> Scope resolution operator ::

// int c = 40;

// int main(){
//     int a=20 , b= 80;
//     int c = 100;
//     cout<<a<<endl;
//     cout<<b<<endl;
//     cout<<"this is local c "<<c<<endl;
//     cout<<"this is global c "<<::c;
// }


// ------------------->>>>>>>>>>>>> Discuss about float and logn double <<<<<<<<<----------------

/* 
1. float is decimal number , but after decimal we limit to write number
2. double is also decimal number , but after decimal we write range of number 
3. *** note -> when we make float number, c++ also take as double number which is by diffult for c++ language 
4 . you can check mouse courser on float number
*/


// int main(){
//     float a = 12.4;
//     long double d = 45.6;
//     cout << typeid(a).name() << endl;
//     cout << typeid(d).name() << endl;

    
// }


// --- if we want float number but duble number which is by diffult then we wrtie "f" or "F" keyword after double number , you check using mouse cursor on number
// --- if we wrtie "l" or "L" after number then make long doubel number , you can check mouse cursor

// int main(){
//     float a = 12.4f;
//     long double d = 45.6l;
// }


// ----- check what size of double , float and long double

/*
1. size of double number is -->8
2. size of float number is -->4
3. size of long doube number is -->12
*/

// int main(){
//     cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl;
//     cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
//     cout<<"The size of 34.4 isF "<<sizeof(34.4F)<<endl;
//     cout<<"The size of 34.4 isl "<<sizeof(34.4l)<<endl;
//     cout<<"The size of 34.4 isL "<<sizeof(34.4L)<<endl;
// }


// -------------->>>>>>>>>>>>>>>>>>> Reference varialbe <<<<<<<<<<<<<---------------------------

/*
1. A reference variable is one that refers to the address of another variable. It represents the name of another variable, location, or value. Once you initialize the variable references, that variable will be referred to using the variable name or reference name.

2. The variable reference is nothing but an alternate name for the already existing variable.
3. The developers created the reference by using the symbol ampersand (&), to easily identify the variable as reference with the help of this symbol.


*/

// here y varable referecne to x varaible , so we call x varaible or call y varaible both are same , only diffrent name

// int main(){
//     float x = 455;
//     float & y = x;
//     cout<<x<<endl;
//     cout<<y<<endl;
// }


// -------------->>>>>>>>>>>>>>>>>> typecasting <<<<<<<<<<<<<<------------------------

// here we discuss only int to float and float to int typecasting

int main(){
    int a = 45;
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;

    cout<<"the expression is "<<a+b<<endl;
    cout<<"the expression is "<<a+int(b)<<endl;
    cout<<"the expression is "<<a+(int)b<<endl;
}
