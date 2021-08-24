#include <iostream>
#include <stdio.h>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    int count = 1;
    char s1[1005], s2[1005];
    while (gets(s1))
    {
        gets(s2);
        if (s1[0] == '\0' || s2[0] == '\0')
        {
            printf("%2d. Blank!\n", count++);
            continue;
        }

        string str1[1010], str2[1010];

        int count1 = 0, count2 = 0;
        bool isIn = false;
        for (int i = 0; i < strlen(s1); i++)
        {
            char c = s1[i];
            if (isalpha(c) || isdigit(c))
            {
                if (!isIn)
                {
                    count1++;
                    str1[count1] += c;
                    isIn = true;
                }
                else
                    str1[count1] += c;
            }
            else
                isIn = false;
        }

        isIn = false;

        for (int i = 0; i < strlen(s2); i++)
        {
            char c = s2[i];
            if (isalpha(c) || isdigit(c))
            {
                if (!isIn)
                {
                    count2++;
                    str2[count2] += c;
                    isIn = true;
                }
                else
                    str2[count2] += c;
            }
            else
                isIn = false;
        }

        int dp[1010][1010];
        memset(dp, 0, sizeof(dp));

        for (int i = 1; i <= count1; i++)
        {
            for (int j = 1; j <= count2; j++)
            {
                if (str1[i] == str2[j])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        printf("%2d. Length of longest match: %d\n", count++, dp[count1][count2]);
    }
    return 0;
}