#include <stdio.h>

int main()
{
    int jumlah;
    scanf("%d", &jumlah);
    int angka[jumlah];
    
    for(int i = 0; i < jumlah;i++){
        scanf("%d", &angka[i]);
    }
    
    
    for(int i = 0; i < jumlah; i++){
        for(int j = 0; j < jumlah -1; j++){
            if (angka[j] > angka[j+1]){
                int temp = angka[j];
                angka[j] = angka[j+1];
                angka[j+1] = angka[j];
            }
        }
    }

    for(int i = 0; i < jumlah;i++){
        scanf("%d\n", angka[i]);
    }
  return 0;
}