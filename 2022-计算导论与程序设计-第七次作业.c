6-8实验6_1_递归求值一
int fuc(int n)
{
    if(n==0)
        return 0;
    else 
        return fuc(n-1)+n*n*n;
    
}
6-9实验6_2_递归求值二
int getSum(int n , int a)
{
    if(n==1)
        return a+a+3;
    else
        return getSum(n-1,a)+a+3*n;
}
6-10实验6_3_递归求最大值
int findMax(int n)
{
 int i,num,max;
 if(n==1){
  scanf("%d",&num);
  return num;}
 else{
  max=findMax(n-1);
  scanf("%d",&num);
  return (num>max)?num:max;}
}
6-11实验6_4_二进制转十进制
int convert(int n)
{
 if (n == 0)
  return 0;
 else
  return n % 10 + convert(n / 10) * 2;
}
6-14实验6_7_最大公约数
int GCD(int a, int b)
{
 if (a % b == 0)
  return b;
 else
  return GCD(b, a % b);
}