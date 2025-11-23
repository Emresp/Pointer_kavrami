#include <stdio.h>

int main() {

    char name= 'E';

    double y = 3.1415;
    int x = 7;

    char* nameptr= &name;
    double* yptr= &y;
    int* xptr= &x;

    printf("First Addresses:\n\n");

    // Adres ve değerleri
    printf("name first address:%x\tvalue:%c\n", nameptr, *nameptr);
    printf("y's first address:%x\tvalue:%f\n", yptr, *yptr);
    printf("x's first address:%x\tvalue:%d\n\n", xptr, *xptr);
    printf("Pointer address:%x\n\n", &xptr);

    //Adresleri artırp azaltmak yerini değiştirmek çok tehlikli bir işlemdir sadece uzmanların kullanması gerekir.
    //Bunun sebebi ise biz bellekte nerenin boş olup olmadığını bilemeyiz dolu bir yere kaydırma yaparsak sıkıntılara yol açabilir.


    nameptr++; // 1 byte
    xptr+=3;   // 12 byte (int  4 byte olduğu için 3*4=12 artar)
    yptr-=4;   // 32 byte (double  8 byte olduğu için 4*8=32 azalır)

    printf("Next Addresses:\n\n");

    // işlem sonrası Adres ve değerleri
    // Örenekte odluğu gibi saçma sapan değerler çıkıyor, bahsedilen tehlike budur
    printf("name next address:%x\tvalue:%c\n", nameptr, *nameptr);
    printf("y's next address:%x\tvalue:%f\n", yptr, *yptr);
    printf("x's next address:%x\tvalue:%d\n\n", xptr, *xptr);
    printf("Pointer address:%x\n\n", &xptr);

    return 0;
}
