#include "iostream"
using namespace std;
int main (void){
    cout << endl << "Los primeros 100 numeros impares" << endl << endl;
    int ar[100], x=1;
    for (int i=0;i<100;i++){
        ar[i]=x;
        x+=2;
    }
    cout << "El arreglo es: " << endl;
    for (int i=99;i>=0;i--)
        cout << ar[i] << endl;
    return 0;
}