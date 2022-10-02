/*SIMULATION OF SINGLE CONTIUOUS STIRRED TANK IN TURBO C++*/
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
float t0,CA0,h,t,tn,CA,k1,k2,k3,k4,ht,q,ih,CA1,h2,t1;
float func(float, float);
int j,n,i;
cout<<"Enter the height for tank in foot(ft):";
cin>>ht;
ht=100+ht;
j=ht-30;
n=100;
cout<<"ENter the time interval in second(s):";
cin>>h;
h2=h/2;
printf("\nEnter the initial value of t(minimium) and CA(kgmole/m3):");
scanf("%f%f",&t0,&CA0);
printf("\nEnter the value of last term of tn:");
scanf("%f",&tn);
CA=CA0;
printf("\n t(min) CA(kgmole/m3) \n");
clrscr();
line(230,80,300,80);
line(300,80,300,95);
line(230,85,295,85);
line(295,85,295,95);
line(250,100,250,ht);
line(250,ht,400,ht);
line(400,ht,400,100);
CA1=CA;
ih=CA1;
cout<<" SIMULATION OF CSTR SYSTEM\n\n";
cout<<"change in concentration with respect to time is as follows:\n";
 for(q=99;q<=ht;q++)
{
setcolor(1);
line(251,q,399,q);
}
 for(t=t0;t<tn;t+=h)
 {

 k1=func(t,CA);
k2=func(t,CA+(k1/2));
k3=func(t,CA+(k2/2));
k4=func(t,CA+k3);
CA=CA+(k1+2*k2+k3*2+k4)/6;
 while(CA0<=CA)
 {
 setcolor(1);
 line(251,j,399,j);
 CA++;
 j--;
 delay(50);
 }
 printf("\nt=%5.1f,CA=%6.2f",t,CA);
}
getch();
}
float func (float t,float CA)
{
float ftCA;
ftCA=(0.9-CA);
return (ftCA);
 } 