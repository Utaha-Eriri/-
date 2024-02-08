6-17实验7_9_简单排序
void bubbleSort(int a[], int n)
{
 
 int i, j, tem;
 for (i = 0; i < n; i++)
 {
  tem = a[i];
  for (j = i - 1; j >= 0 && a[j] > tem; j--)
   a[j + 1] = a[j];
  a[j + 1] = tem;
 }
}
void outputData(int data[], int elementCount)
{
 int i;
 printf("%d", data[0]);
 for (i = 1; i < elementCount; i++)
  printf(" %d", data[i]);
 printf("\n");
}
6-19实验7_12_插入排序
void print(int* a, int n)
{
 int i;
 for (i = 0; i < n - 1; i++)
  printf("%d ", a[i]);
 printf("%d\n", a[n - 1]);
}
void InsertSort(int a[], int n)
{
 int i, xh, j;
 for (i = 1; i < n; i++)
 {
  xh = a[i];
  for (j = i - 1; j >= 0 && a[j] > xh; j--)
   a[j + 1] = a[j];
  a[j + 1] = xh;
  print(a, n);
 }
}
6-21实验7_13_选择排序
void outputData(int data[], int elementCount)
{
 int i;
 for (i = 0; i < elementCount - 1; i++)
  printf("%d ", data[i]);
 printf("%d\n", data[elementCount - 1]);
}
int findMin(int data[], int startLoc, int endLoc)
{
 int i = startLoc;
 int n = endLoc;
 int j,k;
 int min = data[i];
 for (j = i; j < n; j++)
 {
  if (data[j] < min)
  {
   min = data[j];
    k = j;
  }
 }
 return k;
}
void selectSort(int data[], int elementCount)
{
 int i, j, zh;
 int n = elementCount;
 for (i = 0; i < n; i++)
 {
  int j = findMin(data,i,n);
  zh = data[i];
  data[i] = data[j];
  data[j] = zh;
  outputData(data, n);
 }
}
6-22实验7_14_二分查找
int BinarySearch(int a[], int n, int key)
{
 int i, j, k;
 int left = 0;
 int right = n - 1;
 while (left <= right)
 {
  int mid = (right + left) / 2;
  if (a[mid] == key)
   return mid;
  else if (key > a[mid])
   left = mid + 1;
  else
   right = mid - 1;
 }
 return -1;
}
6-23实验7_15_二分查找递归实现
int RecurBinarySearch(int a[], int key, int left, int right)
{
 int mid = (left + right) / 2;
 if (left > right)
  return -1;
 if (a[mid] == key)
  return mid;
 else if (key > a[mid])
 {
  return RecurBinarySearch(a, key, mid + 1, right);
 }
 else
  return RecurBinarySearch(a, key, left, mid - 1);
 return -1;
}
7-47实验8_5_寻找鞍点
#include<stdio.h>
int fack1(int a[100][100], int i, int m, int n)
{
    int j, f=0, max;
     max = a[i][0];
     for (j = 0; j < n; j++)
     {
         if (a[i][j] > max)
         {
             max = a[i][j];
             f = j;
         }
     }
     return f;
}
int fack2(int a[100][100], int j, int m, int n)
{
    int i, f = 0;
    int min = a[0][j];
    for (i = 0; i < m; i++)
    {
        if (a[i][j] < min)
        {
            min = a[i][j];
            f = i;
        }
    }
    return f;
}
int main()
{
    
    int m, n, i, j;
    int a[100][100] = { 0 };
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < m; i++)
    {
        int f1 = fack1(a, i, m, n);
        
        int f2 = fack2(a, f1, m, n);
        
        if (f2 == i)
        {
            printf("The saddle point is (%d,%d)=%d.\n", i, f1, a[i][f1]);
            return 0;
        }
    }
    printf("There is no saddle point in the matrix.\n");
    return 0;
}
7-49实验8_7_蛇形矩阵
#include<stdio.h>
int main()
{
 int n;
 scanf("%d",&n);
 int a[n][n];
 int c=1,k=1;
 int i=0,j=0;
 a[0][0]=1;
 while(k<n*n)
 {
  k++;
  if(c==1)//下
  {
   i++;
   a[i][j]=k;
   if(j==0)
   c=2;
   else if(j==n-1)
   c=4;
 
  }
  else if(c==2)//右上
  {
   i--;
   j++;
   a[i][j]=k;
   if(i==0&&j!=n-1)
   c=3;
   else if(j==n-1)
   c=1;
   else
   c=2;
 
  }
  else if(c==3)//右
  {
   j++;
   a[i][j]=k;
   if(i==0)
   c=4;
   else if(i==n-1)
   c=2;
 
  }
  else if(c==4)
  {
   i++;
   j--;
   a[i][j]=k;
   if(j==0&&i!=n-1)
   c=1;
   else if(i==n-1)
   c=3;
   else
   c=4;
 
  }
  
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d",a[i][j]);
   if(j==n-1)
   printf("\n");
   else
   printf(" ");
  }
 }
 return 0;
}