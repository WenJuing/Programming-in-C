#include <stdio.h>
#include <windows.h>
#define N 13
// 用链表实现：13人围一圈，报数123，报到3退出，找到最后一个人原来的序号
typedef struct person {
    int number;
    int next;
} Link;

int main()
{
    // out代表出局人数
    int i, out = 0, cur_i = N;
    Link link[N+1];
    // 编号
    for (i = 1; i <=N ; i++)
    {
        link[i].number = i;
        // 若是最后一个人，则他的下一个是1号
        if (i == N)
            link[i].next = 1;
        else
            link[i].next = i + 1;
    }
    // 出局人数为12时退出（即只剩最后一人）
    printf("out sequence:\n");
    while (out != N - 1)
    {
        i = 0;
        while (i != 3)
        {
            cur_i = link[cur_i].next;
            if (link[cur_i].number)
                i++;
        }
        printf("%4d", link[cur_i].number);
        link[cur_i].number = 0;
        out++;
    }
    printf("\n");
    // 输出最后一人的编号
    for (i = 1; i <= N; i++)
        if (link[i].number)
            printf("the last person'number:%d\n", link[i].number);
    system("pause");
    return 0;
}
