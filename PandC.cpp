#include<iostream>
using namespace std;

int factorial(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int permutation(int n,int r){
     int npr=factorial(n)/factorial(n-r);
     return npr;
}
int combination(int n,int r){
    int ncr=factorial(n)/(factorial(n-r)*factorial(n));
    return ncr;
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int r;
    cout<<"enter r";
    cin>>r;
    int npr=permutation(n,r);
    int ncr=combination(n,r);
    cout<<ncr;
    cout<<npr;
    return 0;

    }