//
//  main.c
//  mod_3
//
//  Created by Pablo BalRes on 13/06/2020.
//  Copyright © 2020 Pablo BalRes. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define size 10

// At the beginning of main, or at least before you use rand()
//srand(time(NULL));

// Return array size
#define getnum(x) (sizeof (x) / sizeof (*x))

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");


    srand( (unsigned) time(NULL) * getpid()); // randomize seed
    double Arr[size];
    for(int i=0;i<size;i++){
        Arr[i] = rand()%size;
        printf("%d , %f \n",i,Arr[i]);
    }
    
    printf("Ola no es hola");
    
    return 0;
}
