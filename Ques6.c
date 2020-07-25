#include<stdio.h>
void main()
{
   int A0length,A0width;
   int A1length,A1width;
   int A2length,A2width;

   /* a0length=1189 width=841
      a1length=841 width=594
      a2length=594 width=420

   */

   A0length=1189;
   A0width=841;
   printf("length of the a0 paper= %d,\n breadth= %d",A0length, A0width);

   A1length=A0width;
   A1width=A0length/2;
   printf("\n length of the a1 paper= %d,\n breadth=%d",A1length,A1width);

   A2length=A1width;
   A2width=A1length/2;
   printf("\n length of the a2 paper= %d,\n breadth=%d",A2length,A2width);


}
