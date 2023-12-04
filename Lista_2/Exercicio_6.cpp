#include <iostream>
using namespace std;
int main(){
    float numero[10][10],maior=0.0;
    int linha,coluna,l=0,c=0;

 
    for(linha=0;linha<10;linha++){
        cout<<"Digite numeros para completar a matriz 10x10.\n";
        for(coluna=0;coluna<10;coluna++){
            cout<<"Digite um numero: ";
            cin>>numero[linha][coluna];
            if(numero[linha][coluna]>maior){
                maior=numero[linha][coluna];
                l=linha+1;
                c=coluna+1;
            }
        }

    }
    cout<<"O maior numero da matriz e "<<maior <<" linha "<<l<<" coluna "<<c;
 
    return 0;   
}