#include <iostream>
using namespace std;

int A[6]={1,0,5,-2,-5,7},soma,i=0;

int main(){
   

    soma=A[0]+A[1]+A[5];
    cout<<"\nA soma do vetor A[0],A[1] e A[5] e : "<<soma<<"\n\n";
    A[4]=100;

    for(i=0;i<6;i++){

        cout<<"Valores do vetor A: "<<A[i]<<"\n";
    }



    return 0;
}