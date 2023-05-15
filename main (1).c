#include <stdio.h>

int main() {
    // a) Dizinin boyutu ve elemanları kullanıcıdan istenir
    int n, aranilan, i;
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &n);
    int dizi[n];
    for(i = 0; i < n; i++) {
        printf("%d. elemanı giriniz: ", i+1);
        scanf("%d", &dizi[i]);
    }
    
    // b) Dizide aranacak eleman kullanıcıdan istenir
    printf("Aranacak elemanı giriniz: ");
    scanf("%d", &aranilan);
    
    // c) Linear Search algoritması kullanılarak elemanın dizide olup olmadığı kontrol edilir
    int bulundu = 0;
    for(i = 0; i < n; i++) {
        if(dizi[i] == aranilan) {
            bulundu = 1;
            break;
        }
    }
    if(bulundu) {
        printf("Aranılan eleman dizide mevcut.");
    }
    else {
        printf("Aranılan eleman dizide bulunamadı.");
    }
    return 0;
}
