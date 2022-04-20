#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    printf("Digite o primeiro numero:");
    scanf("%d",&x);
    printf("Digite o segundo nuemero:");
    scanf("%d",&y);
    int result;
    result = soma(x,y);
    printf("%d", result);
    printf("\n");



    int result2 = soma(20,305);
    printf("A soma de 20+305 = %d", result2);

    return 0;
}


int soma (int x,int y){

    int R;
    R = x + y;

return R;

}
