#include <stdio.h>

int main (){
    int LA, LB, SA, SB, N;

    scanf ("%d ", &N);
    scanf ("%d %d", &LA, &LB);
    scanf ("%d %d", &SA, &SB);


    if (N<=LB && N>=LA && N<=SB && N>=SA) {
            printf("possivel\n");
    }
    else{
        printf("impossivel\n");
    }


}
