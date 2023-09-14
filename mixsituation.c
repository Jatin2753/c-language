/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   printf("%d%d%d%d",72,072,0*72,0x72);
   printf("\n%d%o%x",72,72,72);
   printf("\n%i%i%i%i",72,072,0*72,0x72);
   printf("\n%05d,%5d,%-5d",32,32,32);
   printf("\n%6.3f,%06.3f,%09.3f,%-09.3f,%6.0f,%6.0f",45.6,45.6,45.6,45.6,45.6,45.6);
   int a=32768;
   unsigned int b=65536;
   printf("\n%d\n%d",a,b);
   
   char c='128';
   unsigned char d='256';
   printf("\n%d\n%d",c,d);
   
    char e=128;
   unsigned char f=256;
   printf("\n%d\n%d",e,f);
   
   printf("\n%d%c",'A','A');
    return 0;
}
