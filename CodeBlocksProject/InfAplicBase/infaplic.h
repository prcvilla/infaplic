#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char* string;

string get_string(void){
    char s[255];
    scanf(" %[^\n]255s",s);
    return strdup(s);
}

int get_int(void){
    int tmp;
    scanf("%d",&tmp);
    return tmp;
}

float get_float(void){
    float tmp;
    scanf("%f",&tmp);
    return tmp;
}

char get_char(void){
    char tmp;
    scanf(" %c",&tmp);
    return tmp;
}
