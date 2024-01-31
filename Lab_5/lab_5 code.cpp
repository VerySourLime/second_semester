#include <iostream>
#include <windows.h>
using namespace std;
const int n = 100;
int m[n];
int s = 1;
int ind;
int main(){
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251);  
    SetConsoleOutputCP(1251);
    for(int i = 0; i<n;i++){
        m[i]=rand()%200-100;
        cout<<m[i]<<" ";
    };
    int max = m[0];
    for(int i=0; i<n;i++){
        if(m[i]>max){
            max=m[i];
            s=1;
            ind=i;
        }
        else{
            if(m[i]==max){
                s++;
            };
        };
    };
    cout<<"\nМаксимальное число "<<max;
    cout<<"\nЕго номер "<<ind+1;
    cout<<"\nОно встретилось "<<s<<" раз";
    return 0;
}
