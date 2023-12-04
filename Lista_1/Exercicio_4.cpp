#include <iostream>
using namespace std;
int main(){
    
    float altura=0.0,media=0.0,a;
    int cont=0,concmul=0,hom=0,hom40=0,mul30=0,idadeM=0,matricula,idade;
    char concursado,genero;
    
    do{
        cout<<"\nDigite sua matricula: ";
        cin>>matricula;
        cout<<"\nDigite sua idade: ";
        cin>>idade;
        cout<<"\nDigite sua altura: ";
        cin>>altura;
        cout<<"\nDigite seu genero: ";
        cin>>genero;
        cout<<"\nVoce e consursado S/N: ";
        cin>>concursado;
 
        switch(genero){
            
            case 'f':
            case 'F':
 
                if(idade>=30 and concursado =='n' or concursado=='N'){
                mul30++;
                }else if(concursado=='s' or concursado=='S'){
                    concmul++;
                }
            
            break;
            
            case 'm':
            case 'M':
                
                
                
                if((concursado=='s' or concursado=='S')and idade>idadeM){
                    
                    idadeM=idade;
                  
                
                }
                
                hom++;
                
            
            break;
        }   

            
        if(idade<40){
            hom40++;
            a=altura+a;
            media=a/hom40;
        }

        cont++;

        cout<<"\nO numero de funcinarias concursadas e "<<concmul<<"\n";
        cout<<"O numero de funcionarios somente homem e "<<hom<<"\n";
        cout<<"A maior idade dos homens concursados e  "<<idadeM<<"\n";
        cout<<"A quantidade de mulheres com mais de 30 anos sem concurso e "<<mul30<<"\n";
        cout<<"A media da altura dos homens com menos de 40 anos e "<<media<<"\n" ;
 
    }while(cont<=100);
 

    return 0;
}