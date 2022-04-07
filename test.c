#include <stdio.h>
int main()
{
    char* arr = "hello";
    int len = 0;
    printf("%s",arr[&(arr)+len]);
   
   
    // while(scanf("%c", arr )){
    //     len++;
    //     printf("%c",arr[len]);
    // }
    return 0;
}