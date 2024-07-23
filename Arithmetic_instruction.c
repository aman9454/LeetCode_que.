#include <stdio.h>
int main () {
int a=4;
int b=8;
int z;
z=b*a;

printf ("the value of z is :%d\n",z);
printf ("the value of a+b is :%d\n",a+b);
printf ("the value of a-b :%d\n",a-b);
printf ("the value of a/b :%d\n",a/b);

int z;
z=b*a; //legal
//b*a=z; illegal
printf ("the value of z is :%d\n",z);

printf ("5 when divide by 2 leaves a remainder of %d\n",5%2);
printf (" -5 when divide  by 2 leaves remainder of %d\n",-5%2);
printf ("5 when divide by 2 leaves a remainder of %d\n",5%-2);

return 0;
}
