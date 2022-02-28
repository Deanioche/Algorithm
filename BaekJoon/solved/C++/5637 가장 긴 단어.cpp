#include <stdio.h>
#include <string.h>
#include <ctype.h>

using namespace std;

void BOJ_5637()
{
    char ans[101] = "", tmp[101] = "";
    while (~scanf(" %[a-zA-Z\-]", tmp)) {
        getchar();
        if (strlen(ans) < strlen(tmp)) strcpy(ans, tmp);
    }

    for (int i = 0; ans[i]; ++i) putchar(tolower(ans[i]));
}

int main()
{
    BOJ_5637();
    return (0);
}