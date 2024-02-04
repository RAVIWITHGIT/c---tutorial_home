// ---------->>>>>>>>>>>>>>>>>>>>>>> Recursions <<<<<<<<<<<<<<<<<<---------------------------------

/*
1.  Recursions mean - call function in outer function
2. here we undestand Recursion in find factorial and fabonacchi series
*/

#include <bits/stdc++.h>
using namespace std;



int factorial(int n){
    if(n<2){
        return 1;
    }
    return n*factorial(n-1);

}

int fabonacchi(int n){
    if(n>0&&n<2){
        return 1;
    }else if(n<1){
        return 0;
    }
    return fabonacchi(n-1)+fabonacchi(n-2);
}

int main(){
    string chose;
    int num;
    cout<<"please chose factorial/fabonacchi:";
    cin>>chose;
    if(chose=="factorial"){
        cout<<"enter your number";
        cin>>num;
        cout<<"the factorial of "<<num<<" is "<<factorial(num)<<endl;
    }else if(chose=="fabonacchi"){
        cout<<"enter your number";
        cin>>num;
        cout<<"the fabonacchi  of "<<num<<" is "<<fabonacchi(num)<<endl;
    }else{
        cout<<"you can only two chose factorial/fabonacchi"<<endl;
    }

}

