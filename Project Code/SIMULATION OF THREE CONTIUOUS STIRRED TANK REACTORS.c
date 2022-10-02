/*SIMULATION OF THREE CONTIUOUS STIRRED TANK REACTORS IN
SERIES WITH VARIABLE HOLDUP IN TURBO C++*/

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
float func(float,float,float,float,float,float);
float funcc(float,float,float,float);
void drawTank(int);
float
t,t1,tn,h2,k1,k2,k3,k4,CA0,CA1,CA,v,TCA0,k0,e=2.72,R=1.99,E,k11,k22,k33,k44,h,H2,f,L1,k,L,A
;
int N,j,n,i,c,temp[10],volm[10],area[10],level[10],l[10];
int stx,sty,w,ht;
stx=310;sty=46;w=80,ht=100;
clrscr();
cout<<" SIMULATION OF CSTR CONNECTED IN SERIES\n:";
cout<<"Enter the number of reactor;";
cin>>N;
if(N<=0)
{
cout<<"Plese enter correct number of reactor!";
getch();
exit(0);
}
cout<<"Enter the area in feet2(ft2), volm in feet3(ft3) and initial level of mixture in feet(ft) and
temp of mixture in degree farade (F) for each reactor\n";
for(i=0;i<N;i=i+1)
{
cout<<"A"<<i+1<<":";
cin>>area[i];
cout<<"v"<<i+1<<":";
cin>>volm[i];
cout<<"L"<<i+1<<":";
cin>>level[i];l[i]=level[i];
cout<<"T"<<i+1<<":";
cin>>temp[i];
}
cout<<"Enter the value of frequency factor in hour-1(hr-1);";
cin>>k0;
cout<<"Enter the activation energy in {Btu/lb.mol}:";
cin>>E;
cout<<"Enter the flow rate in (ft3/hr):";line(stx,sty,stx,sty+ht);
line(stx,sty+ht,stx+w,sty+ht);
line(stx+w,sty+ht,stx+w,sty);
stx=stx+w+20;
sty=sty+ht;
}
setcolor(0);
line(stx-20,sty-13,stx+30,sty-13);
line(stx-20,sty-6,stx+22,sty-6);
line(stx+30,sty-13,stx+30,sty);
line(stx+22,sty-6,stx+22,sty);
}