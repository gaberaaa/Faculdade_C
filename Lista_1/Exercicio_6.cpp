#include <iostream>
using namespace std;

int main() {
    int resultado=1, A, auxiliar;
 
    cout << "Digite o valor de A!: ";
    cin >> A;

    for(auxiliar=1;auxiliar<=A;auxiliar++){
        resultado *= auxiliar;

    }

    cout<<"Resultado de  "<<A <<"! = " <<resultado;
   
}