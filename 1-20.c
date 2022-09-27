//1.Program to display numbers upto n using while loop/do-while/for loop
#include <stdio.h>

int main()
{
    int n,i=0;
    printf("Enter n\n");
    scanf("%d",&n);
    while(i<=n)
    {
        cout<<i<<endl;
        i++;
    }
}

//2.Program to find largest out of three numbers.
#include <stdio.h>
int max(int a,int b,int c);
void main()
{
    int a,b,c;
    printf("Enter three integers\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("The greatest integer is : %d",max(a,b,c));
}
int max(int a,int b,int c)
{
    if(a>b&&a>c)
    {
        return a;
    }
    else if(b>a&&b>c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

//3.Menu driven program to perform addition, subtraction, multiplication and division on two numbers using switch-case.
#include <stdio.h>
int main()
{
    int a,b,choice;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    printf("Enter the operations you want to perform\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Addition result = %d",a+b);
        break;
    case 2:
        printf("Subtraction result = %d",a-b);
        break;
    case 3:
        printf("Multiplication result = %d",a*b);
        break;
    case 4:
        printf("Division result = %d",a/b);
        break;
    default :
        printf("Invalid input\n");
    }

}



//4.Program to find sum of 1st n numbers.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    printf("The sum is %d",(n*(n+1))/2));
}




//5.Program to find factorial of a number.
#include <stdio.h>
int main()
{
    unsigned long long fact = 1;
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(int i = 1; i<=n; i++)
    {
        fact *= i;
    }

    printf("The factorial of %d = %d",n,fact);

}

//6.Program to enter n numbers and find largest/smallest out of them(using array).
#include <stdio.h>
void main()
{
    int n,temp;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }
    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\n");
    printf("Smallest elem = %d\nLargest elem = %d\n",arr[0],arr[n-1]);
}

//7.Program to enter n numbers and arrange them in ascending/descending order (using array).
#include <stdio.h>
void Aarrange(int a[],int n);
void Darrange(int a[],int n);
void main()
{
    int n;
    printf("enter the size of the array\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(int i = 0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    Aarrange(a,n);
    Darrange(a,n);
}
void Aarrange(int a[],int n)
{
    int temp;
    for(int i = 0; i<n; i++)
    {
        for(int j =i+1; j<n; j++)
        {
            if(a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Ascending order : \n");
    for(int i = 0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}
void Darrange(int a[],int n)
{
    int temp;
    for(int i = 0; i<n; i++)
    {
        for(int j =i+1; j<n; j++)
        {
            if(a[i]<a[j])
            {
                temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    printf("\nDescending order : \n");
    for(int i = 0; i<n; i++)
    {
        printf("%d ",a[i]);
    }
}

//8.Program to enter a matrix and find transpose of it. (using 2-D array).
#include <stdio.h>
void transpose(int r,int c,int mat[][c]);
void main()
{
    int r,c;
    printf("Enter row and column\n");
    scanf("%d %d",&r,&c);
    int mat[r][c];
    printf("Enter matrix elements\n");
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The entered matrix is: \n");
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    transpose(r,c,mat);
}
void transpose(int r,int c,int mat[][c])
{
    printf("The transpose of the matrix is \n");
    for(int i = 0; i<c; i++)
    {
        for(int j = 0; j<r; j++)
        {
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }
}

//9.Program to enter 2 matrices and perform matrix addition.
#include <stdio.h>
void matAdd(int n,int matA[][n],int matB[][n]);
void main()
{
    int n,i,j;
    printf("Enter the size\n");
    scanf("%d",&n);
    int matA[n][n],matB[n][n];
    printf("Enter elements of 1st matrix\n");
    for(i = 0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&matA[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix\n");
    for(i = 0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&matB[i][j]);
        }
    }
    matAdd(n,matA,matB);
}
void matAdd(int n,int matA[][n],int matB[][n])
{
    int matD[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            matD[i][j] = matA[i][j]+matB[i][j];
        }
    }
    printf("\nThe result of matrix addition is:\n");
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            printf("%d ",matD[i][j]);
        }
        printf("\n");
    }
}

//10.Program to enter 2 matrices and perform matrix multiplication.
#include <stdio.h>
void matMult(int n,int matA[][n],int matB[][n]);
void main()
{
    int n,i,j;
    printf("Enter the size\n");
    scanf("%d",&n);
    int matA[n][n],matB[n][n];
    printf("Enter elements of 1st matrix\n");
    for(i = 0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&matA[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix\n");
    for(i = 0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&matB[i][j]);
        }
    }
    matMult(n,matA,matB);
}
void matMult(int n,int matA[][n],int matB[][n])
{
    int matD[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            matD[i][j] = 0;
            for(int k = 0; k<n; k++)
            {
                matD[i][j] += matA[i][k]*matB[k][j];
            }
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            printf("%d ",matD[i][j]);
        }
        printf("\n");
    }
}

//11.Program to enter 2 matrices and perform matrix addition, subtraction and multiplication using functions.
#include <stdio.h>
void matAdd(int n,int matA[][n],int matB[][n]);
void matSub(int n,int matA[][n],int matB[][n]);
void matMult(int n,int matA[][n],int matB[][n]);
int main()
{
    int n,i,j,choice;
    printf("Enter the size\n");
    scanf("%d",&n);
    int matA[n][n],matB[n][n];
    printf("Enter elements of 1st matrix\n");
    for(i = 0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&matA[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix\n");
    for(i = 0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&matB[i][j]);
        }
    }
    printf("Enter the operation\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n");
    scanf("%d",&choice);
    if(choice ==1)
    {
        matAdd(n,matA,matB);
    }
    else if(choice == 2)
    {
        matSub(n,matA,matB);
    }
    else if(choice ==3)
    {
        matMult(n,matA,matB);
    }
    else
    {
        printf("Enter correct choice\n");
    }
    return 0;
}
void matAdd(int n,int matA[][n],int matB[][n])
{
    int matD[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            matD[i][j] = matA[i][j]+matB[i][j];
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            printf("%d ",matD[i][j]);
        }
        printf("\n");
    }
}
void matSub(int n,int matA[][n],int matB[][n])
{
    int matD[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            matD[i][j] = matA[i][j]-matB[i][j];
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            printf("%d ",matD[i][j]);
        }
        printf("\n");
    }
}
void matMult(int n,int matA[][n],int matB[][n])
{
    int matD[n][n];
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            matD[i][j] = 0;
            for(int k = 0; k<n; k++)
            {
                matD[i][j] += matA[i][k]*matB[k][j];
            }
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            printf("%d ",matD[i][j]);
        }
        printf("\n");


    }
}

//12.Program to find sum of 1st n numbers using recursive function.
#include <stdio.h>
int sum(int n);
void main()
{
    int n;
    scanf("%d",&n);
    printf("The sum = %d",sum(n));
}
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n+sum(n-1);
    }
}

