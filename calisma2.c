#include <stdio.h>
int main(){
    int a=20, b=8, gecici_deger;
    gecici_deger=a;
    a=b;
    b=gecici_deger;
    printf("a=%d, b=%d\n", a, b);
   return 0;
}
