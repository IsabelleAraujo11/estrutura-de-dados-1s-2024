#include <stdio.h>
#include <stdlib.h>

int main(int agrc, char* argv[]){

int i, x=1, num;
num = argc - 1;

printf("quantidade de numeros recebidos: %i \n" , num);
printf("numeros:\n ");

for(i = 1; i < argc ; i++){
    printf("%s\n" , argv[x]);
}
   exit(0);
}