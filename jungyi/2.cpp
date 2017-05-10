#include <stdio.h>
#include <string.h>
int main()
{
    int N=0;
    scanf("%d", &N);
    int len=N-(N/3+N/5-N/15)+(N/15);
    printf("%d", len);

    return 0;
}
