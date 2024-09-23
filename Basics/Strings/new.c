#include<stdio.h>
mul(int, int);
int main(){
    // int a = 2, b=2, c=0, d=2, e;
    // e = a++ && b++ && c++ || d++;
    // printf("%d%d%d%d%d", a,b,c,d,e);

    // printf("\n");

    // int i = 1; 
    // // for (printf("1");  5; printf("3"))
    // // {
    // //     printf("2");
    // // }
    // i = 3;
    // switch (i)
    // {
    // case 1 ... 10:
    //     printf("Hello");
    //     break;
    
    // default:
    //     break;
    // }
    
    printf("HI\n");
    char a = 'P';
    char b = 'x';
    char c = (a & b) + '*';
    char d = (a | b) - '-';
    char e = (a ^ b) + '+';
    printf("%c %c %c\n", c,d,e);
    printf("%d", a & b);
    return 0; 
}

int mul(int a, int b){
    return a*b;
}