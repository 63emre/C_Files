#include <stdio.h>
//#include <string.h>
//#include <ctype.h>
int countWord(const char *sent, char let);
int main(int argc, char const *argv[]){
	int clock;
	char sentence[255];
	char letter;
	printf("Enter a sentence: ");
	gets(sentence);
	printf("Enter a letter: ");
	scanf("%c", &letter);
	clock=countWord(sentence,letter);
	printf("Number of words starting with %c = %d", letter,clock);
	return 0;
}
int countWord(const char *sent, char let){
	int i,count=0;
	for(i=0;i<strlen(sent)-1;i++){
		if(i==0 && (sent[i]==toupper(let) || sent[i]==tolower(let))) count++;
		if(sent[i]==' ' && (sent[i+1]==toupper(let) || sent[i+1]==tolower(let)))count++;
	}
	return count;
}