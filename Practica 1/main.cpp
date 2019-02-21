#include <iostream>

using namespace std;

//Inicializamos la funcion contar
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

    //Completamos el array con los datos
    for(int i = 1; i <= tam; i++){
        //Vector igual al elemento a buscar
        vpeor[i] = x;
        //Vector diferente al elemento a buscar
        vmejor[i] = x*(i+1);
        //Mitad vector igual y mitad diferente
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
    //Veces que se encuentra x en v
    int nveces = 0;
    for (int i = 0; i <= tam; i++){
        //Si el valor de la posicion i del vector es igual a x nveces + 1
        if(v[i] == x){
            nveces ++;
        }
    }
    return nveces;
}


