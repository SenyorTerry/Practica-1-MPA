#include <iostream>

using namespace std;

//Inicializamos la funcion contar
int Contar(int [], int, int);

int main()
{
    int x = 0;
    int n = 0;
    cout << "----------------------------------------\n";
    cout << "Valor a buscar: ";
    cin >> x;
    cout << "----------------------------------------\n";
    cout << "Tamano de los vectores: ";
    cin >> n;
    cout << "----------------------------------------\n";

    int vpeor[n];
    int vmejor[n];
    int vcualquiera[n];

    //Completamos el array con los datos
    for(int i = 1; i <= n; i++){
        //Vector igual al elemento a buscar
        vpeor[i] = x;
        //Vector diferente al elemento a buscar
        vmejor[i] = x*(i+1);
        //Mitad vector igual y mitad diferente
        if(i <= (n/2)){
            vcualquiera[i] = x;
        }else{
            vcualquiera[i] = x*(i+1);
        }
    }

    cout << "VPEOR\n";
    cout << "----------------------------------------\n";
    for(int i = 1; i <= n; i++){
        cout << vpeor[i] << " ";
    }
    cout << "\n----------------------------------------\n";
    cout << "NVECES: " << Contar(vpeor,x,n);

    cout << "\nVMEJOR\n";
    cout << "----------------------------------------\n";
    for(int i = 1; i <= n; i++){
        cout << vmejor[i] << " ";
    }
    cout << "\n----------------------------------------\n";
    cout << "NVECES: " << Contar(vmejor,x,n);

    cout << "\nVCUALQUIERA\n";
    cout << "----------------------------------------\n";
    for(int i = 1; i <= n; i++){
        cout << vcualquiera[i] << " ";
    }
    cout << "\n----------------------------------------\n";
    cout << "NVECES: " << Contar(vcualquiera,x,n);

    return 0;
}

int Contar(int v[], int x, int n){
    //Veces que se encuentra x en v
    int nveces = 0;
    for (int i = 0; i <= n; i++){
        //Si el valor de la posicion i del vector es igual a x nveces + 1
        if(v[i] == x){
            nveces ++;
        }
    }
    return nveces;
}


