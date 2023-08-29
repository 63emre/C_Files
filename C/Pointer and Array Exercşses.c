#include<stdio.h>
#define N 10
int main(int argc, char const *argv[])
{
    int array_of_integers[N],*ptr_of_array,*ptr_of_first_elemenet;
    int i;
    ptr_of_array=array_of_integers;
    ptr_of_first_elemenet=&array_of_integers[0];
    for ( i = 0; i <N; i++)
    {
        array_of_integers[i]=i;
    }
    for ( i = 0; i <N; i++)
    {
        printf("%d \n",*(ptr_of_first_elemenet+i));
    }
    
    return 0;
}
