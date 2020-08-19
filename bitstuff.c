#include <stdio.h>
#include <string.h>
int main(){
	char flag[8]="01111110";
	int n,i,count=0;
	char str[n];
	printf("Enter the bit string: ");
	scanf("%s",str);
	printf("After Bit Stuffing : ");
	printf("%s",flag);	
	for(i=0;i<strlen(str);i++){
		if(str[i]=='1'){
			count++;
		}

		else{
			count=0;
		}
		printf("%c",str[i]);
		if(count==5){
			printf("0");
			count=0;
		}
	}
	
	printf("%s\n",flag);
	printf("hello\n");
	
	return 0;
}









