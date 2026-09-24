#include <stdio.h>




// int add(int x,int y)

// {
//     return x+y;
// }
// int main()
// {
// int n1=0;
// int n2=0;
// scanf("%d %d",&n1,&n2);
// int sum=add(n1,n2);
// printf("%d",sum);
//  return 0;
// }

// extern int  add(int x,int y);
// int main()
// {
//     int a=10;
//     int b=20;
//     int  z=add(a,b);
//     printf("a+b=%d",z);
//     return 0;   
// }
// int main()
// {
//     int a=10;
//     int* p=&a;
//     printf("%p\n",*p);
//     *p=100;
//     printf("%d\n",*p);
//     printf("%p\n",*p);  
//     return 0;   
    
// }
// int main()

// {
//     int a=1;
//     while(a<=100)
//     {
//         if(a % 2 == 1)
//         {
//             printf("%d\n",a);
//         }
//         a++;
//     }
//     return 0;
// }
// int main()
// {
//     int a=0;
//     scanf("%d",&a);
//     switch(a)
//     {
//         case 1:
//             printf("a=1\n");
//             break;
//         case 2:
//             printf("a=2\n");
//             break;
//         default:
//             printf("a=%d\n",a);
//             break;
//     }

//     return 0;
// }
// int main()
// {
//     int arr[10]={98,97,95,94,93,92,91,90,89,88};
//     int i=0;
//     int sz=sizeof(arr)/sizeof(arr[0]);
//     while(i<sz)
//     {
//         printf("%d\n",arr[i]);
//         i++;
//     }
//     return 0;
// }
//  
// int main()
// {
//     int i = 1;
//     do
//     {
//         if(i == 5)
//         continue;
//         printf("%d\n",i);
//         i++;
//     }
//     while(i <= 10);
//     return 0;
// }
// int main()
// {
//     int i=1;
//     int n=0;
//     int sum=1;
//     scanf("%d",&n);
//     for(i = 1;i <= n;i++)
//     {
//         sum = sum * i;
//     }
//     printf("%d\n",sum);
    
//     return 0;
// }

// int main ()
// {
//     int i=1;
//     int n=0;
//     scanf("%d",&n);
//     int sum=1;
//     int ret  = 0;
//     for(i = 1;i <= n; i++)
//     {
//         sum =sum * i;
//         ret = ret + sum;
//     }
//     printf("%d\n",ret);
//     return 0;
// }

//二分法找有序数组值
// int  main()
// {
//     int left  = 0;
//     int arr[10]={1,2,3,4,5,6,7,8,9,10};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int right = sz-1;
    
//     int k = 7;
//     while(left <= right){
//         int mid = (left + right) / 2;
//         if (arr[mid] < k)
//             {
//                 left = mid + 1;
//                 mid = (left + right) / 2;
//             }
//             else if (arr[mid] > k)
//             {
//                 right = mid - 1;
//                 mid = (left + right) / 2;
//             }
//             else
//             {
//                 printf("找到了 k=%d\n",k);
//                 break;
//             }
//     }
//     if(left > right)
//     {
//         printf("没有找到 k=%d\n",k);
//     }
//     return 0;

// }

// #include <string.h>
// #include <windows.h>
// #include <stdlib.h>
// int  main()
// {
//     char arr1[]="hello world";
//     char arr2[]="###########";
    
//     int left = 0;
//     int right = strlen(arr2)-1;
//     while(left <= right)
//     {
//         arr2[left] =  arr1[left];
//         arr2[right] = arr1[right];
//         Sleep(1000);//include <windows.h>文件
//         //清空屏幕
//         system("cls");//include <stdlib.h>文件
//         left++;
//         right--;
//         printf("%s\n",arr2);
        
//     }
//     return 0;
// }

// #include <string.h>
// int main()
// {
//     int i =   0;
//     char password[20]  = { 0  };
//     for(i = 0;i < 3;i++)
//     {
//         printf("请输入密码");
//         scanf("%s",password);
//         if(strcmp(password,"abcdef") == 0)
//         {
//                 printf("密码正确\n");
//                 break;
//         }
//         else
//         {
//             printf("密码错误\n");
//         }
//     }   
//     if(i == 3)
//     {
//         printf("三次密码均输入错误，退出程序\n");
//     }
//     return 0;
// }

//电脑产生 一个 随机数（1-100）
    //猜数字
    //猜大了 
    //猜小了
    //直到猜对了  结束

//     #include <stdlib.h> 
//     #include <time.h>
//     void menu()
//     {
//         printf("**********************\n");
//         printf("********1.paly********\n");
//         printf("********0.exit********\n");
//         printf("**********************\n");
//     }

//     void game()
//     {
//         int guess = 0;
//         //0~RAND_MAX(32767)
//         RAND_MAX;
//         //1.生成随机数 （1-100）
//         int num = rand()%100+1;
//       while(1)
//       {
//         printf("请猜数字\n");
//         scanf("%d",&guess);
//           if(guess == num)
//         {
//             printf("恭喜您猜对了\n");
//             break;
//         }
//         else if(guess > num)
//         {
//             printf("您猜的数字大了\n");
//         }
//         else
//         {
//             printf("您猜的数字小了\n");
//         }
//       }
//     }


// int main()
// {
//     int input = 0;
//     srand((unsigned int)time(NULL));//设置随机种子，种子为当前时间戳 srand:设置随机起点

//     do
//     {
//         menu();
//         printf("请输入您的选择：");
//         scanf("%d",&input);
//         switch(input)
//         {
//             case 1:
//             printf("猜数字\n");
//             game();
//             break;
//             case 0:
//             printf("退出游戏\n");
//             break;
//             default:
//             printf("选择错误，重新选择 \n");
//             break;
//         }

//     }while(input);

//     return 0;
// }

int  main()
{
    
    return 0;
}   
