#include<stdio.h>
main()

{
int a=21;
int b=10;

int c;
float d=21;
float e=10;
float z;


c=a+b;
printf("line 1-value of c is %d\n",c);
c=a-b;
printf("line 2-value of c is %d\n",c);
c=a*b;
printf("line 3-value of c is %d\n",c);
c=a/b;
printf("line 4-value of c is %d\n",c);
c=a%b;
printf("line 5-value of c is %d\n",c);
c=a++;
printf("line 6-value of c is %d\n",c);
c=++a;
printf("line 7-value of c is %d\n",c);
c=a--;
printf("line 8-value of c is %d\n",c);
c=--a;
printf("line 9-value of c is %d\n",c);
z=d/e;
printf("line 10-value of z is %f\n",z);

return 0;

}
