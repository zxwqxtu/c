#include <stdio.h>
int main(void)
{
    /*
    double arr[5],arr_2[5];
    for(int i=0;i<5;i++) {
        scanf("%lf", &arr[i]);
        arr_2[i] = 1.0/arr[i];
       // printf("\n%lf\t%lf", arr[i], arr_2[i]);
    }
    
    double sum = 0.0d;
    for(int i=0;i<5;i++) {
       sum += arr_2[i]; 
    }
    printf("\n%lf", sum);
    */
    double arr[100];
    for (int i=1;i<=100;i++) {
       arr[i-1] = 1.0f/(i*2*(i*2+1)*(i*2+2)); 
    }
    double ret;
    for (int i=0;i<100;i++) {
       if(i%2) {
           ret += arr[i];
       }else {
           ret -= arr[i];
       }
    }
    printf("%lf\n请输入5个float值：",ret*4.0+3.0);
   
    float arrFloat[5] ;
    long arrDollars[5];
    long arrCents[5];

    for (int i=0;i<5;i++) {
        scanf("%f", &arrFloat[i]);
        arrDollars[i] = (long)arrFloat[i];
        arrCents[i] = (long)((arrFloat[i]-arrDollars[i])*100);
        printf("%lf\t%lf\t%lf\t%ld\t%ld\n",arrFloat[i], (arrFloat[i]-arrDollars[i]),(arrFloat[i]-arrDollars[i])*100.0,arrDollars[i], arrCents[i]);
    }

}
