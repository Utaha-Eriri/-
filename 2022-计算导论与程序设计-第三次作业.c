7-12实验2_6_幂计算
#include <stdio.h> 
 int main()
 {
     int x,y,c=1;
     scanf("%d %d",&x,&y);
     int i=0;
     while(y>i)
     {
     	   c=c*x;
     	   i++;
     }
           printf("%d\n",c);
 return 0;
}
7-14实验2_8_打印实心菱形
#include <stdio.h>
 int main()
 {
 	int a,b,c,n=0;
 	scanf("%d",&n);
 	for(a=0;a<n;a++)
    {
    	for(b=0;b<n-a-1;b++)
    	{
		     printf(" ");
    	}
    	for(c=0;c<2*a+1;c++)
    	{
    		printf("*");
    	}
    	printf("\n");
        }
    for(a=0;a<n-1;a++)
	    {
	   	for(b=0;b<=a;b++)
	   	{
	   		printf(" ");
	   	}
	   	for(c=0;c<2*(n-1-a)-1;c++)
	   	{
	   		printf("*");
	   	}
	   	printf("\n");
	    }      
    return 0;
}
7-15实验2_9_数列求和
#include<stdio.h>
int main()
{
    long long a=0,n,An=0,N=0,M=0;
    scanf("%lld",&n);
    if(n==1&&n==2)
        printf("0");
    else
        while(a<=n-3)
        {
            N=(a+1)*(a+2)*(a+3);
            M=N+M;
            An=An+M;
            a++;
        }
    printf("%lld",An);
    return 0;
}
7-16实验2_10_数字统计一
#include<stdio.h>
int main()
{
 int x,n;
 double f,g,h,a,b,c;
    scanf("%d",&x);
 while(x!=0){
  if((x%3==0&&x%5==0)||(x%5==0&&x%7==0)||(x%3==0&&x%7==0))
  {n++;}
  else if(x%3==0)
  {a++;
  n++;}
  else if(x%5==0) 
  {b++;
  n++;}
  else if(x%7==0)
  {c++;
  n++;}
  else
  {n++;}
    scanf("%d",&x);} 
 f=(a/n)*100;
 g=(b/n)*100;
 h=(c/n)*100;
 printf("%.2lf%%\n%.2lf%%\n%.2lf%%",f,g,h);
 return 0;
}
7-17实验2_11__双11优惠
#include<stdio.h>
int main()
{
 int t;
 scanf("%d",&t);
 int n,x,m,i,l;
 i=1;
 l=1;
 while(l<=t){
 scanf("%d",&n);
 while(i<=n){
 scanf("%d",&x);
 m=m+x;
 i++;}
 if(m<100){
 m=m;}
 else if(m>=100&&m<200){
 m=m-30;}
 else if(m>=200&&m<300){
 m=m-70;}
 else if(m>=300&&m<400){
 m=m-110;}
 else if(m>=400){
 m=m-160;}
 printf("%d\n",m);
    l++;
 m=0;
 i=1;}
 return 0;
}