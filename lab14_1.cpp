#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double num[],int N,double B[]){
    double sum,x,y,z,min=num[0],max=num[0];
    for(int i = 0;i<N;i++){
        sum = B[0] += num[i];
    }
    B[0] /=N;

    for(int i =0;i<N;i++){
        x += pow(num[i]-(sum/N),2);     
    }
    B[1] = sqrt(x/N);

    for(int i =0;i<N;i++){
       y = B[2] += log10(num[i]); 
    }
    B[2] = pow(10,y/N);

    for(int i =0;i<N;i++){
       z = B[3] += 1/num[i]; 
    } 
    B[3] = N/z;
    
    for(int i =1;i<N;i++){
       if(num[i]>max) max=num[i];
       if(num[i]<min) min=num[i]; 
    }
    B[4] = max;
    B[5] = min;
}