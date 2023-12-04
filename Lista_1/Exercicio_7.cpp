#include <iostream>
using namespace std;

int main(){
    
    int op,i,num;
    float som=0,mul=1;
    
    

        
        do{
            cout<<"1-Multiplicar";
            cout<<"\n2-Somar";
            cout<<"\n3-Sair";
            cout<<"\nOpcao selecionada: ";
            cin>>op;
        
            if(op !=1 && op !=2 && op !=3){
                cout<<"\nSelecione opcoes validas\n\n";
            }
        }while(op !=1 && op !=2 && op !=3);
        
        if(op==3){
            return 0;
        }
        
        
        cout<<"Quantos numeros voce deseja utilizar nas operacoes de SOMA e MULTIPLICACAO: ";
        cin>>num;
        cout<<"\n";
        
        
    
        float vetNumeros[num];
        
        for (i = 0; i < num; i++) {
            cout << "Digite o numero: ";
            cin >> vetNumeros[i];
        }
        
        
        switch(op){
            
            case 1:
                for(i=0;i<num; i++) {
                    mul *= vetNumeros[i];
                }
            
                cout << "O resultado da multiplicacao de todos os numeros digitados foi: " << mul;
            
                break;
            
            case 2:

                for(i=0;i<num; i++){
                    som += vetNumeros[i];
                    
                }
                
                cout<<"\nO resultado da soma de todos os numeros digitados foi: "<<som;
               
                break;
            

        }
        
 
    
    return 0;   
}