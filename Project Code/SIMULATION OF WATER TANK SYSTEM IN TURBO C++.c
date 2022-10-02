/*SIMULATION OF WATER TANK SYSTEM IN TURBO C++ */
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
float func(float,float,float,float);
float t,t1,tn,H1=0,h2,k1,k2,k3,k4,q0,q1,A,h,H2,d,ih,c;
int j,ht,n,i;
clrscr();
cout<<" SIMULATION OF WATER TANK SYSTEM\n\n";
cout<<"Ratio for tank height with respect to level of water in the tank is, 26:1\n\n";
cout<<"Enter the height for tank in foot(ft):";
cin>>ht;
ht=100+ht;
j=ht-1;
n=100;
clrscr();
cout<<" MODELLING AND SIMULATION OF WATER TANK SYSTEM\n\n";
cout<<"Enter the initial value of time in second;";
cin>>t1;
cout<<"Enter the initial level of water in foot(ft):";
cin>>H1;
cout<<"Enter the time interval in second(s):";
cin>>h;
h2=h/2;
cout<<"Enter the value of inlet flow rate of water in (ft3/s) q0:";
cin>>q0;
cout<<"Enter the value of outlet flow rate of waterin (ft3/s) q1:";
cin>>q1;
cout<<"Enter the c/s area of the tank in (ft2):";
cin>>A;
clrscr();
line(230,80,300,80);
line(300,80,300,95);
line(230,85,295,85);
line(295,85,295,95);
line(250,100,250,ht);
line(250,ht,400,ht);
line(400,ht,400,100);
line(400,ht-10,470,ht-10);
line(470,ht-10,470,ht);
line(400,ht-5,465,ht-5); 
line(465,ht-5,465,ht);
H2=H1;
ih=H1;
cout<<" SIMULATION OF WATER TANK SYSTEM\n\n";
cout<<"change in height with respect to time is as follows:\n";
 for(int s=96;s<ht;s=s+3)
 {
 putpixel(295,s,1);
 putpixel(297,s+1,1);
 putpixel(299,s,1);
 delay(25);
 }
 for(t=t1;;t+=h)
 {
 i=0;
 if(j>=n)
 {
 k1=h*func(q0,q1,H1,A);
 k2=h*func(q0,q1,H1+(k1/2),A);
 k3=h*func(q0,q1,H1+(k2/2),A);
 k4=h*func(q0,q1,H1+k3,A);
 H1=H1+(k1+k2*2+k3*2+k4)/6;
 d=(26*(H1-H2));
 if(H2==ih&&H2!=0)
 {
 c=0;
 while(c<=d)
 {
 setcolor(1);
 line(251,j,399,j);
 c++;
 j--;
 delay(50);
 if(j<n)
 {
 cout<<"Overflow";
 n=1;
 break;
 }
 }
 for(int p=ht;p<ht+40;p=p+3)
 {
 putpixel(465,p,1);
 putpixel(467,p+1,1);
 putpixel(469,p,1);
 delay(100);
 }
 getch();
 if(n==1)
 {
 break; 
}
 }
 cout<<"t="<<t+h<<"\t"<<"H="<<H1<<"\n";
 c=0;
 while(c<=d)
 {
 setcolor(1);
 line(251,j,399,j);
 j--;
 c++;
 delay(50);
 if(j<n)
 {
 cout<<"Overflow";
 n=1;
 break;
 }
 }
 for(int p=ht;p<ht+40;p=p+3)
 {
 putpixel(465,p,1);
 putpixel(467,p+1,1);
 putpixel(469,p,1);
 delay(100);
 }
 H2=H1;
 getch();
 if(n==1)
 break;
 }
 else
 {
 cout<<"overflow";
 getch();
 }
 }
 }
 float func(float q0,float q1,float H,float A)
 {
 float ftH;
 ftH=(q0-q1)/A;
 return (ftH);
 getch();
 }