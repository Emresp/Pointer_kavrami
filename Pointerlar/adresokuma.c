#include <stdio.h>
/*Bir değişken tanımladığımızda bellekte atadığımız değişken için rastegele bir alan seçilir ve değişkenimiz
 *orada tutulur. Tutulan yere adres diyebiliriz. Biz bu adresi aşağıda yazdığım şekilde görebiliriz.
 *Program her çalıştığı zaman farklı hexadecimal sayıları görürüz bunun sebebi ise on bellekteki boş bir yere atılmasından dolayıdır
*/
int main(void)
{

    // atadığımız değişkenlerin adreslerini, kaç byte olduklarını ve ne tutuklarını gösterdim
    int x=18;
    float y=22.4;
    double z=3.14;
    char ch='E';

    printf("x=%d\n",x);
    printf("y=%f\n",y);
    printf("z=%f\n",z);
    printf("ch=%c\n",ch);

    printf("\n---------------------------------\n");

    printf("Kapladigi bit degeri:%d\n",sizeof(x));
    printf("Kapladigi bit degeri:%d\n",sizeof(y));
    printf("Kapladigi bit degeri:%d\n",sizeof(z));
    printf("Kapladigi bit degeri:%d\n",sizeof(ch));

    printf("\n---------------------------------\n");

    //adres görme işlemi
    printf("X degiskenin adresi:%x\n",&x);
    printf("Y degiskenin adresii:%x\n",&y);
    printf("Z degiskenin adresi:%x\n",&z);
    printf("Ch degiskenin adresi:%x\n", &ch);

    printf("\n----------------------------------\n");

    return 0;
}