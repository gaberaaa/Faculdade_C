#include <iostream>
using namespace std;

int main(){
    
    float maria=1.0,ana=1.4;
    int ano=0;
    
    while(ana>=maria){
        ana +=0.2;
        maria +=0.3;
        ano++;
        
        cout<<"| Maria: "<<maria <<" | Ana: "<<ana << " | Ano: "<<ano<<"\n";
        
    }
    
    cout<<"\nSera necessario "<<ano <<" anos para ana ser maior que maria.";
    
    return 0;
}


