bool isPalindrome(int x) {
    if(x<0)return false;
    long long  sum=0;
    long long n=x;
  while(n!=0)
  {
  sum=(n%10)+(sum*10);
  n/=10;
  }  
  if(sum==x)return true;
  else return false;
}