#include <stdio.h>
#include "mylib.h"

int main(void){
    int N = 5;
    printf("The fibonacci value for %d is %d\n", N, fI(5));
    printf("The fibonacci value for %d is %d\n", N, fR(5));
    
    for (int i = 0; i<= N; i++){
        if (fI(i) != fR(i)){
            printf ("Error detected in %i\n",i);
        } else {
            printf ("The fibonaaci value F%d = %d = %d\n", i , fI(i), fR(i));
        }
    }
    return 0;
}