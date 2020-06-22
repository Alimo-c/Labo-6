#include "iostream"
using namespace std;
int promedio (int, int []);
int main (void){
    int n;
    cout << endl << "Almacenar en un arreglo" << endl << endl;
    cout << "Introduzca la longitud de su arreglos: ";
    cin >> n;
    int arr[n];             //Se declara el arreglo con la longitud especificada
    cout << "Introduzca los numeros del arreglo:" << endl;
    for (int i=0;i<n;i++)
        cin >> arr[i];      //Se va llenando el arreglo hasta llegar al final
    promedio (n, arr);
    return 0;
}

int promedio (int n, int arr[]){
    float x=0;
    for (int i=0;i<n;i++){
        x+=arr[i];          //Se acumulan los valores de los elementos del arreglo 
    }
    cout << "El promedio de los elementos es: " << x/n;
}