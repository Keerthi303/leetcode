int climbStairs(int n) {
if(n==0||n==1)return n;
int a=1,b=1,temp;
for(int i=2;i<=n;i++){
 temp=b;
 b=a+b;
 a=temp;
}
return b;
}