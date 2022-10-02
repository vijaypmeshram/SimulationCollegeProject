/*SIMULATION OF HEATING WATER TANK SYSTEM IN TURBO C++*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gdriver=DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TURBOC3\\BGI");
float func(float,float,float);
float t1,p,q,t,tn,T1=25,k1,h2,k2,k3,k4,U,Cp,Ts,M,c,d,ih,T2,A,h,pow,x;
int j,ht,n,i;
clrscr();
h=0.2;
cout<<"Enter the height for tank in meter(m):";
cin>>ht;
ht=100+ht;
j=ht-1;
printf("\nEnter the value of temp Ts in kelvin: ");
scanf("%f",&Ts);
printf("\nEnter the value of area A m2:");
scanf("%f",&A);
printf("\nEnter the value of mass flow M:");
scanf("%f",&M);
printf("\nEnter the initial time t1 and and inital temp T1 in kelvin:");
scanf("%f%f",&t1,&T1);
printf("\nEnter the value of last term of tn:");
scanf("%f",&tn);
printf("\nEnter the value of Cp inJ/kg/k:");
scanf("%f",&Cp);
printf("\nEnter the value of U in wattm2/k:");
scanf("%f",&U);
clrscr();
line(230,80,300,80);
line(300,80,300,95);
line(230,85,295,85);
line(295,85,295,95);
line(250,100,250,ht);
line(250,ht,400,ht);
line(400,ht,400,100);
line(220,110,220,ht-10);
line(220,ht-10,250,ht-10);
line(220,110,250,110);
line(400,ht-10,430,ht-10);
line(430,ht-10,430,110);
line(430,110,400,110);
cout<<" SIMULATION OF WATER HEATING TANK SYSTEM\n\n";
cout<<"change in TEMPERATURE with respect to time is as follows:\n";
for(p=109;p<=ht-10;p++)
{
setcolor(6);
line(221,p,249,p);
line(401,p,429,p);
}
for(q=99;q<=ht;q++)
{
setcolor(1);
line(251,q,399,q);
}
 for(t=t1;t<tn;t+=h)
 {
k1=func(x,Ts,T1);
k2=func(x,Ts,T1+(k1/2));
k3=func(x,Ts,T1+(k2/2));
k4=func(x,Ts,T1+k3);
T1=T1+(k1+2*k2+k3*2+k4)/6;
x=(-(U*A)/(Cp*M));
 while(T1>=Ts)
 {
 setcolor(1);
 line(251,j,399,j);
 T1++;
 j--;
 delay(25);
}
printf("\nt=%5.1f,T=%6.2f",t,T1);
}
getch();
}
float func(float x,float Ts,float T1)
{
float ftT;
ftT=(pow(2.7128,x)*(Ts-T1));
return(ftT);
} 