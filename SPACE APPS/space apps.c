#include<math.h>
void main()
{float treadmill(float weight1,float speed1,float t1);
float CEVIS(float weight1,float speed2,float t2);
float ARED(float weight1,float weight,float t3);
float calory_burnt(float a,float b, float c);
float a,b,c;
float t1,t2,t3;
float weight1;
float speed1,speed2,weight;
char z;
printf("Do you also want to know a routine that suits you\n");
scanf("%c",&z);

printf("Enter your weight in kg,Enter your weight(as on Earth) and not mass!\t");
scanf("%f",&weight1);
printf("Enter the amount of time spent on treadmill in minutes");
scanf("%f",&t1);
printf("Enter the speed of the treadmill in miles per hour");
scanf("%f",&speed1);
if(speed1<12.46)
    printf("Valid speed\n");
else
 {
     printf("Invalid speed, please enter a valid speed");
printf("Enter the speed of the treadmill in miles per hour");
scanf("%f",&speed1);
}
printf("Enter the amount of time spent on pedalling in minutes");
scanf("%f",&t2);
printf("Enter the speed of pedalling in miles per hour");
scanf("%f",&speed2);
if(speed2<5.00)
{printf("Please pedal at a greater speed this does not help to burn much calories");
printf("Enter the new speed of pedalling");
scanf("%f",&speed2);
}
if(speed2>30.00)

    {printf("Please enter a valid speed");
    scanf("%f",speed2);
    }

printf("Enter the amount of weight lifted in kg");
scanf("%f",&weight);
if(weight<1)
{
    printf("Please lift more this does not burn much");
    printf("Enter the new amount of weight lifted");
    scanf("%f",&weight);
}
if(weight>35)
{
    printf("Please lift less as this much is not good for health");
    printf("Enter the new amount of weight lifted");
    scanf("%f",&weight);
}
printf("Enter the amount of time spent on ARED in minutes");
scanf("%f",&t3);
a=treadmill(weight1,speed1,t1);

b=CEVIS(weight1,speed2,t2);

c=ARED(weight1,weight,t3);

calory_burnt(a,b,c);

if(z=='Y'||z=='y')
{
    if(weight<=70)
     {printf("Your perfect routine is\n");
    printf("Treadmill at speed 7 for nearly 40 minutes\n");
    printf("Followed by pedalling for nearly 15 minutes at roughly speed 8\n");
    printf("Finally lifting about 15 kg\n");
    printf("Follow the routine twice in a gap of 30 minutes or so.\n");
    printf("Stay healthy Stay fit");
     }
     else if(70<weight<=100)
     {
         printf("Your perfect routine is\n");
         printf("Treadmill at speed 5 for nearly 30 minutes\n");
         printf("Followed by pedalling for nearly 20 minutes at roughly speed 7\n");
         printf("Finally lifting about 20 kg\n");
         printf("Follow the routine twice in a gap of 40 minutes or so.\n");
        printf("Stay healthy Stay fit");

     }
     else
     {
         printf("Your perfect routine is\n");
         printf("Treadmill at speed 6 for nearly 20 minutes\n");
         printf("Followed by pedalling for nearly 15 minutes at roughly speed 7\n");
         printf("Finally lifting about 25 kg\n");
         printf("Follow the routine twice in a gap of 30 minutes or so.\n");
        printf("Stay healthy Stay fit");

     }
}
}
float treadmill(float weight1,float speed1,float t1)
{float tread;


    if(1.00<speed1<3.00)
        tread=weight1*0.5*t1;

        else if(3.00<speed1<6.00)
        tread=weight1*0.5*t1*3;

        else if(6.00<speed1<9.00)
        tread=weight1*0.5*t1*4;

        else
        tread=weight1*0.5*t1*5;



return tread;
}
float CEVIS(float weight1,float speed2,float t2)
{float CEV;


        if(speed2<5.00)

            CEV=weight1*0.5*t2;


        else if(5.00<speed2<15.00)

            CEV=weight1*0.5*t2*2;


        else if(15.00<speed2<25.00)

            CEV=weight1*0.5*t2*3;

        else

            CEV=weight1*0.5*t2*4;


return CEV;
}

float ARED(float weight1,float weight,float t3)
{float AR;
if(weight<5.00)

            AR=weight1*0.5*t3*2;

        else if(5.00<weight<15.00)
        AR=weight1*0.5*t3*3;

        else if(15.00<weight<25.00)

            AR=weight1*0.5*t3*5;

        else
        AR=weight1*0.5*t3*7;

return AR;}
float calory_burnt(float a,float b,float c)
{
    float sum;
    sum=a+b+c;
    printf("The calory burnt is%f\n",sum);
    return sum;
}
