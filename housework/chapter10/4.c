#include <stdio.h>
#include <windows.h>
#include <string.h>
// 把磁盘文件A和B中的一行字母合并（按字母顺序排列）到磁盘文件C中
int main()
{   
    int i;
    char * p, * q;
    char ch, str1[20], str2[20], str3[40];
    FILE * fp1, * fp2, *fp3;
    fp1 = fopen("A.dat", "r");
    fp2 = fopen("B.dat", "r");
    fp3 = fopen("C.dat", "w+");
    // 读取文件A中的全部字母
    i = 0;
    while ((ch = fgetc(fp1)) != EOF)
    {
        str1[i] = ch;
        i++;
    }
    str1[i] = '\0';
    // 读取文件B中的全部字母
    i = 0;
    while ((ch = fgetc(fp2)) != EOF)
    {
        str2[i] = ch;
        i++;
    }
    str2[i] = '\0';
    strcpy(str3, str1);
    strcat(str3, str2);
    puts(str3);
    // 对字符串3排序
    for (p = str3; p < str3 + strlen(str3); p++)
        for (q = p + 1; q < str3 + strlen(str3); q++)
            if (*p > *q)
            {
                ch = *p;
                *p = *q;
                *q = ch;
            }
    puts(str3);
    // 将str3存入C.dat
    i = 0;
    while ((ch = str3[i]) != '\0')
    {
        fputc(ch, fp3);
        i++;
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    system("pause");
    return 0;
}