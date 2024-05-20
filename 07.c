#include<stdio.h>       /// num = 07
int main()
{
    char str[100];
    gets(str);

    int i = 0;
    while(str[i] != '\0'){
        if(str[i]>= 'a' && str[i] <='z' ){
            str[i] = str[i] - 'a' + 'A';
        }else if(str[i] >= 'A' && str[i] <= 'Z'){
          str[i] = str[i] + 'a' - 'A';
        }
        i++;
    }
    printf("%s",str);
}
/*#include <stdio.h>             /// num = 09
int main()
{
    char str[100];
    char target;
    gets(str);

    scanf("%c", &target);
    int i, count = 0;


    int len = strlen(str);

    for ( i = 0; i < len; i++) {
        if (tolower(str[i]) == tolower(target)) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}*/


/*#include<stdio.h>                 /// num = 10
int main()
{
    char str1[100],str2[100];
    gets(str1);
    int i;
    int len = strlen(str1);
    for(i = 0;i<len;i++){
        str2[i] = str1[len - i - 1];
    }
    int flag = 1;
    for(i=0;i<len;i++){
        if(str1[i] != str2[i]){
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        printf("Palindrome");
    }else{
        printf("Not palindrome");
    }

}*/

/*#include<stdio.h>      /// num = 11
int main()
{
    char str[100];
    gets(str);
    char ch;
    int i = 0,digit = 0;
    while( (ch = str[i]) != '\0'){
        if(ch>='0' && ch<='9'){
            digit++;
        }
        i++;
    }
    printf("%d",digit);
}*/

/*#include <stdio.h>              /// num = 12
int main()
{
    char str1[100];
    gets(str1);

    char str2[100];
    gets(str2);

    int i,count = 0;


    int len1 = strlen(str1);
    int len2 = strlen(str2);

    for (i = 0; i <= len1 - len2; i++) {
        if (strncmp(str1 + i, str2,len2) == 0) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}*/
























