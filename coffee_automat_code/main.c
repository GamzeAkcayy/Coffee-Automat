#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secim,sayi,fkahve_fiyat=0,akahve_fiyat=0,mkahve_fiyat=0,toplam_fiyat=0,yas,indirim=0,indirim_fiyat=0;
    char kamp;
    printf("------------KAHVE OTOMATI-----------\n\n");
    printf("LUTFEN KAHVE SECINIZ:\n A)FILTRE KAHVE FIYAT:8 TL \n B)AMERICANO KAHVE FIYAT:10 TL \n C)MOCHA FIYAT:12 TL \n\n ");
    printf("Filtre kahve alacak misiniz? \n 1)EVET 2)HAYIR \n ");
    scanf("%d",&secim);
    if(secim==1)
    {
        printf("Kac adet kahve alacaksiniz? \n");
        scanf("%d",&sayi);
        fkahve_fiyat=8*sayi;
    }
    printf("Americano kahve alacak misiniz? \n 1)EVET 2)HAYIR \n ");
    scanf("%d",&secim);
    if(secim==1)
    {
        printf("Kac adet kahve alacaksiniz? \n");
        scanf("%d",&sayi);
        akahve_fiyat=10*sayi;
    }
    printf("Mocha kahve alacak misiniz? \n 1)EVET 2)HAYIR \n ");
    scanf("%d",&secim);
    if(secim==1)
    {
        printf("Kac adet kahve alacaksiniz? \n");
        scanf("%d",&sayi);
        mkahve_fiyat=12*sayi;
    }
    toplam_fiyat=fkahve_fiyat+akahve_fiyat+mkahve_fiyat;
    printf("---KAMPANYA DETAYLARI----\n");
    printf("Ogrenci misiniz? \n E)Evet H)Hayir \n");
    scanf("%s",&kamp);
    if(kamp=='E'|| kamp=='e')
    {
        printf("Yasiniz kactir?");
        scanf("%d",&yas);
        if(yas<25)
        {
            printf("Ogrenci indiriminiz uygulaniyor...\n\n");
            indirim=toplam_fiyat*0.2;
            indirim_fiyat=toplam_fiyat-indirim;
        }
        else
        {
            printf("Indirim uygulanmamaktadir.\n");
            indirim_fiyat=toplam_fiyat-indirim;
        }
    }
    else if(kamp=='h' || kamp=='H')
    {
        printf("Indirim uygulanmamaktadir.\n");
        indirim_fiyat=toplam_fiyat-indirim;
    }
    else//evet(E-e) veya hayýr(H-h)dan farklý bir cevap verilirse soruya tekrar dönülmeden fiyat bilgisi ekrana yazdýrýlýr.
    {
     printf("Yanlis tusa bastiniz. ");
    }
    printf("Indirimsiz fiyat=%d\n",toplam_fiyat);
    printf("Yapilan ogrenci indirimi miktari=%d\n",indirim);
    printf("Toplam odeyeceginiz fiyat=%d",indirim_fiyat);


    return 0;
}
