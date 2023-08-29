#include<stdio.h>
#include <ctype.h>

int mystrcmp(const char* s1, const char* s2) {
    while (*s1 && *s2) {
        if (tolower(*s1) != tolower(*s2)) {
            return (tolower(*s1) < tolower(*s2)) ? 0 : -1;
        }
        s1++;
        s2++;
    }
    if (*s1 || *s2) {
        return -1;
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    char s1[100],s2[100];
    printf("Enter the first sentence to compare: ");
    gets(s1);
    printf("Enter the second sentence to compare: \n");
    gets(s2);
    printf("mystrcmp function returns: %d\n",mystrcmp(s1,s2));
    return 0;
}
