#include <stdio.h>          /// num = 14

int main() {
    char str[100];
    gets(str);

    int len = strlen(str);
    if (len <= 1) {
        printf("Sample Output: %s\n", str);
        return 0;
    }

    int index = 0;
    for (int i = 0; i < len; i++) {
        int j;
        for (j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                break;
            }
        }
        if (j == i) {
            str[index++] = str[i];
        }
    }
    str[index] = '\0';

    printf("Sample Output: %s\n", str);

    return 0;
}

/*#include <stdio.h>                 /// num = 15
#include <string.h>

int main()
{
  	char str[100];
  	gets(str);
  	int i, j, startIndex, endIndex;

  	int len = strlen(str);
  	endIndex = len - 1;


  	for(i = endIndex; i >= 0; i--)
	{
		if(str[i] == ' ' || i == 0)
		{
			if(i == 0)
			{
				startIndex = 0;
			}
			else
			{
				startIndex = i + 1;
			}
			for(j = startIndex; j <= endIndex; j++)
			{
				printf("%c", str[j]);
			}
			endIndex = i - 1;
			printf(" ");
		}
	}

  	return 0;
}*/















