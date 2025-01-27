#include <stdio.h>

int input(char str[], int n) {
    int i = 0, ch;
    while ((ch = getchar()) != '\n' && i < n - 1) {  
        str[i] = ch;
        i++;
    }
    str[i] = '\0';  
   
}

void concat(char str1[],char str2[]){
	int n,i=0;
	int count=0;
	while(str1[count]!='\0'){
		count++;
	}
	n=count;
	while(str2[i]!='\0'){
		str1[n+i]=str2[i];
		i++;
	}
	printf("Concatenated string: %s",str1);
	//printf("%zu",strlen(str1));
}
void main(){
	char str1[100];
	char str2[100];
	int n1,n2;
	n1=input(str1,100);
	n2=input(str2,100);

	concat(str1,str2);
}	
