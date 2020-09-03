#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[100];
    char st[20];
    char en[20];
    char stuff[20];
    char s1[100];
    char esc[] = "esc";
    int p=0;
    printf("enter the message : ");
    scanf("%s",s);
    printf("enter the start  delimiter: ");
    scanf("%s",st);
    printf("enter the end delimiter: ");
    scanf("%s",en);
    printf("enter the character that is to be stuffed: ");
    scanf("%s",stuff);

    for(int i=0;i<strlen(st);i++){
	    s1[p] = st[i];
	    p++;
    }

    for(int i=0;i<strlen(s);i++){
	    int count=0;
	    for(int j=i,l=0;j<(l+strlen(st));j++,l++){
		    if(s[j]==st[l]){
			    count++;
		    } else {
			    break;
		    }
	    }
	    if(count==strlen(st)){
		    for(int m=0;m<strlen(stuff);m++){
			    s1[p] = stuff[m];
			    p++;
		    }
	    }
	    count=0;
	    for(int j=i,l=0;j<(i+strlen(en));j++,l++){
		    if(s[j]==en[l]){
			    count++;
		    } else {
			    break;
		    }
	    }
	    if(count == strlen(en)){
		    for(int m=0;m<strlen(stuff);m++){
			    s1[p] = stuff[m];
			    p++;
		    }
	    }
	    count=0;
	    for(int j=i,l=0;j<(i+strlen(esc));j++,l++){
                    if(s[j]==esc[l]){
                            count++;
                    } else {
                            break;
                    }
            }
            if(count == strlen(esc)){
                    for(int m=0;m<strlen(stuff);m++){
                            s1[p] = stuff[m];
                            p++;
                    }
            }
	    s1[p]=s[i];
	    p++;
    }
    for(int i=0;i<strlen(en);i++){
	    s1[p] = en[i];
	    p++;
    }
    s1[p]='\0';
    printf("After Stuffing The Message Is : %s\n",s1);
    return 0;
}

