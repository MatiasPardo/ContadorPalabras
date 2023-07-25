#include <stdio.h>

int main (void){
    unsigned nw = 0;

    typedef enum{IN, OUT} State;
    State state = OUT;
    for( int c  ; (c=getchar())!=EOF ; )
        if (c==' ' || c=='\n' || c=='\t')
            state = OUT;
        else if (state==OUT){
            state = IN;
            nw = nw +1;
        }
    
    printf ("%d\n", nw);
}