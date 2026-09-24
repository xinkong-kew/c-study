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

int  main()
{
    int left  = 0;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sz = sizeof(arr)/sizeof(arr[0]);
    int right = sz-1;
    int mid = (left + right) / 2;

    int k = 7;
    while(left <= right){
    if (arr[mid] < k)
        {
            left = mid + 1;
            mid = (left + right) / 2;
        }
        else if (arr[mid] > k)
        {
            right = mid - 1;
            mid = (left + right) / 2;
        }
        else
        {
            printf("找到了 k=%d\n",k);
            break;
        }
    }
    if(left > right)
    {
        printf("没有找到 k=%d\n",k);
    }
    return 0;

}