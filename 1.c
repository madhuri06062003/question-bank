Rewrite the following loops without a break statement to get the same output? 5m
a)
    for (i = 1 ; ; i++)
    {
        if(i > 5)
            break;
        printf("%d", i);
    }
b)
    int i = 1, j = 3;
    while (i < 5)
    {
        if(j == 0)
            break;
        printf("%d ", i++, j--)
    }


    output : 
//a 
#include<stdio.h>
int main() {
    int i;
    for(i=1;i<=5;i++) {
        printf("%d",i);
    }
}

//b
#include<stdio.h>
int main() {
    int i=1,j-3;
    while(i<5 && j!=0) {
        printf("%d",i++,j--)
    }
}





#include<stdio.h>

int main()
{
    int arr[5] = {6, 16, 26, 36, 46};
    int *ptr = arr;

    ++ptr;           // ptr → arr[1] (value: 16)
    ++ptr;           // ptr → arr[2] (value: 26)
    ++*ptr;          // arr[2] becomes 27

    printf("%d\n", *ptr);   // prints 27

    --ptr;           // ptr → arr[1] (value: 16)
    --*ptr;          // arr[1] becomes 15

    printf("%d\n", *ptr);   // prints 15

    return 0;
}
output : 
27 
15



#include <stdio.h>

void fun(int *p)
{
    printf("%d\n", *p);
}

int main()
{
    int a[3][4] = {
        {1, 2, 3, 4},
        {7, 3, 2, 8},
        {7, 8, 9, 0}
    };

    int *ptr;
    ptr = &a[1];   // Safe and correct
    fun(ptr);         // prints 7

    ptr = &a[1][1];   // Safe and correct
    fun(ptr);         // prints 3

    return 0;
}
output :
7
3




#include<stdio.h>
int main()
{
    int a, b, c;

    a = !(2 > 5) && !6 != 0; //a=!(0) && 0!=0; a=1&&0 =0; a=0;
    b = !(2 <= 2) || !(!(6 != 0));//b=!(1) || !(!(0=0)); //b=0||!(!1); b=0 || !0; b=0||1; b=1
    c = 2 != !2 && 0 == !2 > 0; //c=0=0 && 0==0>0; c=1&&1;c=1
    printf("%d %d %d\n", a, b, c); //011


    /*First Block Breakdown

🔹 a = !(2 > 5) && !6 != 0;
(2 > 5) → false → 0
!(0) → 1
!6 → false → 0
1 && 0 → 0
0 != 0 → false → 0
✅ a = 0

🔹 b = !(2 <= 2) || !(!(6 != 0));
2 <= 2 → true → 1 → !(1) → 0
6 != 0 → true → 1 → !1 → 0 → !0 → 1
0 || 1 → 1
✅ b = 1

🔹 c = 2 != !2 && 0 == !2 > 0;
!2 → 0 (since 2 is non-zero)
2 != 0 → 1
!2 → 0 → 0 == 0 → 1
1 && 1 → 1
✅ c = 1

*/

    a = (!-1) < 0 || !0 > 0; //a=0<0 || 1>0; a=0 || 1; a=1
    b = !(5 <= 0) && !(5 != !5 <= 0); //b=!(0) && !(0=0<=0); b=1 && 1; b=1
    c = 2 != 1 >= !8 != 1 || (!7 != 5 != !2); //c= 2!=1>=!0=1 || (0=0=0);  c=0>1=1 || 1; c=0>1 || 0; c=0||1; c=1
    printf("%d %d %d\n", a, b, c); //111

    /*a = (!-1) < 0 || !0 > 0;
-1 is non-zero → !-1 = 0
0 < 0 → false
!0 → 1 → 1 > 0 → true
0 || 1 → 1
✅ a = 1

🔹 b = !(5 <= 0) && !(5 != !5 <= 0);
5 <= 0 → false → !(0) → 1
!5 → 0 → 5 != 0 → 1 → 1 <= 0 → false → !(0) → 1
1 && 1 → 1
✅ b = 1

🔹 c = 2 != 1 >= !8 != 1 || (!7 != 5 != !2);
Let's break it step-by-step:

!8 → 0, 1 >= 0 → 1, 2 != 1 → 1, then 1 != 1 → 0
Right side:
!7 → 0, 0 != 5 → 1, then 1 != !2 → !2 = 0, 1 != 0 → 1
Final: 0 || 1 → 1
✅ c = 1

*/

    return 0;
}
output : 
011
111



static int a = 10;

int main()
{
    printf("%d", a);
    static int a = 20;
    printf("%d", a);
    return 0;
}
output :1020


