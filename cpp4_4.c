#include <stdio.h>

int main()
{
    // int i, k;
    // double num, sum, average;
    // double arr[5]={};
   
    // for(i=0;i<5;i++){
    //     scanf("%lf ", &num);
    //     arr[i] = num;
    // }
   
    // for(k=0;k<5;k++){
    //     sum += arr[k];
    // }
   
    // average = sum/5;
   
    // printf("합 = %lf, 평균 = %lf", sum, average);
   
    // int i;
    // double num, max;
    // double arr[5]={};
   
    // for(i=0;i<5;i++){
    //     scanf("%lf", &num);
    //     arr[i] = num;
    // }
   
    // max=arr[0];
    // for(i=0;i<5;i++){
    //     if(max<arr[i])
    //         max = arr[i];
    // }
   
    // printf("max = %lf", max);
   
    int M, N;

    scanf("%d %d", &M, &N);

    for (int num = M; num <= N; num++) {
        int cnt = 0;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0)
                cnt++;
        }
        if (cnt == 2)
            printf("%d\n", num);
    }

    return 0;
}