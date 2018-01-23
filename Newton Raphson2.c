#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main(){
    
    
    float x = 1.8,x2 = 0, value1 = 0,value2 = 0, errabs = 100;
    float e = 2.718281828459045235360;
    int iter = 0;
    
    
    
    while(iter<=15){


        value1 = ((pow(e,x-1)) - (5 * (pow(x,3))));

        value2 = ((pow(e,x-1)) - (15 * (pow(x,2))));

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