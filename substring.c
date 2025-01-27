#include <stdio.h>
#include <string.h>

int sub(char [],char[]);
int sub(char str1[100],char str2[100]) {
	int len1=strlen(str1);
	int len2=strlen(str2);
	int i,j;

	for (i=0; i<=len1-len2; i++) {
		for (j=0; j<len2; j++) {
			if (str1[i+j]!=str2[j]) {
				break;
			}
		}
		if (j==len2) {
			return i;
		}
	}

	return -1;
}


int main() {
	char str1[] = "bharatin2024";
	char str2[] = "in2024";

	int result = sub(str1,str2);
	if (result!=-1) {
		printf("found : %d",result);
	}

	else {
		printf("not found");
	}
}
