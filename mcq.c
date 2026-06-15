// #include <stdio.h>
// int main() {
//     int x = 5; 
//     printf("%d %d", x++, ++x); // 5 7
// }

//o/p : is a undefined behaviour

// #include <stdio.h>
// int main() {
//     int a = 10;
//     if(a = 0)
//         printf("A");
//     else
//         printf("B");
// }

// o/p : B

#include <stdio.h>
// int main() {
//     int a[] = {10,20,30,40};
//     printf("%d", 2[a]);
// }

// o/p : 30

// #include <stdio.h>
// int main() {
//     printf("%d", 5 & 3); // 1 because 101 & 011 = 001
// }

// o/p : 1

//#include <stdio.h>
// int main() {
//     int x = -1;
//     if(x)
//         printf("True"); // because x is not 0
//     else
//         printf("False");
// }

// o/p : True

// #include<stdio.h>
// int main(){
//     char str[] = "CDAC";
//     printf("%s",str);

// }
// o/p : CDAC

// #include <stdio.h>
// int main() {
//     int i;
//     for(i=0;i<5;i++); //semicolon
//     printf("%d", i);
// }

// o/p : 5

// #include <stdio.h>
// int main() {
//     int x = 3;
//     printf("%d", x << 2);
// }
// // o/p : 12


// #include <stdio.h>
// int main() {
//     int a = 5;
//     printf("%d", sizeof(a));
// }

// o/p : 4

// #include <stdio.h>
// int main() {
//     int a = 10;
//     printf("%d", a > 5 && a < 20);
// }

// o/p : 1

// #include <stdio.h>
// int main() {
//     int x = 0;
//     while(x < 3)
//         printf("%d", x++);
// }

// o/p : 0 1 2

// #include <stdio.h>
// int main() {
//     int a = 5;
//     printf("%d", a % 2);
// }

// o/p : 1

// #include <stdio.h>
// int main() {
//     int a = 1;
//     switch(a) {
//         case 1: printf("A");
//         case 2: printf("B");  // no break statement
//         default: printf("C");
//     }
// }
// o/p : ABC

// #include <stdio.h>
// int main() {
//     int a = 20;
//     int *p = &a;
//     printf("%d", *p);
// }
// o/p : 20

// #include <stdio.h>
// int main() {
//     int a = 5, b = 10;
//     printf("%d", a > b ? a : b);
// }

// o/p : 10
// int main(){
// int x = 5;
// printf("%d", x++ + ++x); // undefined behaviour
// }

int main(){
//     int a = 3;
//     printf("%d", a+++a); // undefined behaviour
// }
printf("%d", sizeof('A')); // 4
}