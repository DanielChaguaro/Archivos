#include <stdio.h>

int main(){

    FILE *archivo=NULL;
    FILE *archivo3=NULL;
    double pi;
    int c,aux;

    archivo=fopen("vector.txt","r+");
    archivo3=fopen("vector3.txt","w");
    if (archivo==NULL){
        if (archivo3==NULL){
            printf("No se puede abrir el archivo");
            return -1;
        }
    }
    while(!feof(archivo)){
        fscanf(archivo,"%d",&aux);
        c=aux*3;
        fprintf(archivo3,"%d \n",c);
    }
     fclose(archivo);
     fclose(archivo3);
     return 0;
}