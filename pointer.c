#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=10;
    int*ptr=&a;
    printf("pointer %d \n",&a);
    printf("point %d\n",*ptr);
    printf("point2 %d\n ",ptr);
    printf("po3 %d \n",*(*(&ptr)));
    printf("po4 %d\n",a);


    return 0;
}
