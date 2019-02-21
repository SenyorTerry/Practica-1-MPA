#include <iostream>

using namespace std;

int Contar(int [], int, int);

int main()
{
    int x = 0;
    int tam = 0;
    cout << "----------------------------------------\n";
    cout << "Valor a buscar: ";
    cin >> x;
    cout << "----------------------------------------\n";
    cout << "Tamano de los vectores: ";
    cin >> tam;
    cout << "----------------------------------------\n";
    cout << "Tam: " << tam << endl;

    int vpeor[tam];
    int vmejor[tam];
    int vcualquiera[tam];

    for(int i = 1; i <= tam; i++){
        vpeor[i] = x;
        vmejor[i] = x*(i+1);
        if(i <= (tam/2)){
            vcualquiera[i] = x;
        }else{
            vcualquiera[i] = x*(i+1);
        }
    }

    cout << "VPEOR\n";
    cout << "----------------------------------------\n";
    for(int i = 1; i <= tam; i++){
        cout << vpeor[i] << " ";
    }
    cout << "\n----------------------------------------\n";
    cout << "NVECES: " << Contar(vpeor,x,tam);

    cout << "\nVMEJOR\n";
    cout << "----------------------------------------\n";
    for(int i = 1; i <= tam; i++){
        cout << vmejor[i] << " ";
    }
    cout << "\n----------------------------------------\n";
    cout << "NVECES: " << Contar(vmejor,x,tam);

    cout << "\nVCUALQUIERA\n";
    cout << "----------------------------------------\n";
    for(int i = 1; i <= tam; i++){
        cout << vcualquiera[i] << " ";
    }
    cout << "\n----------------------------------------\n";
    cout << "NVECES: " << Contar(vcualquiera,x,tam);

    return 0;
}

int Contar(int v[], int x, int tam){
    int nveces = 0;
    for (int i = 0; i <= tam; i++){
        if(v[i] == x){
            nveces ++;
        }
    }
    return nveces;
}


