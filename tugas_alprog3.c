#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int bilanganPrima(int angka){
    if(angka == 2) {
        return 1;
    }
    

    if(angka <= 1 || angka % 2 == 0){
        return 0;
    } else {
        for(int i = 3; i < sqrt(angka);i++){
            if(angka % 2 == 0){
                return 0;
            }
        }
        
    }
    return 1;
}


int main(){

    int angka;
    scanf("%d", &angka);

    int hasil = bilanganPrima(angka);
    if(hasil == 0){
        printf("BUKAN");   
    } else {
        printf("PRIMA");
    }
    

    return 0;
}