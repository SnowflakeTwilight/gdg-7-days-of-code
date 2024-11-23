#include <stdio.h>

int main() {
    char str[100] ;
    
    printf("Enter the string = ");
    // scanf("%s" , &str);
    scanf("%s" , str);
    
    int size = sizeof(str)/sizeof(str[0]);
    int count = 0;
    for(int i = 0 ; i < size ; i++){
        if(str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' ||str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I' ||str[i] == 'U' ||str[i] == 'O' ){
            count++ ; 
        }
    }
    
    printf("Number of vowels in string %s entered = %d" ,str, count);

    return 0;
}
