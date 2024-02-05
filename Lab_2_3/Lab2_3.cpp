#include <iostream>
#include <windows.h>
using namespace std;
const int n = 20;
int m[n];
int k=2;
int temp;
int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);  
    SetConsoleOutputCP(1251);
    for(int t = 0; t<n;t++){
        m[t]=rand()%200-100;
        cout<<m[t]<<" ";
    };
    cout<<endl;
    for(int t=0;t<k;t++){
        temp=m[0];
        for(int t1=0;t1<n-1;t1++){
            m[t1]=m[t1+1];
        };
        m[n-1]=temp;
    };
    for(int t=0;t<n;t++){
        cout<<m[t]<<" ";
    };
    return(0);
}
