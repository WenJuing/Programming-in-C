#include <stdio.h>
#include <windows.h>
#define SUM 100000  // 目标总额
// 全系1000名学生捐款，捐款总数达到10万元结束，输出总人数和平均每人捐款数额
int main()
{
    // 定义捐款总人数
    int amount;
    // 总金额，平均捐款额，每次捐款额
    float total, aver, onceM;
    printf("开始募捐，请输入捐款数额：");
    for (int i=1;i<=1000;i++) {
        scanf("%f", &onceM);
        amount++;
        total += onceM;
        printf("目前已有%d人捐款，总捐款人数为%d，平均捐款额为%.2f，总金额为%.2f，目标金额为%.2f\n",
        i, amount, total/amount, total, (float)SUM);
        if (total >= SUM) break;
    }
    system("pause");
    return 0;
}