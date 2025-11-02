//用同一个值初始化最大和最小值
//用输入来初始化，避免出现初始化为0，但输入的都是负数，从而导致结果错位
#include <stdio.h>
// int main()
// {
//     int a,min,max;
//     scanf("%d",&a);
//     min = a;
//     max = a;
//     for(int i = 1;i< 10;i++)
//     {
//         scanf("%d",&a);
//         if(min>a)
//         {
//            min = a;
//         }
//         if(max<a)
//         {
//             max = a;
//         }
//     }
//     printf("最大值为%d\n",max);
//     printf("最小值为%d\n",min);
//     return 0;
// }
// int main()
// {
//     int a,max;
//     scanf("%d",&max);
//     for(int i = 1;i < 5;i++)
//     {
//         scanf("%d",&a);
//         if(a>max)
//         {
//             max = a;
//         }
//     }
//     printf("最大值为%d\n",max);
//     return 0;
// }

// int main()
// {
//     int a,max;
//     scanf("%d",&max);
//     for(int i = 0;i<10;i++)
//     {
//         scanf("%d",&a);
//         if(max < a)
//         {
//             max = a;
//         }
//     }
//     printf("%d",max);
// }
// int main()
// {
//     int a,max,min;
//     scanf("%d",&a);
//     max  = a;
//     min  = a;
//     for(int i = 1;i<5;i++)
//     {
//         scanf("%d",&a);
//         if(max < a)
//         {
//             max = a;
//         }
//         if(min > a)
//         {
//             min = a;
//         }
//     }
//     printf("%d\n",min);
//     printf("%d\n",max);
// }