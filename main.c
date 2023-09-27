#include <stdio.h>
#include "infaplic.h"

string teste_string;
int teste_int;
float teste_float;

int main()
{
    printf("inteiro:");
    teste_int = get_int();
    
    printf("real:");
    teste_float = get_float();
    
    printf("texto:");
    teste_string = get_string();
    
    printf("seu inteiro:%d\n", teste_int);
    printf("seu real:%f\n", teste_float);
    printf("seu texto:%s\n", teste_string);
    
    return 0;
}
