#include <stdio.h>
#include <windows.h>
int main()
{
    char A_battle, B_battle, C_battle;
    // A的对手可能是X,Y,Z
    for (A_battle = 'X'; A_battle <= 'Z'; A_battle++)
    {
        // B的对手可能是X,Y,Z
        for (B_battle = 'X'; B_battle <= 'Z'; B_battle++)
        {
            // C的对手可能是X,Y,Z
            for (C_battle = 'X'; C_battle <= 'Z'; C_battle++)
            {
                if (A_battle == 'X' || C_battle == 'X' || C_battle == 'Z' || A_battle == B_battle || A_battle == C_battle || B_battle == C_battle)
                {
                    continue;
                }
                printf("A对手%c，B对手%c，C对手%c\n", A_battle, B_battle, C_battle);
            }
        }
    }
    system("pause");
    return 0;
}