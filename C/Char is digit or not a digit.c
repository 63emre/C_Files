#include <stdio.h>
int myisdigit(const char *e ){
	if((*e)>=48 && (*e)<=57) return 1;
	return 0;	
}
int main(){
    char e;
	printf("character?\n");
	scanf("%c",&e);
	if(myisdigit(&e)){
		printf("It is a digit");
	}else{
		printf("It is not a digit");
	}
	return 0;
}
