// ----------->>>>>>>>>>>>>>>>>> function overloading <<<<<<<<<<<<<---------------------------------


#include <bits/stdc++.h>
using namespace std;

// function overloading mean - ek hee function ke kaee roop hote hain
// function overloading mein function argument ke acording khud ko kol kar leta hai

int myfun1(int a, int b){
    cout<<a+b<<endl;
}

int myfun1(int a){
    cout<<"only one value present "<<a<<endl;
}

string myfun1(string first,string second){
    cout<<first<<" "<<second<<endl;
}

int main(){
    myfun1(1,2);
    myfun1(1);
    myfun1("ravi","lakshakar");
    return 0;
}