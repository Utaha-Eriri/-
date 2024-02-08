7-23实验3_6_打印图形一
#include <stdio.h>
 int main()
 {
 	int l,r,n=1,i=1;
 	scanf("%d %d",&l,&r);
 	while(n<=l)
 	{
 		 while(i<=r)
 	    {
 		printf("|*****");
 		i++;
 	    }
 	    printf("|\n");
 		i=1;
 		while(i<=r)
 	    {
 		printf("|  |  ");
 		i++;
 	    }
 	    printf("|\n");
 	    i=1;
 	    while(i<=r)
 	    {
 		printf("|--+--");
 		i++;
 	    }
 	    printf("|\n");
 	    i=1;
 	    while(i<=r)
 	    {
 		printf("|  |  ");
 		i++;
 	    }
 	    printf("|\n");
 	    i=1;
 	n++;
7-25实验3_8_位数对调
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int n,t=0;
    while(scanf("%d",&n)==1)
    {
        if(n%10==0)
        {
            printf("The number cannot be changed.");
        }
        else if(n<10)
        printf("%d",n);
        else
        {
           while(n>=10)
           {
             t=n%10;
             n/=10;
             printf("%d",t);
           }
               printf("%d",n);
        }
    }
    system("pause");
    return 0;
}
7-30实验3_13_最大公约数和最小公倍数
#include<stdio.h>
int main() 
{
 int n = 0;
 int m = 0;
 int p1 = 0;
 int p2 = 0;
 scanf("%d%d", &n, &m);
  
 if (n < m) {
  n = m ^ n;
  m = m ^ n;
  n = m ^ n;
 }
 p2 = n * m;
 
 while (n % m) {
  p1 = n % m;
  n = m;
  m = p1;
 }
 p2 /= p1;
 printf("%d %d",p1,p2);
return 0;
}
7-34实验4_4_进制转换一
#include <stdio.h>
int main()
{
 int n,i,result=0;
 scanf("%d",&n);
 for(i=1;n>0;i*=2,n/=10)
  result+=(n&1)*i;
 printf("%d",result);
 return 0; 
 } 
7-5实验4_8_斐波那契数列
#include <stdio.h>
int main()
{
 int n, i, a=1,b=1,c=0;
 scanf("%d", &n);
 for (i = 3; i <= n; i++)
 {
        a=a%101;
        b=b%101;
  c = a + b;
  a = b;
  b = c;
 }
 printf("%d", c % 101);
 return 0;
}
7-6实验4_12_遍历搜寻
#include <stdio.h>
#include <math.h>
int main()
{
 int i,j,a,b,c,sum,right=0,cnt=0,x=1;
 scanf("%d %d %d", &a, &b, &c);
 for (i=a;i<=b;i++)
 {
  sum=0;
  for(j=1;j<i;j++)
  {
   if(i%j==0)
   {
    sum += j;
   }
  }
  if ((int)fabs((int)(i -sum)) <= c)
  {
            cnt++;
            if(cnt==(5*x-4))
            {
       printf("%d", i);
            }
            else
            {
                printf("\t%d",i);
            }
   right = 1;
            if (cnt%5==0)
            {
                printf("\n");
                x++;
            }
        }
 }
 if (right == 0)
