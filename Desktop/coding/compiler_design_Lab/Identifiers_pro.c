#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int state=1;
    char s[]="jay";
    int i=0;
    char c=s[i];
    if((c>='A' && c<='Z')||(c>='a'&&c<='z') || c== '_') 
            state=2;
    else state=3;
    c = s[++i];
    while(c !='0' && state == 2){
        if((c>='A' && c<='Z') || (c>='a' && c <= 'z')|| (c>='0' &&  c<='9')) 
                 state =2;
        else 
           state=3;
        c=s[++i];
    }
    if(state==3){
        while(s[i++]);
    }
    if(state==2) printf("Valid String\n");
    else printf("Invalid String\n");
    return 0;
}