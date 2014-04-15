#include <stdio.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#define PI 3.1415f
int main(void)
{
    //int a[2] = {1,2};
    //char a = '1';
    int a = 1;
    FILE *fp;
    fp = fopen("bak2.bak", "a");
    fwrite(&a, sizeof(a), 2, fp);
    fclose(fp);

    printf("%ld",sizeof(a));
    return 0;
    int salary = 10000;
    unsigned short month = 12U;
    float total = 200000.0f; 
    float input;
    const float pi = 3.14;
    printf("王强\n北京");
    printf("\n\"It\'s freezing in here,\" he said coldly.\n");
    printf("My salary is %d for one year\n",month*salary);
    printf("%.2f/%d=%f\n",total,month,total/month);
//    scanf("%f", &input);
 //   printf("%f\n",input*input*pi);
    printf("%ld\t%ld\t%ld\n",sizeof(short),sizeof(int),sizeof(long));
    printf("%d\t%d\n",INT_MIN, INT_MAX);
    printf("%f",234/12.1f*234.0);
    printf("%f\n",sqrt(2));
    /*
    float width,height;
    printf("please input width:");
    scanf("%f",&width);
    printf("please input heigth:");
    scanf("%f",&height);
    printf("area is: %.2f\n",width*height);
    */
    unsigned char select;
    float price = 0.0f;
    bool tag = true;
    while(tag) {
        printf("please select 1 OR 2:"); 
        scanf("%c",&select);
        switch(select){
            case '1':
                price = 3.5f;
                tag = false;
                break;
            case '2':
                price = 5.5f;
                tag = false;
                break;
            default:
                printf("You input is error!\n");
        }
    } 
    printf("please input buy number:");
    int num;
    scanf("%d",&num);
    printf("%.4f$",price*num); 

    return 0;
}
