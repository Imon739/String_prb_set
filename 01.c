/*#include<stdio.h>        /// num = 01
int main()
{
    char str[100];
    gets(str);

    int i,len= 0;
    while(str[i] != '\0'){
      len++;
      i++;
    }
    printf("%d",len);
}*/

/*#include<stdio.h>           ///  num = 02
int main()
{
    char str1[100], str2[100];
    int i = 0, j = 0;

    gets(str1);
    gets(str2);

    while(str1[i] != '\0'){
        i++;
    }
    while(str2[j] != '\0'){
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    puts(str1);

}*/

/*#include<stdio.h>              /// num = 03
int main()
{
    char str[100];
    char ch;
    gets(str);

    int len = strlen(str);
    int i = 0,vowel = 0;
    while( (ch = str[i]) != '\0'){
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            vowel++;
        }
        i++;
    }
    printf("%d",vowel);
}*/

/*#include<stdio.h>        /// num = 04
int main()
{
    char str[100];
    char ch;
    gets(str);
    int i = 0,word = 0;

    while( (ch = str[i]) != '\0'){
        if(ch == ' '){
            word++;
        }
        i++;
    }
     word++;
    printf("%d",word);
}*/

/*#include<stdio.h>        /// num = 05
int main()
{
    char str1[100];
    char str2[100];
    gets(str1);

    int len = strlen(str1);
    int i;
    for (i = 0;i<len;i++){
       str2[i] = str1[len - 1 - i];
    }
    printf("%s",str2);
}*/

/*#include<stdio.h>      /// num = 06
int main()
{
    char str[100];
    gets(str);

    int i = 0;
    while(str[i] != '\0'){
            if(str[i] >= 'a' && str[i] <= 'z'){
        str[i] = str[i] - 'a' + 'A';
            }
     i++;
    }

    printf("%s",str);
}*/















































































