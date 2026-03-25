#include<stdio.h>
#include<conio.h>
 main()
 {
      float p, r, t, is ;


    clrscr();
    printf("Enter principal:");
    scanf("%f", &p);
    printf("Enter rate:");
    scanf("%f", &r);
    printf("Enter time:");
    scanf("%f", &t);
    printf("Entar intrest");
    is = ( p * r * t )/100;
    printf("Simpel Intrerest = %f", is);



    getch();


 }