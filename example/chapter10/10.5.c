#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
// 将一个文件里的内容，第一次输出到终端，第二次存到另一个文件
int main()
{
    char ch, arr[10];
    FILE * fp = fopen("sorted_str.dat", "r");
    FILE * fp_2 = fopen("sorted_str_copy.dat", "w");

    // 将文件内容输出到终端
    while (fgets(arr,10,fp) != NULL)
        printf("%s", arr);

    rewind(fp);     // 使文件位置标记指向文件开头

    // 将文件内容存到另一个文件
    while ((ch = fgetc(fp)) != EOF)
        fputc(ch, fp_2);
    fclose(fp);
    fclose(fp_2);
    system("pause");
    return 0;
}