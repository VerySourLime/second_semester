#include <iostream>
using namespace std;
const int n=5;
const int m=5;
int matr[n][m];
int summ=0;
float b;
int s=0;
int main(){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matr[i][j]=rand()%100;
        };
    };
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matr[i][j]<<" ";
            if(matr[i][j]<10){
                cout<<" ";
            };
        };
    cout<<endl;
    };
    for(int i=0;i<n;i++){
        summ+=matr[i][0];
    };
    b=summ/n;
    cout<<"\n"<<b;
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            if(matr[i][j]>b){
                s++;
            };
        };
    };
    cout<<"\n"<<s;
    return 0;
};
