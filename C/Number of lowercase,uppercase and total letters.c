//#include<stdio.h>
//#include<stdlib.h>

void countDULA(const char * sentence ,int * uC,int *Lc,int *D,int *T);
int main(int argc, char const *argv[])
{
    char sentence[100];
    int uC,Lc,D,T;
    printf("Please enter a sentence : ");
    gets(sentence);
    countDULA(sentence,&uC,&Lc,&D,&T);
    T=uC+Lc+D;
    printf("Number of uppercase letters: %d \n",uC);
    printf("Number of lowercase letters: %d \n",Lc);
    printf("Number of digits: %d \n",D);
    printf("Number of Total letters: %d \n",T);
    return 0;
}
void countDULA(const char *sentence,int *uC,int *Lc,int *D,int *T){
   for(int i=0; sentence[i] != '\0'; i++){

            if(sentence[i]>='A' && sentence[i]<='Z') {
                (*uC)++;
    }
            else if(sentence[i]>='a' && sentence[i]<='z') { 
               (*Lc)++;
    }
        else if(sentence[i]>=48 && sentence[i]<=57){
                (*D)++;
        }
}
}