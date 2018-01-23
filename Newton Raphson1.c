#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){

    float x = 1,x2 = 0, value1 = 0,value2 = 0, errabs = 100;
    int iter = 0;


    while(errabs>=5){


        value1 = ((-2 * (pow(x,6))) + (-1.5 * (pow(x,4))) + (10 * x) + 2);

        value2 = ((-12 * (pow(x,5))) + (-6 * (pow(x,3))) + 10);


        x2 = x;

        x = (x - (value1/value2));

        if(iter != 0){

            errabs = abs((((x - x2)/x) * 100));
        }

        iter++;

    }


    printf("\nValor en funcion: %f\nValor en funcion derivada: %f\n",value1,value2);
    printf("\nValor de x: %f\nError relativo de: %f\n",x,errabs);


    return 0;
}