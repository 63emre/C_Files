#include<stdio.h>

int main(int argc, char const *argv[])
{
    int A,B,C;
    int *Aptr=&A;
    int *Bptr=&B;
    int *Cptr=NULL;
    A=15;
    C=12;
-   printf("Adress of variable A: %p\n",&A);
    printf("Address of variable Aptr: %p\n",&Aptr);
    printf("A value: %d\n", A);
    printf("Value pointed by Aptr: %d\n", *Aptr);
    printf("Value where Aptr is pointing: %d\n", *Aptr);
    printf("*&Aptr = %p\n",&Aptr);
    printf("&*Aptr = %p\n",&*Aptr);
    *Aptr = 9;
    printf("Value where Aptr points: %d\n", *Aptr);
    Cptr = &C;
    printf("B value: %d\n", B);
    printf("Address of variable B: %p\n",&B);
    printf("Address stored in Bptr: %p\n",Bptr);
    *Bptr = *Cptr;
    printf("Value stored in Cptr: %p\n",Cptr);
    printf("Value stored in Bptr: %p\n",Bptr);

    return 0;
}
