/*1*/
#include <stdio.h>

int main()
{
    typedef unsigned int unit;
    unit i,j;
    i=10;
    j=20;
    printf("The value of i is : %d",i);
    printf("\nThe value of j is : %d",j);

    return 0;
}

/*2*/
#include <stdio.h>

int main()
{
    typedef unsigned int unit;
    unit i,j;
    i=10;
    j=20;

    typedef signed int x;
    x p,q;


    printf("Enter the value of p and q :");
    scanf("%d %d",&p,&q);

    printf("p*i : %d",i*p);
    printf("\nq*j : %d",j*q);

    return 0;
}

/*3*/
#include <stdio.h>

typedef struct student{
    char name[20];
    int age;
}stud;

int main()
{
    stud s1;
    printf("Enter the details of the student");
    printf("\nEnter the name :");
    scanf("%s",&s1.name);
    printf("Enter the age of the student :");
    scanf("%d",&s1.age);
    printf("The name of the student is : %s",s1.name);
    printf("\nThe age of the student is : %d",s1.age);


    return 0;
}

/*4*/
#include <stdio.h>

typedef struct student{
    char name[20];
    int roll;
}stud;

int main()
{
    stud s[4];
    printf("Enter the details of the students");
    for(int i=0;i<4;i++){
        printf("\nEnter the name :");
        scanf("%s",s[i].name);
        printf("Enter the roll no of the student :");
        scanf("%d",&s[i].roll);
    }
    for(int i=0;i<4;i++){
        printf("\nThe name of the student %d is : %s",i+1,s[i].name);
        printf("\nThe roll no of the student %d is : %d",i+1,s[i].roll);
    }


    return 0;
}

/*5*/
#include <stdio.h>
#include <string.h>

struct student{
    char name[20];
    int rollno;
};
int main()
{
    int i;
    struct student st[5];
    printf("Enter the records of 5 students :");
    for(i=0;i<5;i++){
        printf("\nEnter roll no:");
        scanf("%d",&st[i].rollno);
        printf("Enter name:");
        scanf("%s",&st[i].name);
    }
    printf("\nStudent information list : ");
    for(i=0;i<5;i++){
        printf("\nRoll no: %d, Name : %s",st[i].rollno,st[i].name);
    }

    return 0;
}


/*6*/
#include <stdio.h>

struct address{
    char city[20];
    int pin;
    char phone[14];
};

struct employee{
    char name[20];
    struct address add;
};

int main()
{
    struct employee emp;
    printf("Enter employee info:");
    scanf("%s %s %d %s",emp.name,emp.add.city,&emp.add.pin,emp.add.phone);
    printf("\nEmployee details:");
    printf("\nName:%s\nCity:%s\nPin:%d\nPhine:%s",emp.name,emp.add.city,&emp.add.pin,emp.add.phone);
    return 0;
}

/*7*/
#include <stdio.h>
#include <string.h>

struct employee{
    char name[20];
    int id;
    struct data{
        int dd;
        int mm;
        int yyyy;
    }doj;
}e1;
int main()
{
    e1.id=101;
    strcpy(e1.name,"Sonoo Jaiswal");
    e1.doj.dd=10;
    e1.doj.mm=11;
    e1.doj.yyyy=2014;
    printf("Employee id : %d",e1.id);
    printf("\nEmployee name : %s",e1.name);
    printf("\nEmployee date of joining (dd/mm/yyyy)  : %d %d %d",e1.doj.dd,e1.doj.mm,e1.doj.yyyy);
    return 0;
}

/*8*/
#include <stdio.h>
#include <string.h>

struct employee{
    char name[20];
    int id;
    struct data{
        int dd;
        int mm;
        int yyyy;
        struct address{
            int pin;
            char city[20];
        }add;
    }doj;
}e[5];
int main()
{
    printf("Enter employee details");
    for(int i=0;i<5;i++){
        printf("\nEmp id:");
        scanf("%d",&e[i].id);
        printf("Emp Name:");
        scanf("%s",e[i].name);
        printf("Date of joining:");
        scanf("%d %d %d",&e[i].doj.dd,&e[i].doj.mm,&e[i].doj.yyyy);
        printf("Enter pincode:");
        scanf("%d",&e[i].doj.add.pin);
        printf("City:");
        scanf("%s",&e[i].doj.add.city);
    }
    printf("Printing employee details:");
    for(int i=0;i<5;i++){
         printf("Employee id : %d",e[i].id);
        printf("Employee Name : %s",e[i].name);
        printf("DOJ : %d %d %d",e[i].doj.dd,e[i].doj.mm,e[i].doj.yyyy);
        printf("Pincode : %d",e[i].doj.add.pin);
        printf("City : %s",e[i].doj.add.city);
    }
    return 0;
}

/*9*/
#include <stdio.h>

struct address{
    char city[20];
    int pin;
    char phone[14];
};
struct employee{
    char name[20];
    struct address add;
};
void display(struct employee);
void main()
{
    struct employee emp;
    printf("Enter employee information : ");
    scanf("%s %s %d %s",emp.name,emp.add.city,&emp.add.pin,emp.add.phone);
    display(emp);
}
void display(struct employee emp){
    printf("Printing the details...\n");
    printf("%s %s %d %s",emp.name,emp.add.city,emp.add.pin,emp.add.phone);
}

/*10*/
#include <stdio.h>
union abc

{
    int a;
    char b;
}var;
int main(){
    union abc*ptr;
    union abc var;
    var.a=90;
    ptr = &var;
    printf("The value of a is : %d",ptr->a);
}

/*11*/
#include <stdio.h>
union abc

{
    int a;
    char b;
}var;
int main(){
    var.a=43;
    printf("\na = %d",var.a);
    printf("\nb = %d",var.b);
}

/*12*/
#include <stdio.h>
#define PI 3.14
//#undef PI

main(){
    printf("%f",PI);
}

/*13*/
#include <stdio.h>
#define MIN(a,b) ((a)<(b)?(a):(b))

void main(){
    printf("Minimum between 10 and 20 is : %d",MIN(10,20));
}

/*14*/
#include <stdio.h>
#define PI 3.14
#define circlearea(r) (PI*r*r)

int main(){
    float radius,area;
    printf("Enter the radius : ");
    scanf("%f",&radius);
    area = circlearea(radius);
    printf("Area = %.2f",area);

    return 0;
}

/*15*/
#include <stdio.h>
#define YEARS_OLD 12

int main(){
    #if YEARS_OLD<=10
    printf("Raju id=s a young boy");
    #elif YEARS_OLD>10
    printf("Raju is over %d years old",YEARS_OLD);
    #endif
    return 0;
}

/*16*/
#include <stdio.h>
#define YEARS_OLD 12
#ifndef YEARS_OLD
#define YEARS_OLD 10
#endif

int main(){
    printf("Raju is over %d years old",YEARS_OLD);
    return 0;
}





