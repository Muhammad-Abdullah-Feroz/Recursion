#include<iostream>
#include<conio.h>

using namespace std;

int Factorial(int n){
    if(n==1 or n==0){
        return 1;
    }else{
        return (n*Factorial(n-1));
    }
}

int main(){
    int n = 5;
    cout<<"Factorial of "<<n<<" is "<<Factorial(n);

    return 0;
}