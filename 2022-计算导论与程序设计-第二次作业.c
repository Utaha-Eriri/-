7-7实验2_2_公历闰年
#include <stdio.h>
 int main()
 {
    int y;
    scanf("%d",&y);
    if(y%4==0&&y%100!=0||y%400==0)
       printf("Yes\n"); 
    else
       printf("No\n");
    return 0;

 }
7-8实验2_3_表达#include <stdio.h>
#include<stdio.h>
#include<math.h>
int main(void)
{
 double a,b,c,d;
 scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
 if(fabs(b*c-d)<1e-6)
 {
  printf("error");
 }
 else
 {
  printf("%.1lf\n",a/(b*c-d));
 }
 return 0;
}
7-9实验2_4_网购一
#include <stdio.h>
 int main()
 {
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    e=a+b+c+d+10;
    f=a+b+c+d+8;
    g=a+b+c+d+5;
    h=a+b+c+d;
    if(a+b+c+d<20)
       printf("%d\n",e); 
    else if(20<=a+b+c+d&&a+b+c+d<30)
       printf("%d\n",f);
    else if(30<=a+b+c+d&&a+b+c+d<40)
       printf("%d\n",g);
    else if(40<=a+b+c+d)
       printf("%d\n",h);
    return 0;
 }
7-10实验2_5_求三角形的面积
#include <math.h>

 int main()
 {
    double a;
    double b;
    double c;
    double d;
    double e;
    scanf("%lf %lf %lf",&a,&b,&c);
    d=(a+b+c)/2;
    e=sqrt(d*(d-a)*(d-b)*(d-c));
    if(a+b>c&&b+c>a&&a+c>b)
       printf("%.3lf\n",e); 
    else
       printf("The edges cannot make up of a triangle.\n");
    return 0;
 }
7-13实验2_7_统计字符
#include <stdio.h>
#include <string.h>
int main()
{ int i,b,c,d,e,f;
 b=0;c=0;d=0;e=0;
   char a[100];
   gets (a);
   e=strlen(a);
    for(i=0;i<=e;i++)
   {
    if(a[i]>='0'&&a[i]<='9')
    b++;
   }
      for(i=0;i<=e;i++)
   {
    if(a[i]>='a'&&a[i]<='z')
    c++;
   }
     for(i=0;i<=e;i++)
   {
    if(a[i]>='A'&&a[i]<='Z')
    c++;
   }
     for(i=0;i<=e;i++)
   {
    if(a[i]==' ')
    d++;
   }
  f=e-b-c-d;
  printf("%d %d %d %d",c,d,b,f);
    return 0;
}
