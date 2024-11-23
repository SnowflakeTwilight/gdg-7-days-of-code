#include <stdio.h>

int main() {
    char str[100] ;
    
    printf("Enter the string = ");
    // scanf("%s" , &str);
    scanf("%s" , str);
    
    printf("%s %s", str , str);

    return 0;
}
