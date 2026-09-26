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

//关机电脑
// #include <string.h>
// #include <stdlib.h>
// int  main()
// {
//     char input[] =   {0};
//     system("shutdown -s -t 60");//头文件stdlib.h
//     again:
//     printf("请注意，你的电脑 在60秒内关机 ，如果 输入：我是猪，就取消关机\n");
//     scanf("%s",input);
//     if(strcmp(input,"我是猪") == 0)//头文件 string.h
//     {
//         system("shutdown -a");
//     }
//     else
//     {
//         goto  again;
//     }

//     return 0;
// }   

// #include <string.h>
//复制字符串
// int main()
//     {
//         char arr1[] = {0};
//         char arr2[20] = {"hello world"};
//         strcpy(arr1,arr2);
//         printf("%s\n",arr1);
//         return 0;
//     }

//替换字符串
// int main()
// {
//     char arr[20]={"hello world"};
//     memset(arr+6,'x',5);
//     printf("%s\n",arr);
//     return 0;

// }
//写一个函数交换两个整形变量的值
//错误版本
// void swap(int x ,int y)
// {
//     int temp = 0;
//     temp = x;
//     x = y;
//     y = temp;
// }
//正确版本
// void swap(int *px, int *py)
// {
//     int temp = 0;
//     temp = *px;
//     *px = *py;
//     *py = temp;
// }

// //当实参传递给形参的是，形参是实参的一份临时拷贝
// //对形参的修改不会影响实参
// int main()
// {
//     int a =0 ;
//     int b = 0;
//     scanf("%d %d",&a,&b);
//     printf("交换前：a=%d,b = %d\n",a,b);
//     // swap(a,b);
//     swap(&a,&b);
//     printf("交换后：a=%d,b = %d\n",a,b);
//     return 0;
// }

// void swap1(int x ,int y)
// {
//     int temp = 0;
//     temp = x;
//     x = y;
//     y = temp;
// }
// void swap2(int *px, int *py)
// {
//     int temp = 0;
//     temp = *px;
//     *px = *py;
//     *py = temp;
// }
//  int main()
//  {
//     int a = 0;
//     int b =0;
//     scanf("%d %d",&a,&b);
//      printf("交换前：a=%d,b = %d\n",a,b);
//      //传值调用
//      swap1(a,b);
//      //传址调用
//      swap2(&a,&b);
//      printf("交换后：a=%d,b = %d\n",a,b);
//     return 0;
//  }

//写一个函数判断一个数是不是素数
// int main()
// {
//     int i = 0;
//     int count = 0;
//     for(i= 100;i <= 200;i++)
//     {
//         int j = 0;
//         int flag = 1;
//         for(j = 2;j <= i-1; j++)
//         {
//             if(i%j == 0)
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag == 1)
//         {
//             printf("%d是素数\n",i);
//             count++;
//         }

//     }
//     printf("\ncount = %d\n",count);
//     return 0;
// }
// #include <math.h>
// int main()
// {
//     int i = 0;
//     int count = 0;
//     for(i= 101;i <= 200;i+=2)
//     {
//         int j = 0;
//         int flag = 1;
//         for(j = 2;j <= sqrt(i); j++)//sqrt头文件math.h，返回i的平方根，i的平方根是i的最大因数
//         {
//             if(i%j == 0)
//             {
//                 flag = 0;
//                 break;
//             }
//         }
//         if(flag == 1)
//         {
//             printf("%d是素数\n",i);
//             count++;
//         }

//     }
//     printf("count = %d\n",count);
//     return 0;
// }

//函数版本
// #include <math.h>
// int isPrime(int n)
// {
//     int j = 0;
//     for(j = 2;j <= sqrt(n); j++)
//     {
//         if(n%j == 0)
//         {
//            return 0;
//         }
//     }
//         return 1;

// }
// int main()
// {
//     int i = 1;
//     int count = 0;
//     for(i = 101 ;i <= 200;i+=2)
//     {
//         //拿2~i-1之间的数去整除i
//         if(isPrime(i))//isPrime函数判断一个数是不是素数,是素数返回1 否则返回0
//         {
//             printf("%d是素数\n",i);
//             count++;
//         }
//     }
//     printf("count = %d\n",count);
//     return 0;
// }
//判断闰年
// int  main()
// {
//     int year = 0;
//     for(year =  1000;year <= 2000;year++)
//     {
//         //判断year是不是闰年
//         if(year %4 ==0)
//         {
//             if(year % 100 != 0)
//             {
//                 printf("%d是闰年\n",year);
//             }


//         }
//         if(year % 400 == 0)
//         {
//             printf("%d是闰年\n",year);
//         }
//     }
//     return 0;
// }
//函数形式
// int isleap(int year)
// {
//     if(year % 4 == 0)
//     {
//         if(year % 100 !=0)
//         return 1;
//     }
//     if(year % 400 == 0)
//     {
//        return 1;
//     }
//     return 0;

// }

