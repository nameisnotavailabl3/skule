#include "temp_tasken.h"
#include <iostream>


float average(float T1,float T2, float T3){

    float sum = T1+T2+T3;
    float avg = sum/3;
    printf("average is %f\n", avg );

        return avg;
}

float minst(float T1,float T2, float T3){
    float lowest;
    if (T2 < T3){
        lowest = T2;
    }
    else{
         lowest = T3;
    }

    if  ( T1 < lowest){
        lowest = T1;
    }

    printf("lowest is %f\n", lowest);
    return lowest;
}

float max(float T1,float T2, float T3){
    float greatest;
    if (T2 > T3){
         greatest = T2;
    }
    else{
         greatest = T3;
    }

    if  ( T1 > greatest){
         greatest = T1;
    }

    printf("max is %f\n", greatest);
    return greatest;
}




