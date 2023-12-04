//escreva um algoritmo em c/c++ que leia um numero interio A e uma matriz X inteira 5x5. Conte quantos valores iguais a 
//A estão na matriz.
 
 
#include <iostream>
using namespace std;
int main(){
    int numero[5][5],linha,coluna,a,i=0;
    cout<<"Digite o numero A: ";
    cin>>a;
    for(linha=0;linha<5;linha++){
        cout<<"Digite os numeros referentes a linha "<<linha+1<<".\n";
        for(coluna=0;coluna<5;coluna++){
            cout<<"Digite um numero: ";
            cin>>numero[linha][coluna];
            if(numero[linha][coluna] == a){
                i++;
            }    

        }

    }
    cout<<"O numero equivalente a A , se repetiu "<<i <<" vezes";
    return 0;   
}