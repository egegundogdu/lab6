#include <iostream>
using namespace std;

double sumfunc(int n){

    if(n==1){
        return 1.0;
    }

    return (1.0/n) + sumfunc(n-1);
}

int main(){
    int n;

    cout<<"enter a number";
    cin>>n;

    if(n<=0){
        cout<<"please enter a positive one"
    }
    else{
        double result sumfunc(n);
    }
    
    return 0;
}
