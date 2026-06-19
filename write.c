#include<stdio.h>

// struct Student
// {
//     int roll;
//     char name[20];
// };

// int main()
// {
//     struct  Student s = {101,"Aesha"}; // struct Student  = {101,"Aesha"};

 //   FILE *fp = fopen("student.dat","wb");
    
    //   FILE *fp = fopen("student.dat","rb");

    //   fread(&s, sizeof(s),1, fp);

    //   printf("Roll = %d\n", s.roll);
    //   printf("Name = %s\n", s.name);

    // fclose(fp);


    // if(fp == NULL)
    // {
    //     printf("cannot open file");
    //     return 1;
    // }

    
    //     fwrite(&s,sizeof(s),1,fp); // fwrite(&s,sizeof(struct Student),1,fp);

    // fclose(fp);

    // printf("data written successfully.");

//     return 0;
    
// }


    
#define SQR(x) x*x

int main() {
    printf("%d", SQR(2+3));
}

    

