#include <stdio.h>
#include <ctype.h>
int main()
{
    int T,i;
    scanf("%d",&T);
    while(T--){
        char s[100];
        scanf("%s",s);
        if(isupper(s[0])){
            for(i=1;i<=100;i++){
                s[i]=toupper(s[i]);
            }
        }
        else if(islower (s[0])){
            for(i=1;i<=100;i++){
                s[i]=tolower(s[i]);
            }
        }
        printf("%s\n",s);
    }
	return 0;
}