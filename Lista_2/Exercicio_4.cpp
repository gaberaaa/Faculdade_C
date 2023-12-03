#include <iostream>
using namespace std;
#include <stdlib.h>

int main(){
    
    float vet[10],vetinvert[10];
    int i=0;
    
    for(i=0;i<10;i++){
        cout<<"Digite um numero: ";
        cin>>vet[i];

        system("cls");


        
    }

    for(i=0;i<10;i++){
        cout<<"Vetor antes de ser invertido: ";
        cout<<vet[i]<<"\n";
    }
    
    for(i=0;i<10;i++){
        vetinvert[i] = vet[10-i-1];
        cout<<"O vetor invertido : " <<vetinvert[i]<<"\n";
    }



    return 0;
}