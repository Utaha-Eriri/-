6-2实验5_3_设计函数getDays
int getDays(int year,int month){
    if(month==2){
    if(year%100==0){
        if(year%400==0){
        return 29;
        }
        else return 28;
    }
    else{
        if(year%4==0) return 29;
        else return 28;
    }
    }
    else if(month==1||month==3||month==5||month==7||month==8||month==10||month==12) return 31;
    else return 30;
}
6-3实验5_4_设计函数getDigit
int getDigit(long long n)
{
	int len;
	for(len=0;n!=0;len++){
	n=n/10;}
	return len;
}
6-4实验5_5_设计函数reverseNum
int reverseNum(int n)
{
	int num;
	for(num=0;n>0;n/=10)
	num=num*10+n%10;
	return num;
}
6-6实验5_10_设计函数judgeTriangle
int judgeTriangle(int a,int b,int c)
{
 if((a+b<=c)||(a+c<=b)||(b+c<=a))
   return -1;
 else
 {
  if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
    return 1;
  else if((a==b&&a!=c&&b!=c)||(a==c&&a!=b&&c!=b)||(b==c&&b!=a&&c!=a))
    return 2;
  else if(a==b&&a==c&&b==c)
    return 3;
  else
    return 0;
 }
}
6-7实验5_11_设计函数isPerfect与printPerfect
int isPerfect(int n){
    int sum=0,t=n/2;
    while(t>0){
        if(n%t==0) sum+=t;
        t--;
    }
    if(sum==n) return 1;
    else return 0;
}
void printPerfect(int n){
    if(isPerfect(n)){
        int t=1,sum=0;
        while(t<=n/2){
            if(n%t==0){
                sum+=t;
                if(sum==1) printf("%d=%d+",n,t);
                else if(sum!=n) printf("%d+",t);
                else if(sum==n) printf("%d",t);
            }
            t++;
        }
        printf("\n");
    }
    else return;
}
6-6实验5_13_设计函数numConvert
int numConvert(int s, int m, int n)
{
 int a[15] ;
 int b[15];
 int x;
 int i = -1;
 int num = 0;
 while(s > 0)
 {
  x = s % 10;
  i++;
  a[i] = x;
  s = s / 10;
 }
 i++;
 while (i > 0)
 {
  i--;
  num = m * (num + a[i]);
 }
 num = num / m;
 i = -1;
 while (num > 0)
 {
  i++;
  b[i] = num % n;
  num = num / n;
 }
 num = 0;
 i++;
 while (i > 0)
 {
  i--;
  num = num * 10 + b[i];
 }
 return num;
}