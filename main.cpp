#include <cstdio>
#include <iostream>
#include "Mat2x2.h"
/*Preguntas:
Es necesario implementar el constructor copia y/o el operador de asignacion para la clase ´ Mat2x2?
Justifique su respuesta.
Rta: no es necesario, debido a que este operador es definido automaticamente al crear el objeto, al igual que el
contructor copia.

Cual es la diferencia en cuanto a la implementacion del operador * y el operador *= ?
Rta:  El operador * permite multiplicar un objeto por un real y retorna el resultado de dicha operacion.sin modificar el objeto
original;mientras que el operador *= permite realizar la misma operacion, pero no tiene retorno, ya que la multiplicacion
actua sobre el mismo objeto, es decir, en este caso se modifica el objeto original.
*/
int main( void ){

Mat2x2 myMat2x2_A(1,2,3,4);
Mat2x2 myMat2x2_B(5);
Mat2x2 myMat2x2_C(6,7,8,9);
Mat2x2 ansMat2x2;

cout << "A: \n" << myMat2x2_A;
cout << "\nB: \n" << myMat2x2_B;
cout << "\nC: \n" << myMat2x2_C;
cout << "\nA+B: \n" << (myMat2x2_A + myMat2x2_B);
cout << "\nA-B: \n" << (myMat2x2_A - myMat2x2_B);
cout << "\n(A+B)==C: "  << ((myMat2x2_A + myMat2x2_B) == myMat2x2_C);
cout << "\n(A-B)==C: "  << ((myMat2x2_A - myMat2x2_B) == myMat2x2_C);
cout << "\n\nA*Real(3): \n" << (myMat2x2_A*3);
cout << "\n\nA/Real(4): \n" << (myMat2x2_A/4);
myMat2x2_A/=4;
cout << "\n\nA/=Real(4): \n" << (myMat2x2_A);
myMat2x2_A*=8;
cout << "\n\nA*=Real(8): \n" << (myMat2x2_A);
return 0;

}


