7-18实验3_1_简单问题
#include<stdio.h>
int main()
{
    int a,b,i,j,sum,max,min;
    j=1;
    sum=0;
    max=0;
    min=0;
    scanf("%d",&a);
        for(i=1;i<=a;i++)
        {
            scanf("%d",&b);
            while(j<2)
            {
                min=b;
                j++;
            }
            sum=sum+b;
            
            if(b<=min)
                min=b;
            if(b>=max)
                max=b;
            }
    printf("%d %d %d",sum,max,min);
}
7-19实验3_2_密码文
#include<stdio.h>
int main()
{
    char t,b;
    while((t=getchar())!='\n')
    {
        if(t<='z'&&t>='a')
        {
            if(t<='w')
            {b=t+3;
            printf("%c",b);}
            
            if(t>'w')
            {b=t-23;
            printf("%c",b);}}
        if(t<='Z'&&t>='A')
        { 
            if(t<='W')
            {b=t+3;
            printf("%c",b);}
            
            if(t>'W')
            {b=t-23;
            printf("%c",b);}
             }
    }
   return 0;
}
7-20实验3_3_确定成绩等级
#include<stdio.h>
 int main()
 {
 	int x;
 	scanf("%d",&x);
 	if(x<0||x>100)
 	{
 		printf("The score is out of range!\n");
 	}
 	else if(x>=90)
 	{
 		printf("A\n");
 	}
 	else if(x>=80&&x<90)
	 {
	 	printf("B\n"); 
	 } 
 	else if(x>=70&&x<80)
	 {
	 	printf("C\n"); 
	 } 
 	else if(x>=60&&x<70)
	 {
	 	printf("D\n"); 
	 } 
 	else if(x<60)
	 {
	 	printf("E\n"); 
	 } 
 return 0;		
 } 
7-21实验3_4_质数统计
#include<stdio.h>
int main()
{
    int a,b,c,i,j,k=0;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        scanf("%d",&c);
        k=0;
        while(c!=-1) 
        {
            int y=1;
   if(c==1)y=0;
   else if(c==2)y=1;
   else{
    for(j=2;j<c;j++){
     if(c%j==0){
      y=0;
      break; 
     }
    }
   }
   if(y==1)k++;
            scanf("%d",&c);
        }
        printf("%d\n",k);
    }
    return 0;
}
7-24实验3_7_数字拆分
#include<stdio.h>
int main()
{
    char ch;
    int i=0;
 scanf("%c",&ch);
 while(ch!='\n')
    {
    i++;
    if(i==1)
    printf("%c",ch); 
    else if(i>1)
    printf(" %c",ch);
    scanf("%c",&ch);
    }
 printf("\n");
 return 0; 
}