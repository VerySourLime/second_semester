#include <iostream>
#include <windows.h>
using namespace std;
const int n = 20;
int m[n];
int p=3;
int q=7;
int i;
int j;
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
    i=p-1;
    j=q-1;
    while(i<j){
        temp=m[i];
        m[i]=m[j];
        m[j]=temp;
        i++;
        j--;
    };
    for(int t=0;t<n;t++){
        cout<<m[t]<<" ";
    };
    return(0);
}
