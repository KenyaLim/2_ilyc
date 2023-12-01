#include<stdio.h>
int main (){
    //int n = 50;
    //char c = 'h';
    char surename[] = "Lloyd";

    //printf("%d\n", n);
    //printf("%p\n", &n);

    //printf("%c\n", c);
    //printf("%p\n", &c);

    printf("%s\n", surename);
    printf("%p\n", &surename[0]);
    printf("%c\n", surename[0]);

    printf("%p\n", &surename[1]);
    printf("%c\n", surename[1]);
    
    printf("%p\n", &surename[2]);
    printf("%c\n", surename[2]);

}