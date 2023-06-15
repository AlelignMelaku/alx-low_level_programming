#include <stdio.h>
/**
 * main - C program that print the sizeof data types
 * return : 0
 * /
 int main(void)
 {
    char a;
    int b;
    long int c;
    long long int d;
    float f;

    printf("Sizeof a char :%lu byte(s)\n",(unsigned long)sizeof(a));
    printf("Sizeof int  :%lu byte(s)\n",(unsigned long)sizeof(b));
    printf("Sizeof a long int :%lu byte(s)\n",(unsigned long)sizeof(c));
    printf("Sizeof a long long int  :%lu byte(s)\n",(unsigned long)sizeof(d));
    printf("Sizeof a float :%lu byte(s)\n",(unsigned long)sizeof(f));
    return (0);
  }

   
 
