#include <iostream>
using namespace std;

int main(){
int extNum, sumDigit = 0, numEntero;

cout<<"Ingrese un n�mero entero: ";
cin>> numEntero;

while(numEntero != 0){
    extNum = numEntero % 10;
    numEntero /= 10;
    sumDigit += extNum;
}

cout<<"La suma de los d�gitos es: "<<sumDigit << endl;

return 0;
}
