//A secret system stores code names in forward order. To display them in mirror format, you must transform the given code name so that its characters appear in the opposite order.
#include<stdio.h>
#include<string.h>

int main(){
    char name[100];
    char mirror_name [100];
    int length ,i;

    printf("Enter the code name:");
    scanf("%s",&name);

    length = strlen(name);

    for(i=0;i<length ; i++){
        mirror_name[i] = name[length - 1- i];
    }
    mirror_name[length] = '\0';
    printf("Forward: %s\n" , name);
    printf("mirror: %s\n",mirror_name);
    return 0;
   }
