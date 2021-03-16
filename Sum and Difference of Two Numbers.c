#include <stdio.h>
int main() {
	int a,b,sum1=0,diff1=0;
    float c,d,sum2=0,diff2=0;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    if(a>=1 && a<=10000) {
        if(b>=1 && b<=10000) {   
            sum1=a+b;
            diff1=a-b;
            printf("%d %d \n",sum1,diff1);
        }
    }      
    if(c>=1 && c<=10000) {   
        if(d>=1 && d<=10000) {   
            sum2=c+d;
            diff2=c-d;
            printf("%0.1f %0.1f \n",sum2,diff2);
        }
    }
    return 0;
}
