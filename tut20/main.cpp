// -------------------->>>>>>>>>>>>>>>> Class >>>>>>>>>>>>>>>>>>>>-----------------------------------
// basic introduction of class with private and public access specifiers


#include <bits/stdc++.h>
using namespace std;

// class Employee{
//     private:
//     int a,b,c;
//     public:
//     int d,e;
//     void setData(int a,int b,int c);  //declaration
//     void getData(){
//         cout<<"The value of a is "<<a<<endl;
//         cout<<"The value of b is "<<b<<endl;
//         cout<<"The value of c is "<<c<<endl;
//         cout<<"The value of d is "<<d<<endl;
//         cout<<"The value of e is "<<e<<endl;
//     }
// };

// void Employee::setData(int a1, int b1, int c1){  //define
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main(){
//     Employee Ravi;
//     Ravi.setData(10,20,30);
//     Ravi.d = 40;
//     Ravi.e = 50;
//     Ravi.getData();

//     return 0;
// }

class Animal{
    private:
    string name ,color;
    public:
    void Setinformation(string dname , string dcolor);
    void Getinformation(){
        cout<<"The dog name is "<<name<<" which "<<color<<" color"<<endl;
    }
};

void Animal::Setinformation(string dname,string dcolor){
    name = dname;
    color = dcolor;
}

int main(){
    Animal dog;
    dog.Setinformation("puppy","brown");
    dog.Getinformation();

}