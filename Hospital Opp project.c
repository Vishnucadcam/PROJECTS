#include <stdio.h>
#include<string.h>

struct Patient
{
    char name[50];
    int age;
    char problem[100];
};
enum Doctor
 {
    CARDIOLOGIST=1,
    DENTIST,
    NEUROLOGIST,
    ORTHOPEDIC
};
int main()
{
    struct Patient p;
    int choice,available;
    int fees=0,c,amount,n,o,d,amount2,z;
    int l,k,l1;
    int p1=0;
    printf(" Hospital Appointment\n");
    printf("Enter Patient Name: ");
    scanf("%s",p.name);
    printf("Enter Age: ");
    scanf("%d",&p.age);
    printf("Select Doctor for Appointment:\n");
    printf("1.Cardiologist\n2.Dentist\n3.Neurologist\n4.Orthopedic\n");
    printf("Enter choice:\n");
    scanf("%d",&choice);


   switch (choice)
    {
        case CARDIOLOGIST:
            printf("Available Doctors\n");
            printf("1-Dr.Ramesh\n");
            printf("Doctor:Cardiologist\n");
            printf("2-Dr.Suresh\n");
            printf("Doctor:Cardiologist\n");
            scanf("%d",&z);
            if (z==1)
            {
            printf("\nfees:500\n");
            i:
            scanf("%d",&c);
            if(c==500)
            {

              printf("Thank You!\n");
            }
            else if(c>500)
            {
              amount=c-500;
              printf("Take your balance amount:%d\n",amount);
              printf("Thank You!\n");

            }
            else if(c<500)
            {
                amount2=amount2+c;
                k=500-amount2;

                if(k!=0)
                {
                printf(" need to give balance amount:%d\n",k);
                printf("Pay The balance amount to confirm your appointment!\n");
                }
            if(k!=500)
            {
                goto i;
            }
            else
            {

                printf("THANK YOU");
            }
            }
            }



            break;
        case DENTIST:
            printf("Dr.Priya\n");
            printf("Doctor:Dentist\n");
            printf("fees:300\n");
            scanf("%d",&d);
            if(d==300)
            {
             printf("Thank You!\n");
            }
            else if(d>300)
            {
              amount=d-300;
              printf("Take your balance amount:%d\n",amount);
              printf("Thank You!\n");

            }
            else if(d<300)
            {
                amount2=d-300;
                printf("balance amount:%d\n",amount2);
                printf("Thank You\n");
            }
            break;
        case NEUROLOGIST:
            printf("Dr.Karthick\n");
            printf("Doctor:Neurologist\n");
            printf("fees:700\n");
            scanf("%d",&n);
            if(n==700)
            {
             printf("Thank You!\n");
            }
           else if(n>700)
            {
              amount=n-700;
              printf("Take your balance amount:%d\n",amount);
              printf("Thank You!\n");

            }
            else if(n<700)
            {
                amount2=n-700;
                printf("balance amount:%d\n",amount2);
                printf("Thank You!\n");
            }
            break;
        case ORTHOPEDIC:
            printf("Dr.John\n");
            printf("Doctor:Orthopedic\n");
            printf("fees:400\n");
            scanf("%d",&o);
            if(o==400)
            {
             printf("Thank You!\n");
            }
            else if(o>400)
            {
              amount=o-400;
              printf(" Take your balance amount:%d\n",amount);
              printf("Thank You!\n");

            }
            else if(o<400)
            {
                amount2=o-400;
                printf("balance amount:%d\n",amount2);
                printf("Thank You!\n");
            }
        default:
            printf("Appointment not booked\n");
    }

    printf("\nAppointment Confirmed\n");
    printf("Patient Name:%s\n",p.name);
    printf("Age:%d\n",p.age);
    printf("Problem:%s\n",p.problem);
    printf("Your Appointment has been booked");
}
