#include<stdio.h>


int main() {
     int t;
     scanf("%d",&t);
     while(t--){
         int num,n,rem,c=0;
         scanf("%d",&num);
         n=num;
         while(num>0){
             rem=num%10;
             if(rem!=0){
                 if(n%rem==0)
                 c++;
             }
             num=num/10;
         }
         printf("%d\n",c);
     }
	return 0;
}