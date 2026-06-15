#include<stdio.h>
//     int a[5]={1,2,3,4,5};
//     void main(){

// for(int i=0;i<=4;i++) 
// {
//     printf("%d",a[i]); //
// }

// }

//     printf("%d",3[a]);// 3[a] or a[3]
    
    void main()
// {
// int x;
// if(x=1)
//     printf("good");

// printf("Bad");    
// }


//sum of two numbers

// {
//    int a =10;
//    int b= 20;

//    int sum = a + b;
//    printf("%d", sum);

// }

// calculator using switch case
// {
//     int a = 10;
//     int b = 20;

//     int sum = a + b;
//     int sub = a - b;
//     int mul = a * b;
//     int div = a / b;
//     int mod = a % b;

//     printf("sum = %d\n",sum);
//     printf("sub = %d\n",sub);
//     printf("mul = %d\n",mul);
//     printf("div = %d\n",div);
//     printf("mod = %d\n",mod);

// }

//factorial
//     {
//         int a =5;
//         int fact =1;
//         for(int i=1;i<=a;i++)
//         {
//             fact = fact * i;
        
//     }

//     printf("%d",fact);
// }

// prime number

// {
//     int a =5;
//     int count = 0;

//     for(int i=1; i<=a; i++)
//     {
//         if(a % i == 0)
//         {
//             count ++;
//         }
        
//     }
//     if(count ==2)
//         printf("%d is prime number",a);

//     else
//         printf("%d is not prime number",a);    

// }

//reverse of a number

{
    int num = 123456789;
    int reverse = 0;

    while (num != 0)
    {
        int digit = num % 10; //get last digit
        reverse = reverse * 10 + digit;
        num = num/10;  //remove last digit
    }

    printf("Reverse = %d", reverse);
    
}