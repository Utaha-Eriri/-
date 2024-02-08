6-32实验10_5_指针数组初步
int getString(char* source, char* strPtr[])
{

 int i=0,j,k=0;
 while (source[i] != '\0')
 {
  if (source[i] == ' ')
   for (; source[i] == ' '; i++)
    source[i] = '\0';
  else
  {
   strPtr[k] = &source[i];
   for (;source[i] != ' ' && source[i] != '\0'; i++)
    ;
   k++;
  }
 }
 return k;
}
7-54实验10_6_动态分配内存_1
#include<stdio.h>
#include<stdlib.h>
int main()
{
 int* a, i, n;
 scanf("%d", &n);
 a = (int*)malloc(sizeof(int) * n);
 for (i = 0; i < n; i++)
  scanf("%d", &a[i]);
 for (i = 0; i < n; i++)
  a[i] = a[i] * 10 * (-1);
 printf("%d", a[0]);
 for (i = 1; i < n; i++)
  printf(" %d", a[i]);
 printf("\n");
 return 0;
}
7-55实验10_7_动态分配内存_2
#include<stdio.h>
#include<stdlib.h>

int main()
{
 
 int** a, m, n,i,j;
 scanf("%d %d", &n, &m);
 
 a = (int**)malloc(sizeof(int*) * n);
 for (i = 0; i < n; i++)
  a[i] = (int*)malloc(sizeof(int) * m);
 
 for (i = 0; i < n; i++)
  for (j = 0; j < m; j++)
   scanf("%d", &a[i][j]);
 
 for (i = 0; i < n; i++)
  for (j = 0; j < m; j++)
   a[i][j] *= (-10);
 
 for (i = 0; i < n; i++)
 {
  printf("%d",a[i][0]);
  for (j = 1; j < m; j++)
   printf(" %d", a[i][j]);
  printf("\n");
 }

 for (i = 0; i < n; i++)
  free(a[i]);
 free(a);
 return 0;
}
7-56实验10_9_指针数组进阶
#include<stdio.h>
#include<stdlib.h>
void fack(char *arr,char*ptr[],int n)
{
    int i,j,c;
    char *f;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            c=strcmp(ptr[j],ptr[j+1]);
            if(c>0)
            {
                f=ptr[j+1];
                ptr[j+1]=ptr[j];
                ptr[j]=f;
            }
        }
    }
}
int main()
{
    int n=0,i=0;
    scanf("%d\n",&n);
 //   getchar();
    char arr[1000000]={0};
    char *str[100]={0};
    str[0]=arr;
    for(i=0;i<n;i++)
    {
        gets(str[i]);
        if(i<n-1)
             str[i+1]=str[i]+strlen(str[i])+1;
    }
    fack(arr,str,n);
    for(i=0;i<n;i++)
        puts(str[i]);
    
    system("pause");
    return 0;
}
7-58实验11_1_初识结构
#include<stdio.h>
typedef struct {
 char name[30];
 char id[30];
 int score[30];
 double pin;
 int ce;
}STUDENT;
int main()
{
 STUDENT a;
 STUDENT* pa;
 pa = &a;
 int i, j=0, l;
 gets(a.name);
 scanf("%s", &a.id);
 for (i = 0; i < 5; i++)
 {
  scanf("%d", &a.score[i]);
  j += a.score[i];
 }
 a.ce = j;
 a.pin = j / 5;
 
 printf("Name:%s\n", pa->name);
 printf("ID:%s\n", pa->id);
 printf("Score:%d", pa->score[0]);
 for (i = 1; i < 5; i++)
  printf(" %d", pa->score[i]);
 printf("\n");
 printf("average:%.2lf total:%d", pa->pin, pa->ce);
 return 0;
}