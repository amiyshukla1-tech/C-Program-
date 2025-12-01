#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,root1,root2,Discriminant,realpart,imaginarypart;

    printf("Enter your cofficient of a,b,and c: \n");
    scanf("%f%f%f",&a,&b,&c);

    Discriminant = b*b - 4*a*c;

    //When roots are real and distinct//

    if(Discriminant>0)
    {
        root1 = (-b + sqrt(Discriminant)) / (2*a);
        root2 = (-b - sqrt(Discriminant)) / (2*a);

        printf("Roots are real and distinct: \n");
        printf("Root1 = %.2f \n",root1);
        printf("Root2 = %.2f \n",root2);
    }

    //When roots are real and equal//
    else if(Discriminant == 0)
    {
        root1=root2= -b/(2*a);
        printf("Roots are real and equal: \n");
        printf("Root1=Root2 = %.2f",root1);
    }

    //When roots are imaginary//
    else
    {
        realpart = -b / (2 * a);
        imaginarypart = sqrt(-Discriminant) / (2 * a);
        printf("Roots are complex:\n");
        printf("Root 1 = %.2f + %.2fi\n", realpart, imaginarypart);
        printf("Root 2 = %.2f - %.2fi\n", realpart, imaginarypart);
    }

    return 0;
}
