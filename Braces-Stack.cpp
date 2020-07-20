#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;++i)
    {
        char str[999];
        gets(str);
        int len=strlen(str),top=-1,flag=1;
        char stack[999];
        for(int j=0;j<len;++j)
        {
            if(str[j]=="{" || str[j]=="[" || str[j]=="(")
                stack[++top]=str[j];
            else if((str[j]=='}' && stack[top] =='{') ||(str[j]==')' && stack[top] =='(') ||(str[j]==']' && stack[top] =='['))
                top--;
            else
                flag=0;
            break;  
        }
        if(top==-1 && flag==0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }


}
