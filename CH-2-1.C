#include<stdio.h>
#include<conio.h>
  main()
  {
   int r, area;
   clrscr();
   printf("Enter of radius:");
   scanf("%d", &r);
   area = 3.14*r*r;

   printf("Area of circle %.2d",area);

   getch();



  }