// int main()
// {
//     int year = 0;
//     // scanf("%d", &year);
//     for(year = 1000;year <= 2000;year++)
//     {
//         if(isleap(year))
//         {
//             printf("%d是闰年\n",year);
//         }
//     }
//     return 0;
// }
//数组查找
// int a_search(int *arr,int k,int sz)
// {
//     int left = 0;
//     int right = sz - 1;
    
//     while(left <= right){
//         int mid = left + (right - left)/2;
//         if(arr[mid]  == k)
//         {
//             return mid;
//         }
//         else if(arr[mid] > k)
//         {
//             right = mid - 1;
//         }
//         else if(arr[mid] < k)
//         {
//             left = mid + 1;
//         }
       
//     }
//      return -1;
     
// }

// int main()
// {
//     int arr[10]={1,2,3,4,5,6,7,8,9,10} ;
//     int k = 7;
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     int ret = a_search(arr,k,sz);
//     if(ret == -1)
//     {
//         printf("未找到");
//     }
//     else
//     {
//         printf("找到了，下标是%d",ret);
//     }

//     return 0;
// }

//写一个函数，每调用一次函数，将sum的值增加1
// void add_one(int* sum)
// {
//     (*sum)++;
// }

// int main()
// {
//     int sum = 0;
//     while(sum < 10)
//     {
//         add_one(&sum);
//     }
//     printf("sum = %d\n",sum);
//     return 0;
// }


// #include <string.h>
// int main()
// {
//     int len = strlen("abcdef");
//     printf("len = %d\n",len);
// //链式访问
//     // printf("%d",strlen("abcdef"));
//     printf("%d",printf("%d",printf("%d",43)));
//     return 0;
// }

// #include"head/add.h"
// int main()
// {
//     int x = 0;
//     int y = 0;
//     scanf("%d %d",&x,&y);
//     int sum=Add(x,y);
//     printf("%d",sum);
//     return 0;
// }
//导入  静态库
//#pragma comment(lib,"静态库名称.lib")

//函数 递归
//接受一个无符号的 整形值，按照顺序打印它的每一位 
//%d 打印有符号整数，%u 打印无符号整数 
// void print(unsigned int num)
// {
//     if(num > 9)
//     {
//         print(num/10);
//     }
//         printf("%d ",num%10);， 
// }
// int  main()
// {
//     unsigned  int num   =  0;
//     scanf("%u",&num);//1234
//     print(num);
//     return 0;
// }
//编写函数 不允许创建临时变量，求字符串的长度
//求字符串的长度
// #include <string.h>
// int  my_strlen(char *str){
//     int     count = 0;
//     while(*str != '\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }
// int main ()
// {
//     char arr[]="abc"  ;
//     int len = my_strlen(arr);
//     printf("%d",len);
//     return 0;
// }

//递归 形式  
// #include <string.h>
// int  my_strlen(char *str){
//     if(*str != '\0')
//     {
//         return 1 + my_strlen(str+1);
//     }
//     return  0;
// }
// int main ()
// {
//     char arr[]="abc"  ;
//     int len = my_strlen(arr);
//     printf("%d",len);
//     return 0;
// }

//斐波那契数列 
// int fit(int n)
// {
//     int a  =1;
//     int b  =1;
//     int c  =1;
//     while(n  >=3)
//     {
//         c = a + b;
//         a = b;
//         b = c;
//         n --;
//     }   
//     return  c;
// }

// int main()
// {
//     int  n = 0;
//     scanf("%d",&n);
//     int  ret =  fit(n) ;
//     printf("%d",ret);
//     return 0;
// }
// #include <stdio.h>

// void test()
// {
//     int b = 0;          // 普通局部变量
//     static int a = 0;   // 静态局部变量
//     a++;
//     b++;
//     printf("a=%d, b=%d\n", a, b);
//     }

//     int main()
//     {
//     test();   // a=1, b=1
//     test();   // a=2, b=1
//     test();   // a=3, b=1
//     return 0;
// }

//数组 
//一组相同类型元素的集合
// int main()
// {
//     char arr[10]={'a','b','c','\0'};
//     printf("%s",arr);

//     return 0;
// }
//二维数组
// 1 2 3 4
// 2 3 4 5
// 3 4 5 6
// int main()
// {
//     int arr[3][4]={{1,2,3,4},{2,3,4,5},{3,4,5,6}};
//     for(int i = 0;i<3;i++)
//     {
//         int j = 0;
//         for(j = 0;j < 4; j++)
//         {
//             printf("&arr[%d][%d]=%p\n",i,j,&arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
//数组 数据排成顺序（冒泡排序）
//数组传参有两种写法（数组/指针）
// void bubble_sort(int arr[],int  sz)
// //数组形式 
// //冒泡排序 (两个相邻的元素 进行比较)（需要升序）
// {
//     int i = 0;
//     int j  = 0;
//     for(i = 0;i<sz-1;i++)
//     {
//         for(j = 0;j<sz-1-i;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 int  temp =0;
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int  arr[10] = {9,8,7,6,5,4,3,2,1,0};
//     int sz = sizeof(arr)/sizeof(arr[0]);
//     bubble_sort(arr,sz);
//     int i = 0;
//     for(i=0;i < 10;i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     return 0;
// }

//三子棋
int main()
{
        
    return 0;
}