//13.Program to find factorial of a numbers using recursive function.
#include <stdio.h>
unsigned long long fact(int n);
void main()
{
    int n;
    scanf("%d",&n);
    printf("The factorial of %d = %llu",n,fact(n));
}
unsigned long long fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

//14.Program to enter a string and copy it into another without using strcpy() function.
#include <stdio.h>
#include <string.h>
void main()
{
    char s1[1024],s2[1024];
    printf("Enter the string\n");
    gets(s1);
    for(int i = 0; i<strlen(s1); i++)
    {
        s2[i] = s1[i];
    }
    printf("String s1 = %s \n",s1);
    printf("String s2 = %s",s2);
}

//15.Program to explain pointers.
#include <stdio.h>
void main()
{
    int a = 100;
    int *ptra;
    ptra = &a;
    printf("The address of a i.e. %x = pointer ptra i.e %x \n",&a,ptra);
    printf("The value of a i.e. %d = *ptra i.e. %d",a,*ptr);
}



//16.Program to enter student information and display using structures.
#include <stdio.h>
struct student
{
    char name[1024];
    int stand_,rn;
};
void main()
{
    struct student s;
    printf("Enter name of the student\n");
    gets(s.name);
    printf("Enter the standard and roll no of the student\n");
    scanf("%d %d",&s.stand_,&s.rn);
    printf("St\tR_N\tName\n");
    printf("%d\t%d\t%s",s.stand_,s.rn,s.name);
}

17.Program to enter student information and display using structures
and pointers.
#include <stdio.h>
struct student
{
    char name[1024];
    int stand_,rn;
};
void main()
{
    struct student s;
    struct student *ptr;
    ptr = &s;
    printf("Enter name of the student\n");
    gets(ptr->name);
    printf("Enter the standard and roll no of the student\n");
    scanf("%d %d",&ptr->stand_,&ptr->rn);
    printf("St\tR_N\tName\n");
    printf("%d\t%d\t%s",ptr->stand_,ptr->rn,ptr->name);
}

//18.Program to add two complex numbers using structures.
#include <stdio.h>
struct complex
{
    int real,img;
};
void Add(struct complex c1, struct complex c2);
int main()
{
    int choice;
    struct complex c1,c2;
    printf("Enter first complex no\n");
    scanf("%d %d",&c1.real,&c1.img);
    printf("Enter second complex no\n");

    scanf("%d %d",&c2.real,&c2.img);
    Add(c1,c2);
    return 0;
}
void Add(struct complex c1, struct complex c2)
{
    struct complex A;
    A.real= c1.real + c2.real;
    A.img = c1.img + c2.img;
    printf("Addition : %d +i(%d)\n",A.real,A.img);
}


//19.Menu driven program for addition, subtraction and multiplication of two complex numbers using structures and functions.
#include <stdio.h>
struct complex
{
    int real,img;
};
void Add(struct complex c1, struct complex c2);
void Sub(struct complex c1, struct complex c2);
void Multi(struct complex c1, struct complex c2);
int main()
{
    int choice;
    struct complex c1,c2;
    printf("Enter first complex no\n");
    scanf("%d %d",&c1.real,&c1.img);
    printf("Enter second complex no\n");
    scanf("%d %d",&c2.real,&c2.img);
    do
    {
        printf("Enter the operation to perform\n");
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Break\n");
        scanf("%d",&choice);
        if(choice == 1)
        {
            Add(c1,c2);
        }
        else if(choice == 2)
        {
            Sub(c1,c2);
        }
        else if(choice == 3)
        {
            Multi(c1,c2);
        }
        else if(choice == 4)
        {
            break;
        }
        else
        {
            printf("Invalid option\n");
        }
    }
    while(choice != 4);
    printf("End of program\n");
    return 0;
}
void Add(struct complex c1, struct complex c2)
{
    struct complex A;
    A.real= c1.real + c2.real;
    A.img = c1.img + c2.img;
    printf("Addition : %d +i(%d)\n",A.real,A.img);
}
void Sub(struct complex c1, struct complex c2)
{
    struct complex A;
    A.real= c1.real - c2.real;
    A.img = c1.img - c2.img;
    printf("Subtraction : %d - i(%d)\n",A.real,A.img);
}
void Multi(struct complex c1, struct complex c2)
{
    struct complex A;
    A.real = ((c1.real*c2.real)-(c1.img*c2.img));
    A.img = ((c1.real*c2.img)+(c2.real*c1.img));
    printf("Multiplication : %d +i(%d)\n",A.real,A.img);
}







