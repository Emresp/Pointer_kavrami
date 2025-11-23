#include <stdio.h>

int main()
{
    int x=5;     // normal değişken atadık
    int* ptr=&x;     // Pointerların türü olmaz int yazmamızdaki amacımız ptr'nin içinde tutmuş olduğu x değişkenin adresinde olan değişkenin türüdür
    printf("%d\n",x);     // pointerlar değişkenlerin adresini tutan özel değişkenlerdir
    printf("x degiskenin adresi%x\n",&x);
    printf("x degiskenin adresi:%x\n",ptr); // pointerların değişken adrsi tutan bir değişken olduğunu daha iyi gösteren bir örnek
    printf("ptr degiskenin adresi%x\n",&ptr);// Özel değişken dediğimiz pointerlrada adres tutmak için belleği kullanılır dolayısıyla onlarında bir adresi vardır
    printf("x'in degeri: %d\n",*ptr);// x değikini ile hiç ilgilenmeden sadece pointer ile x değişkenin içini okuma işlemi

    return 0;
}