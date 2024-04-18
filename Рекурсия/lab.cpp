#include <iostream>
#include <cmath> 
using namespace std;
int x;
int n;
int fact(int n){
    if (n == 0 || n == 1) {
        return 1;
    } else { 
        return n*fact(n-1);
    } 
};
double f_n(int x, int n){
    return pow(-1, n)*((2*pow(n,2)+1)/fact(2*n))*pow(x,2*n);
};
double s(int x, int n){
    if(n==0){
        return x;
    }   
    else{
        return s(x,n-1)+f_n(x,n);
    };
    };

int main(){
    cout<<"X = ";
    cin>>x;
    cout<<"\nN = ";
    cin>>n;
    cout<<"S = "<<s(x,n);
    return(0);
}