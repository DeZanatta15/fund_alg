#include <stdio.h>
#include <stdlib.h>

//*Global Variables*//
char* date = "02-02-22T10:25:00z";
//////////////////////////////////

///La ejecucion del programa
int main(){
    date = "02-03-22T10:25:00z";
    int hours = 22;// Local:main  %d  y/o  %i
    float pi = 3.1416;//%f //
    char character = 'c'; //%c
    char* name = "Hectorrrr";//%s
    int* address = &hours; //%p
    hours = hours + 2; 
    printf("hours: %d, %s\n", hours);
    return 0;
}
////////////////////////////////////////////
/// A rrays: conjunto de n tipos
//