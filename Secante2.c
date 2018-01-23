#include<stdio.h>
#include<stdlib.h>
#include<math.h>



float evalua(float num){

    float value = 0,e = 2.718281828459045235360;

    value = (pow(e,-num)) - num;


    return value;
}


float formula_secante(float p0, float p1, float value0, float value1){

    float res = 0;

    res = p1 - ((value1 * (p1 - p0)) / (value1 - value0));

    return res;
}

float error_relativo_porcentual(float value1, float value2){

    float res = 0;


    res = abs(((value1 - value2)/value1) * 100);


    return res;
}




int main(){


    float new_p = 0, p0 = 0, p1 = 1, value0 = 0, value1 = 0, error = 100;
    int iter = 0;


     while(error>=.0010){

            value0 = evalua(p0);
            value1 = evalua(p1);


            new_p = formula_secante(p0,p1,value0,value1);

            p0 = p1;
            p1 = new_p;

        if(iter!=0){

            error = error_relativo_porcentual(p1,p0);
        }



        iter++;
     }

     printf("new p: %f\n",p1);
     printf("Error %f",error);

   return 0;

}