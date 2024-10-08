#include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() 
// {
    
//     char s[100];
//     scanf("%[^\n]%*c", s);
    
//     printf("Hello world!\n%s",s);   
//     return 0;
// }

// void main()
// {
//     char a;

//     printf("Enter y or n: \n");
//     scanf("%c",&a);
//     if (a == 'y')
//     {
//         printf("You choose Yes\n");
//     }
//     else
//     printf("you choose no or something else\n");

// }

// #define SQUARE(x) x*x

// int main()
// {
//     int r = SQUARE(2+3);
//     printf("%d", r);
//     return 0;
// }


// int main()
// {
//     int h=8;
//     int j = 4*6+3*4<h*5?4:3;;
//     printf("%d", j);
//     return 0;
// }


// int main()
// {
//     int x=5;
//     if (x=2)
//     {
//         printf("t");
//     } else {
//         printf("f");
//     }
//     return 0;
// }


// int main()
// {
//     int i;
//     for(i=0;i<10;i++);
//     printf("%d", i);
//     return 0;
// }

// int main() {
//     int i=0;
//     for(;;) {
//         if(i==10)
//             break;
//         printf("%d", ++i);
//     }

//     return 0;
// }


// int main() {

//     int num=0;
//     do {
//         --num;
//         printf("%d",num);
//         num++;
//     }
//     while(num>=0);
//     return 0;
// }


// int main() {
//     short int k=1, j=1;
//     while (k<=4 || j<=3) {
//         k=k+2;
//         j+=1;
//     }
//     printf("%d,%d",k,j);
//     return 0;
// }



// int main() {
//     int i,a[4]={3,1,2,4},r;
//     r=a[0];
//     for(i=1;i<4;i++) {
//         if(r<a[i])
//             continue;
//         r=a[i];
//     }
//     printf("%d",r);
// }
// // 1


// int main() {
//     int a;
//     int arr[5]={1,2,3,4,5};
//     arr[1] = ++arr[1];
//     a=arr[1]++;
//     arr[1]=arr[a++];
//     printf("%d,%d",a,arr[1]);
// }
// // 4,4


// int main() {
//     int i,j,k;
//     int arr[]={1,2,3,4,5,6};
//     j=++arr[2];
//     k=arr[1]++;
//     i=arr[j++];
//     printf("%d,%d,%d",i,j,k);
// }
// //5,5,2


// int main() {
//     int n =2;
//     int sum=5;
//     switch(n) {
//     case 2: sum = sum-2;
//     case 3: sum *=5;
//     break;
//     default:
//         sum = 0;
//     }
//     printf("%d",sum);
//     return 0;
// }
// // 15


// int main() {
//     int i=0;
//     char c='a';
//     while(i<5) {
//         i++;
//         switch(c) {
//         case 'a':
//             printf("%c",c);
//             break;
//         }
//     }
//     printf("a\n");
// }
// // aaaaaa



// int main() {
//     int a[2][3] = {1, 2, 3, 4};
//     int i = 0, j = 0;
//     for (i = 0; i < 2; i++)
//         for (j = 2; j >= 0; j--)
//             printf("%d", a[i][j]);
//     return 0;
// }


// int main() {
//     {
//         int a=10;
//     }
//     printf("%d",a);
//     return 0;
// }
// //compiler error


// int main() {
//     printf("hello");
//     main();
//     return 0;
// }
// //till stackOver flow


// void fun(int n, int sum) {
//     int k=0, j=0;
//     if(n==0) return;
//     k=n%10;
//     j=n/10;
//     sum = sum+k;
//     fun(j,sum);
//     printf("%d",k);    
// }

// int main() {
//     int a=2048, sum=0;
//     fun(a,sum);
//     printf("%d",sum);
// }
// //20480


// int fun(int n) {
//     int i,j,sum=0;
//     for (i=1; i<=n; i++) {
//         for(j=i; j<=i; j++){
//             sum = sum+j;
//         }
//     }
//     return sum;
// }

// int main() {
//     printf("%d",fun(5));
//     return 0;
// }



// int main() {
    
//     int c, n, search,
//     array[100];
//     scanf("%d",&n); //number of elements in the array

//     for (c = 0; c < n; c++) {
//         scanf("%d",&array[c]);
//     }

//     scanf("%d", &search); //The element to search is read from test case.

//     int l=0;
//     int r=n-1;
//     int pos = 0;

//     while(l <= r) {
//         int mid = (l+r) / 2;

//         if (array[mid] == search) {
//             pos = mid + 1;
//             break;
//         }

//         else if (array[mid] < search)
//             l = mid + 1;
//         else
//             r = mid - 1;
//     }


//     if (pos != 0)
//         printf("%d found at location %d.\n", search, pos);
//     else
//         printf("Not found! %d isn't present in the list.\n", search);


//     return 0;
// }




// int main() {
// int a;
// int arr[5] = {1, 2, 3, 4,5};
// arr[1] = ++arr[1];
// a=arr[1]++;
// arr[1] = arr[a++];
// printf("%d,%d",a,arr[1]);
// return 0;

// }


// int main()

// {
// short num[3][2]={2,5,11,17,23,28};
// printf("%d,%d", *(num+2)[0],* *(num+1));
// return 0;

// }
// //23,11


// // Assume size of an integer and a pointer is 4 bytes. What is the output?
// #define A 5
// #define B 8
// #define C 2

// int main()

// {
// int (*x)[A][B][C];
// printf("%ld", sizeof(*x));
// return 0;
// }
// //320



// int main()
// {
// char *s = "programming";
// char *p=s;
// printf("%c,%c", *(p + 3), s[3]);
// return 0;
// }
// //g,g


int main() {
    unsigned int x[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {10, 11, 12}
    };

    printf("%ls, %ls, %ls", x+3, *(x+3), *(x+2)+3);
}
