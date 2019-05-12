/*
*sonuc=36+4M+6R+6Q
*
*A(mxr)B(rxn)=C(mxn)
*
*Ýlk öðenin i'nci satýrýnýn bileþenleriyle,
*ikinci öðenin j'nci sütununun bileþenleri karþýlýklý
*olarak çarp topla ve sonuç dizinin bileþeni olarak yaz.
*
*/

#include<stdio.h>
#include<stdlib.h>
 int main(void) 
{
 int a[10][10],b[10][10],c[10][10],r=0,m=0,i=0,j=0,p=0,q=0,k=0; 
    int *pt,*pt1,*pt2;
 printf("Iki boyutlu 1. dizinin boyutu [satirxsutun] : "); // 1
 scanf("%d %d",&m,&r); //2
    for(i=0;i<m;i++) // 1+(M+1)+1
 { 
        for(j=0;j<r;j++) // 1+(R+1)+1
            { 
            printf("%d. ci satirin %d. ci sutunu :",i+1,j+1); // 2*R
 scanf("%d",&a[i][j]); // R
 }
 }
 printf("Iki boyutlu 2. dizinin boyutu [satirxsutun] : "); // 1
    scanf("%d %d",&p,&q); // 1 
 for(i=0;i<p;i++) // 1+(P+1)+1
 {
 for(j=0;j<q;j++) // 1+(Q+1)+1
            {
 printf("%d. ci satirin %d. ci sutunu :",i+1,j+1); // 2*Q
 scanf("%d",&b[i][j]); // Q
        }
 }
 if(r!=p) // 1 //(p * j) boyutlu A matrisi ile (k * l) boyutlu B matrisinin çarpýmý ancak "j = k" ise mümkün olur; yoksa geçerli deðildir.
        {
 printf("Carpma yapilamaz\n"); // 1
 exit (0); // 1
 }
 pt=&a[0][0]; 
 pt1=&b[0][0]; 
 pt2=&c[0][0];
 for(i=0;i<m;i++) //1+(M+1)+1
        { 
        for(k=0;k<q;k++) //1+(K+1)+1
            { 
            *(pt2+(i*10+k))=0; 
            for(j=0;j<r;j++) // 1+(R+1)+1
 {
 *(pt2+(i*10+k))+=*(pt+(i*10+j))**(pt1+(j*10+k)); // R
            }
 }
 }
 for(i=0;i<m;i++) //1+(M+1)+1
        {
 for(j=0;j<q;j++) // 1+(Q+1)+1
            { 
            printf("%d ",c[i][j]); //Q
        }
 printf("\n"); // M
 }
 return 0; // 1
 }
