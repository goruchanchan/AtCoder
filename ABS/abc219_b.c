#include<stdio.h>
#include<string.h>


int main(void)
{
    char s1_str[11],s2_str[11],s3_str[11]={0};
    char T_str[1001]={0};
    int len;
    int i=0;

    scanf("%s",s1_str);
    scanf("%s",s2_str);
    scanf("%s",s3_str);
    scanf("%s",T_str);

    len = strlen(T_str);

    for(i=0;i<len;i++)
    {
        if(T_str[i] == '1')
        {
            printf("%s",s1_str);
        }
        else if(T_str[i] == '2')
        {
            printf("%s",s2_str);
        }
        else if(T_str[i] == '3')
        {
            printf("%s",s3_str);
        }
    }
    return(0);
}