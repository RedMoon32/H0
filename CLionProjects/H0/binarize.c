#include "binarize.h"
#include <stdlib.h>

static unsigned long long mod[33];
void twos_base(unsigned long long x){
    int i=0;
    while (x>0){
        mod[i]=x%2;
        x/=2;
        i++;
    }
    mod[32]=i;
}

void binarize_u(unsigned long long x){
    twos_base(x);
    for (int i=mod[32];i>=0;i--){
        printf("%d", mod[i]);
    }
    printf("\n");
}

void binarize_s(signed long long y){
   if (y>=0){binarize_u(y);}
   else{
       unsigned long long res=~abs(y)+1;
       twos_base(res);
       int i=31;
       while (mod[i]==1&&i>0&&mod[i-1]==1){
           i-=1;
       }
       i+=1;
       for (i>=0;i--;){
           printf("%d", mod[i]);
       }
   }
}