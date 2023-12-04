#include <iostream>
#include <stdlib.h>
using namespace std;
 
int main(){
int i=0,intervalo0_25=0,intervalo26_50=0,intervalo51_75=0,intervalo76_100=0;
float numero;
 
    do{
        cout<<"Digite um numero: ";
        cin>>numero;
        if(numero>=0 and numero<=25){
            intervalo0_25++;
        }else if(numero>=26 and numero<=50){
            intervalo26_50++;
        }else if(numero>=51 and numero<=75){
            intervalo51_75++;
        }else if(numero>=76 and numero<=100){
            intervalo76_100++;
        }else if(numero<0){
            exit(0);    
        }else{
            cout<<"\nO numero digitado não pertence a nem um intervalo.\n\n";
        }
        i++;
        cout<<intervalo0_25 <<" numeros estao entre o intervalo [0-25]."<<"\n";
        cout<<intervalo26_50 <<" numeros estao entre o intervalo [26-50]."<<"\n";
        cout<<intervalo51_75 <<" numeros estao entre o intervalo [51-75]."<<"\n";
        cout<<intervalo76_100 <<" numeros estao entre o intervalo [76-100]."<<"\n";


    }while(i>0);
 
    return 0;
}