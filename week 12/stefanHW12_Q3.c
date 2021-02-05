#include <stdio.h>
#include <string.h>
#define NO 0
#define YES 1
#define MIN 6
#define MAX 8
#define SIZE 50
void input(char pass[]);
int chackPass(char pass[]);
int main()
{
    char pass[SIZE]={0};
    int flag =NO; 
    input(pass);
    flag = chackPass(pass);
    //printig the masseg
    if(flag)
    {
        printf("yes");
    }
    else if (!flag)
    {
        printf("no");
    }
    
    return 0;
}
/*
this func used for input
input:the string
output:none
*/
void input(char pass[])
{
    printf("enter a pass to chack: ");
    fgets(pass,SIZE,stdin);
}
/*
this func chacks the pass
input:the string
output:int 1 if corect 0 if not
*/
int chackPass(char pass[])
{
    int flag =NO;
    int hasNum =NO;
    int hasSmallChar =NO;
    int hasBigChar =NO;
    int doubleChar =NO;
    int NotCrtLen =NO;

    for (int i =0;i<strlen(pass);i++)
    {
        //chacks if has big letter
        if(pass[i]>='A'&&pass[i]<='Z')
        {
           hasBigChar=YES; 
        }
        //chacks if has small letter
        else if (pass[i]>='a'&&pass[i]<='z')
        {
            hasSmallChar=YES;
        }
        //chacks if has a num
        else if (pass[i]>='0'&&pass[i]<='9')
        {
            hasNum= YES;
        }
        //chacks len
        if (!(strlen(pass) >= MIN && strlen(pass) <= MAX)) // Checking if the password have enough digits
        {
            NotCrtLen = YES;
            break;
            
        }
        ////chacks for doubel chars
            if (pass[i] ==pass[i+1])
        {
            doubleChar = YES;
            break;
        }
        
    }
    if(hasNum == YES &&hasSmallChar ==YES&&hasBigChar ==YES && doubleChar ==NO&& NotCrtLen ==NO)
        {
            flag =YES;
        }
    return flag;
    
}
