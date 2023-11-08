#include <stdio.h>
#include "infaplic.h"

string teste_string;
int teste_int;
float teste_float;
char teste_char;

int main()
{
    printf("inteiro:");
    teste_int = get_int();
    
    printf("real:");
    teste_float = get_float();

    printf("uma letra:");
    teste_char = get_char();
    
    printf("texto:");
    teste_string = get_string();
    
    printf("seu inteiro:%d\n", teste_int);
    printf("seu real:%f\n", teste_float);
    printf("sua letra:%c\n", teste_char);
    printf("seu texto:%s\n", teste_string);
    
    return 0;
}
