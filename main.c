//
//  main.c
//  ödev banka sistemi
//
//  Created by Şafak Balcı on 14.10.2026.
//

#include <stdlib.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    printf("ODEME BOLUMUNE HOSGELDİNİZ \n\n");
    float uruntutari, gelenpara;
    
    printf("lutfen urun tutarini giriniz: ");
    scanf("%f",&uruntutari);
    
    printf("lutfen yuklemek üzere oldugunuz parayı giriniz: ");
    scanf("%f",&gelenpara);
    
   
    //hocam float dan dolayı yuvarlamayı yazıyorum
        float paraustu = gelenpara - uruntutari;

        //yuvarlama floattan dolayı
        int paraustukurus = (int)(paraustu * 100 + 0.5);

        printf("\nPara Ustu: %.2f TL\n\n", paraustu);

        int toplamparca = 0;
        int adet;

        printf("Para ustu\n");

        adet = paraustukurus / 20000;
        printf("200 TL: %d \n", adet);
        toplamparca = toplamparca + adet;
        paraustukurus = paraustukurus % 20000;
    
    

        adet = paraustukurus / 10000;
        printf("100 TL: %d \n", adet);
        toplamparca = toplamparca + adet;
        paraustukurus = paraustukurus % 10000;
    
    
        adet = paraustukurus / 5000;
        printf("50 TL: %d \n", adet);
        toplamparca = toplamparca + adet;
        paraustukurus = paraustukurus % 5000;
    
    
        adet = paraustukurus / 2000;
        printf("20 TL: %d \n", adet);
        toplamparca = toplamparca + adet;
        paraustukurus = paraustukurus % 2000;

    
    
        adet = paraustukurus / 1000;
        printf("10 TL: %d \n", adet);
        toplamparca = toplamparca + adet;
        paraustukurus = paraustukurus % 1000;


        adet = paraustukurus / 500;
        printf("5 TL: %d \n", adet);
        toplamparca = toplamparca + adet;
        paraustukurus = paraustukurus % 500;
    
    
    

        adet = paraustukurus / 100;
        printf("1 TL: %d \n", adet);
        toplamparca = toplamparca + adet;
        paraustukurus = paraustukurus % 100;
    
    
    

        adet = paraustukurus / 50;
        printf("50 Kurus: %d \n", adet);
        toplamparca = toplamparca + adet;
        paraustukurus = paraustukurus % 50;
    
    
    

        adet = paraustukurus / 25;
        printf("25 Kurus: %d \n", adet);
        toplamparca = toplamparca + adet;
        paraustukurus = paraustukurus % 25;

    
    
        adet = paraustukurus / 10;
        printf("10 Kurus: %d \n", adet);
        toplamparca = toplamparca + adet;
        paraustukurus = paraustukurus % 10;
    
    

        adet = paraustukurus / 5;
        printf("5 Kurus: %d \n", adet);
        toplamparca = toplamparca + adet;
        paraustukurus = paraustukurus % 5;
    
    

        adet = paraustukurus / 1;
        printf("1 Kurus: %d \n", adet);
        toplamparca = toplamparca + adet;

        printf("\nToplam verilen banknot: %d\n", toplamparca);
    
        printf("İYİ GUNLER DİLERİZ");


    
    
    
    return EXIT_SUCCESS;
}
