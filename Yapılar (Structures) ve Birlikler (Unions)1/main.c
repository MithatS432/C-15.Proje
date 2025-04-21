#include <stdio.h>
#include <string.h>

// enum ve typedef birlikte
typedef enum {
    ERKEK,
    KADIN
} Cinsiyet;

typedef struct {
    int id;
    char isim[50];
    float ortalama;
    Cinsiyet cinsiyet;         // enum kullan�m�
    char *not_durumu;          // yap� i�inde pointer
} Ogrenci;

// Fonksiyona yap� parametresi ge�irme
void ogrenciYazdir(Ogrenci o) {
    printf("ID: %d\n", o.id);
    printf("Isim: %s\n", o.isim);
    printf("Ortalama: %.2f\n", o.ortalama);
    printf("Cinsiyet: %s\n", o.cinsiyet == ERKEK ? "Erkek" : "Kadin");
    printf("Durum: %s\n", o.not_durumu);
}

int main() {
    // Yap� dizisi
    Ogrenci sinif[2] = {
        {1, "Ahmet", 85.5, ERKEK, "Gecti"},
        {2, "Zeynep", 92.3, KADIN, "Pekiyi"}
    };

    for (int i = 0; i < 2; i++) {
        ogrenciYazdir(sinif[i]);
        printf("----\n");
    }

    return 0;
}
