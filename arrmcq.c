#include<stdio.h>

// int a =10;
// int *p = &a;
int main()
//{
//     printf("%d", *p); //10
// }
// o/p : 10

// {
//     int a[] = {10,20,30,40};
//     printf("%d", *(a+2));
// }

// o/p : 30

// {
//     int a[] = {1,2,3,4};
// printf("%d", 3[a]);
// }

// o/p : 4

// {
//     char str[] = "CDAC";
// printf("%c", *(str+2));

// }
// o/p : A

// {
//     int a = 5;
// int *p = &a;
// *p = 10;
// printf("%d", a);
// }

// o/p : 10

// {
//     int a =5;
//     int *p = &a;
//     int **q = &p;
//     printf("%d", **q); //5
// }

//o/p : 5

// {
//     int a =10;
//     int *p = &a;

//     printf("%d %d", *p , *p +5);
// }

// o/p : 10 15

// {
//     int a =10;
//     int *p = &a;

//     (*p)++;

//     printf("%d",a);
// }

// o/p : 11

// {
//     int a =10;
//     int *p = &a;
    
//     printf("%d %d", *p , ++(*p)); //undefined behaviour
// }

// {
//     int a =5;
//     int *p = &a;
//     printf("%d", *p++);
// }


// o/p : 5
// {
// int a[] = {10,20,30};
// int *p = a;

// printf("%d", *++p);
// }
// o/p : 20

{
    int a[] = {10,20,30};
int *p = a;

printf("%d %d", *p++, *p); //undefined behaviour
}