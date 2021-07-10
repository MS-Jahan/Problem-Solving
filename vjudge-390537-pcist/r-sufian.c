#include<stdio.h>
#include<string.h>
int main()
{
    char w[11], str[1001];
    int count=0,i;
    scanf("%s",&w);
    for(i=0; i<strlen(w) ; i++)
	{
		if(w[i]>=65&&w[i]<=90){
         w[i]=w[i]+32;
		}
	}
    while(1)
    {
        scanf("%s", str);



        for(i=0; i<strlen(str) ; i++)
		{   //printf("%c ", str[i]);
            if(str[i]>=65 && str[i]<=90){
             //printf("%c", str[i]);
             str[i]= str[i]+32;
             //printf(" | %c\n", str[i]);
            }

		}

        if(strcmp(str,"end_of_text")==0)
        {
            printf("%d\n",count);
            break;
        }


        if(strcmp(w,str)==0)
           {
           	count++;
           	printf("%d\n", count);
           }
        else{
            printf("no match\n");
        }

    }


}
