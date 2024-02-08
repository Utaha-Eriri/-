6-24实验8_3_设计函数
void findMin(int M[][MAX], int x[], int n, int m)
{
 int i, j, min;
 for (i = 0; i < m; i++)
 {
  min = M[0][i];
  for (j = 1; j < n; j++)
   if (M[j][i] < min)
    min = M[j][i];
  x[i] = min;
 }
}
6-28实验10_1_英超一
int  getScore(char * s) 
{
    int sc=0;
    while(*s!='\0')
    {
        if(*s=='W')
        {
            sc+=3;
            s++;
        }
        else if(*s=='D')
        {
            sc+=1;
            s++;
        }
        else if(*s=='L')
        {
            s++;
        }
    }
    return sc;
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
7-45实验8_2_推销员的便条
#include<stdio.h>
int main()
{
 int n,i,j;
 float a[100][3],b[6][5]={0};
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  for(j=0;j<3;j++)
    scanf("%f",&a[i][j]);
 }
 for(i=0;i<n;i++)
 {
  if(a[i][0]==1)
  {
   if(a[i][1]==1)
     b[0][0]+=a[i][2];
   else if(a[i][1]==2)
     b[1][0]+=a[i][2]; 
   else if(a[i][1]==3)
     b[2][0]+=a[i][2]; 
   else if(a[i][1]==4)
     b[3][0]+=a[i][2]; 
   else if(a[i][1]==5)
     b[4][0]+=a[i][2]; 
  }
     else if(a[i][0]==2)
  {
   if(a[i][1]==1)
     b[0][1]+=a[i][2];
   else if(a[i][1]==2)
     b[1][1]+=a[i][2]; 
   else if(a[i][1]==3)
     b[2][1]+=a[i][2]; 
   else if(a[i][1]==4)
     b[3][1]+=a[i][2]; 
   else if(a[i][1]==5)
     b[4][1]+=a[i][2]; 
  }
  else if(a[i][0]==3)
  {
   if(a[i][1]==1)
     b[0][2]+=a[i][2];
   else if(a[i][1]==2)
     b[1][2]+=a[i][2]; 
   else if(a[i][1]==3)
     b[2][2]+=a[i][2]; 
   else if(a[i][1]==4)
     b[3][2]+=a[i][2]; 
   else if(a[i][1]==5)
     b[4][2]+=a[i][2]; 
  }
  else if(a[i][0]==4)
  {
   if(a[i][1]==1)
     b[0][3]+=a[i][2];
   else if(a[i][1]==2)
     b[1][3]+=a[i][2]; 
   else if(a[i][1]==3)
     b[2][3]+=a[i][2]; 
   else if(a[i][1]==4)
     b[3][3]+=a[i][2]; 
   else if(a[i][1]==5)
     b[4][3]+=a[i][2]; 
  }
 }
 for(i=0;i<5;i++)
 {
  b[i][4]=b[i][0]+b[i][1]+b[i][2]+b[i][3];
 }
 for(j=0;j<5;j++)
   b[5][j]=b[0][j]+b[1][j]+b[2][j]+b[3][j]+b[4][j];
 for(i=0;i<6;i++)
 {
  for(j=0;j<5;j++)
        {printf("%.1f",b[i][j]);
        if(j<4) printf("\t");}
  printf("\n");
 }
 return 0;
}
7-48实验8_6_矩阵变换
#include<stdio.h>
int main()
{
    int n,i,j,temp;
 
    scanf("%d",&n);
    int a[n][n];//原矩阵
    int sum[n];//存每行元素和
    
    //读入数据并统计每行的平均值
    for(i=0;i<n;i++)
    {
        sum[i] = 0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            sum[i] =sum[i] + a[i][j];
        }
    }
    
    //进行行变换
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(sum[j]>sum[j+1])
            {
                temp = sum[j];
                sum[j] = sum[j+1];
                sum[j+1] = temp;   //交换每行元素和
                for(int m=0;m<n;m++)
                {
                    temp = a[j][m];
                    a[j][m] = a[j+1][m];
                    a[j+1][m] = temp;  //交换行元素
                }
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("%d\n",a[i][n-1]);
    }
    
    return 0;
}