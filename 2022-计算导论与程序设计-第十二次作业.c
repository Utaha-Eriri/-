6-14实验6_7_最大公约数
int GCD(int a, int b)
{
 if (a % b == 0)
  return b;
 else
  return GCD(b, a % b);
}
6-31实验10_4_设计函数 locatesubstr
char* locatesubstr(char* str1, char* str2)
{

 int i = 0;
 if (*str2 != '\0')
 {
  while (*str1 != '\0')
  {
   for (i = 0; *(str1 + i) == *(str2 + i); i++)
    if (*(str2 + i + 1) == '\0')
     return str1;
   str1++;
  }
  return NULL;
 }
 else
  return str1;
}
7-21实验3_4_质数统计
#include<stdio.h>
int fack(int n)
{
 int i = 2;
 for (i = 2; i < n; i++)
  if (n % i == 0)
   return 0;
 return 1;
}
int main()
{
 int arr[10][1000] = { 0 };
 int atr[10] = { 0 };
 int n, i,j,zh;
 scanf("%d", &n);
 for (i = 0; i < n; i++)
 {
  j = 0;
  scanf("%d", &zh);
  while (zh != -1)
  {
   arr[i][j] = zh;
   j++;
   if (fack(zh) == 1)
    atr[i]++;
   scanf("%d", &zh);
  }
 }
 for (i = 0; i < n; i++)
  printf("%d\n",atr[i]);
 return 0;
}
7-30实验3_13_最大公约数和最小公倍数
#include<stdio.h>
int max(int x,int y)
{
 int w;
 
 if(y==1||y==0)
 return y;
 else
 {
  if((x%y)==0)
  { 
   w=y;
  }
        else{
  w=max(y,x%y);
  }
 }
 return w;
}
 
 
int min(int x,int y,int m)
{
 int n;
 n=y/m;
    n=n*x;
 return n;
}
 
int main()
{
 int max(int x,int y);
 int min(int x,int y,int m);
 int x,y,m,n;
 int t;
 scanf("%d %d",&x,&y);
 if(x<y)
 {
  t=x;
  x=y;
  y=t;
 }
 m=max(x,y);
 n=min(x,y,m);
 printf("%d %d",m,n);
 return 0;
}
7-3实验4_8_斐波那契数列
#include<stdio.h>
int main ()
{
    int a,i,d,m,b,c=0,p=0;
    scanf("%d",&a);
    m=1;
    b=1;
    for(i=3;i<=a;i++)
    {
        
        c=(m+b)%101;
        b=m;
        m=c;
        
    }
    
    
    
    printf("%d\n",c);}
7-4合并升序数组
#include <stdio.h>
int main()
{
int n1,n2,a[100],b[100],c[200],i,j,k;
scanf("%d%d",&n1,&n2) ;
    while(1)
    {
        scanf("%d",&a[i]);
        if(a[i]!=0)
            i++;
        if(a[i]==0)
            break;
        
        
    }
    
    while(1)
    {
        scanf("%d",&b[j]);
        if(b[j]!=0)
            j++;
        if(b[j]==0)
            break;
    }
    
i=0;
j=0;
k=0;while(i<n1&&j<n2)
{
if(a[i]<b[j])
{
c[k]=a[i];
k++;
i++;
}
else
{
c[k]=b[j];
k++;
j++;
}
}
while(i<n1)
{
c[k]=a[i];
k++;
i++;
}
while(j<n2)
{
c[k]=b[j];
k++;
i++;
}
for(i=0;i<(n1+n2);i++)
printf("%d ",c[i]);
return 0;
}