#include <iostream>
using namespace std;

int NumeroPerfecto (int numero){
int suma=0;
    for (int i=0; i<numero; i++){
if (numero % i == 0){

}
    }
    return suma== numero;
}
int main()
{
int num;

cout << "Ingrese un numero para comprobar si es pérfecto ";
cin>> num;

if (num <=0 ){

cout <<"Ingrese un numero que no sea 0";
}else if (NumeroPerfecto(num)){
cout<< num << "El numero es perfecto";
}else{

cout << "No es perfecto vro:(";

}

return 0;
}