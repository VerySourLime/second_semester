#include <iostream>
#include <cmath> 
using namespace std;
int x;
int n;
double s= 0; 
double fact = 1;
int main(){
    cout<<"X = ";
    cin>>x;
    cout<<"N = ";
    cin>>n;
    n=n-1;
for(int i = 0; i<=n;i++){
    for(int ifact = i*2; ifact>0;ifact--){
            fact*=ifact;
    };
    s=s+pow(-1,i)*((2*pow(i,2)+1)/fact)*pow(x,2*i);
    fact=1;
};
    cout<<"S = "<<s<<endl;
    return(0);
}