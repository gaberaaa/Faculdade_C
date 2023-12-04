#include <iostream>
using namespace std;

int main(){

int num,multiplica,inicio,fim;

char opcao;   

    do{   

        do{


            cout<<"\nDigite o numero para ver a tabuada: ";

            cin>>num;

            cout<<"\nDigite o inicio da tabuada (0-10): ";

            cin>>inicio;

            cout<<"\nDigite o fim da tabuada (O fim deve ser MAIOR que o inicio): ";

            cin>>fim;

            cout<<"\n";

            if(fim<inicio){

            cout<<"\nERRO! Digite o FIM maior que o INICIO.\n";

            }


        }while(fim<inicio);


        for(inicio=inicio;inicio<=fim;inicio++){

            multiplica=num*inicio;

            if(multiplica%2==0){

            cout<< num << " x " << inicio <<" = "<<multiplica <<"\n";


            }

        }

        do{

            cout<<"\n\nDeseja continuar Sim(s) ou Nao(n) :\n\n";

            cin>>opcao;

        }while(opcao !='s'&& opcao !='S' && opcao !='n' && opcao !='N');

    }while(opcao=='s' or opcao=='S');   

 
    return 0;

}