#include <iostream>

using namespace std;

//Inicializamos la funcion contar
int Contar(int *, int, int);

int main()
{
    int x = 0;
    int n = 0;
    cout << "Introduce el valor a buscar [x]: ";
    cin >> x;
    cout << "Introduce los n.elmentos del vector [n]: ";
    cin >> n;

    int *vpeor;
    int *vmejor;
    int *vcualquiera;

    vpeor = new int [n+1];
    vmejor = new int [n+1];
    vcualquiera = new int [n+1];
    //Completamos el array con los datos
    for(int i = 1; i <= n; i++){
        //Vector igual al elemento a buscar
        vpeor[i] = x;
        //Vector diferente al elemento a buscar
        vmejor[i] = x+i;
        //Mitad vector igual y mitad diferente
        if(i <= (n/2)){
            vcualquiera[i] = x;
        }else{
            vcualquiera[i] = x+i;
        }
    }

    cout << "\n\nVector vpeor:\n";
    for(int i = 1; i <= n; i++){
        cout << vpeor[i] << " ";
    }

    cout << "\n\nVector vmejor\n";
    for(int i = 1; i <= n; i++){
        cout << vmejor[i] << " ";
    }

    cout << "\n\nVector vcualquiera\n";
    for(int i = 1; i <= n; i++){
        cout << vcualquiera[i] << " ";
    }

    cout << "\n\nCaso peor\n";
    cout << "Numero veces: " << Contar(vpeor,x,n);

    cout << "\n\nCaso mejor\n";
    cout << "Numero veces: " << Contar(vmejor,x,n);

    cout << "\n\nOtro caso\n";
    cout << "Numero veces: " << Contar(vcualquiera,x,n);

    return 0;
}

int Contar(int *v, int x, int n){
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


