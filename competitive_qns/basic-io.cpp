#include <stdio.h>

int main() {
    char str[100];
    int n;

    printf("Enter your name: ");
    fgets(str,100,stdin);

    

    printf("Enter your roll number: ");
    scanf("%d",&n);

    printf("The name you entered is: ");
    fputs(str,stdout);
    printf("Your roll number is: %d",n);


}