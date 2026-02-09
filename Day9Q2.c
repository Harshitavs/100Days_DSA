#include<stdio.h>
#include<string.h>
void  reverseString( char* s , int sSize){ 
    int left = 0;
    int right = sSize - 1;

    while ( left < right ) {
        char temp = s[left];
        s[left] =  s[right];
        s[right] = temp;

        left ++;
        right --;
    }
}
/*
int main() {
 char s[100] ;
 printf("Enter the string : ");
 scanf("%s",s);

 int size = strlen(s);

 reverseString(s,size);
 printf("Mirror : %s\n" , s);
 return 0;
}
 */
int main() {
    // Example 1
    char s1[] = {'h','e','l','l','o','\0'};
    int size1 = 5; // number of characters (excluding '\0')

    reverseString(s1, size1);
    printf("Output 1: %s\n", s1);

    // Example 2
    char s2[] = {'H','a','n','n','a','h','\0'};
    int size2 = 6;

    reverseString(s2, size2);
    printf("Output 2: %s\n", s2);

    return 0;
}