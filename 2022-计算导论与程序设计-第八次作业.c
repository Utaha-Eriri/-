7-36实验7_1_平均成绩
#include<stdio.h>
int main()
{
 double sum=0;
 double score=0;
 int i,n;
 double a[100]={0} ;
 scanf("%d",&n);
 for(i=0;i<n;i++)
     {
	scanf("%lf",&a[i]);
	sum+=a[i];
     } 
 score=sum/n;
 printf("%.2lf",score);
 return 0;
}
7-38实验7_3_奇数偶数
#include<stdio.h>
int main()
{
 int n, i, j, x,ar1[200] = { 0 },ar2[400] = { 0 };
 scanf("%d", &n);
 for (i = 0; i < n; i++)
  scanf("%d", &ar1[i]);
 for (i = 0,j=0; i < n; i++)
 {
  if (ar1[i] % 2 == 0)
  {
   ar2[j] = ar1[i];
   j++;
  }
 }

 for (i = 0; i < n; i++)
 {
  if (ar1[i] % 2 != 0)
  {
   ar2[j] = ar1[i];
   j++;
  }
 }
  printf("%d", ar2[0]);
 for (i = 1; i < 400; i++)
  if (ar2[i] != 0)
   printf(" %d", ar2[i]);
 printf("\n");
 return 0;
}
7-39实验7_4_向量的内积
#include<stdio.h>
int main()
{
 int n,i,j,z=0;
 int a1[10] = { 0 },a2[10] = { 0 };
 scanf("%d", &n);
 for (i = 0; i < n; i++)
  scanf("%d", &a1[i]);
 for (i = 0; i < n; i++)
  scanf("%d", &a2[i]);
 for (i = 0; i < n; i++)
 {
  j = a1[i] * a2[i];
  z = z + j;
 }
 printf("%d\n", z);
 return 0;
}
7-43实验7_8_最长平台
#include <stdio.h>
int main()
{
 int a[1000] = { 0 }, b[1000] = { 0 }, max = 0, count = 0, n, i = 0, j = 0, k = 0;
 scanf("%d", &n);
 for (i = 0; i < n; i++)
  scanf("%d", &a[i]);
 
 for (i = 0; i < n; i++)
 {
  if (a[i + 1] == a[i])
  {
   count++;
   b[j] = count;
   j++;
  }
  if (a[i + 1] != a[i])
   count = 0;
 }
 max = b[0];
 for (k = 0; k < j; k++)
 {
  if (b[k] > max)
   max = b[k];
 }
 printf("%d\n", max+1);
 return 0;
}
7-51实验9_2_身份证号码最后一位
#include<stdio.h>
int num(char a)
{
 int n;
 n=a-'0';
 return n;
}
 
int main()
{
 int n;
 scanf("%d",&n);
 char a[n][18];
 int i,k,sum=0;
    int b[11]={1,0,10,9,8,7,6,5,4,3,2};
 char j;
 for(i=0;i<n;i++)
 {
  getchar();
  for(k=0;k<18;k++)
  {
   scanf("%c",&a[i][k]);
  }
 }
 for(i=0;i<n;i++)
 {
        sum=0;
  sum=sum+num(a[i][0])*7+num(a[i][1])*9+num(a[i][2])*10+num(a[i][3])*5+num(a[i][4])*8+num(a[i][5])*4+num(a[i][6])*2+num(a[i][7])*1+num(a[i][8])*6+num(a[i][9])*3+num(a[i][10])*7+num(a[i][11])*9+num(a[i][12])*10+num(a[i][13])*5+num(a[i][14])*8+num(a[i][15])*4+num(a[i][16])*2;
  sum=sum%11;
        if(sum==2) j='X';
        else j=b[sum]+'0';
        if(j==a[i][17] || j==a[i][17]) printf("right\n");
        else printf("wrong\n");
 }
 return 0;
}
7-52实验9_3_字母统计
#include <stdio.h>
 
int main()
{
 int cap[26]={0},low[26]={0};
 int i;
 char str[105];
 gets(str);
 for(i=0;str[i]!='\0';i++)
 {
  if(str[i]<='Z'&&str[i]>='A')
      cap[str[i]-65]++;
  else if(str[i]<='z'&&str[i]>='a')
      low[str[i]-97]++;
 }
 for(i=0;i<26;i++)
     if(cap[i]!=0)
         printf("The character %c has presented %d times.\n",i+65,cap[i]);
 for(i=0;i<26;i++)
     if(low[i]!=0)
         printf("The character %c has presented %d times.\n",i+97,low[i]);
 return 0;
}