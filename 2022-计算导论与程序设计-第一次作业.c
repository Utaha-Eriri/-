7-1 实验1_1_求两数的和与差
#include <stdio.h>
 int main()
 {
 	int a;
	int b;
	int c;
	int d;
	scanf("%d%d",&a,&b);
	c=a+b;
	d=a-b;
	printf("The sum is %d and the difference is %d.\n",c,d);
	return 0;
 }

 7-2 实验1_2_基本类型数据的输入和输出
 #include <stdio.h>
 int main() 
{
	char a;
	scanf("%c",&a);
	int b;
	scanf("%d",&b);
	float c;
	scanf("%f",&c);
	printf("The sex is %c, the age is %d, and the height is %f.\n",a,b,c);
	return 0;
}

7-3 实验1_3_四则运算
#include <stdio.h>
 int main() 
{
	double a,b,c,d;
	double e; 
	scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
	e=(a+b)*(a-b)+c/d;
	printf("%lf",e);
	return 0;
}

7-4 实验1_4_求圆的周长与面积
#include <stdio.h>
#define PI 3.14159265
 int main() 
{
	double R;
	scanf("%lf",&R);
	double a,b;
	a=2*PI*R;
	b=PI*R*R;
	printf("The perimeter is %.4lf, the area is %.4lf.\n",a,b);
	return 0;
}

7-5 实验1_5_数据类型
#include <stdio.h>
 int main() 
{
	char a;
	scanf("%c",&a);
	short b;
    scanf("%hd",&b);
    int c;
    scanf("%d",&c);
	long d;
	scanf("%ld",&d);
	long long e;
	scanf("%lld",&e);
	float f;
	scanf("%f",&f);
	double g;
	scanf("%lf",&g);
	printf("The 'char' variable is %c, it takes %zu byte.\n",a,sizeof(char));
	printf("The 'short' variable is %hd, it takes %zu bytes.\n",b,sizeof(short));
	printf("The 'int' variable is %d, it takes %zu bytes.\n",c,sizeof(int));
	printf("The 'long' variable is %ld, it takes %zu bytes.\n",d,sizeof(long));
	printf("The 'long long' variable is %lld, it takes %zu bytes.\n",e,sizeof(long long));
	printf("The 'float' variable is %f, it takes %zu bytes.\n",f,sizeof(float));
	printf("The 'double' variable is %lf, it takes %zu bytes.\n",g,sizeof(double));
	return 0;
	
}
