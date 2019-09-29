#include <iostream>
using namespace std;

int main(){
int extNum, sumDigit = 0, numEntero;

cout<<"Ingrese un número entero: ";
cin>> numEntero;

while(numEntero != 0){
    extNum = numEntero % 10;
    numEntero /= 10;
    sumDigit += extNum;
}

cout<<"La suma de los dígitos es: "<<sumDigit << endl;

return 0;
}
