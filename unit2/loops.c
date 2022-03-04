#include <stdio.h>
#include "../libraries/utils.h"

int main(int argc, char** argv){

    for ( int iterator = 0 ; iterator <=10 ; iterator = iterator + 1){
        printf("ITERATOR: %d\n", iterator);
        sleep(1000);//1 segundo
    }

    int rango = 1;
    int count = 0;
    while (rango <= 99 ) {
        count = count + rango;
        rango++; //rango + rango 1;
    
    }
    printf ("suma %d\n", count);

    while(true) {
        system("clear");
        printf("Program running...\n");
        sleep (1000);
    };

    for (;;){
        break;
    }
    return 0;
}