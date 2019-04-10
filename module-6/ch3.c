#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void erase(char str[], int pos, int len){
	int n = strlen(str);
	for(int i = pos+len; i < n; i++){
		str[i-len] = str[i];
	}
	
	str[n-len] = '\0';
	return;
}

int main(){
	char str[10] = "123456789";
	
	printf("%s\n", str);
	erase(str, 0, 2);
	printf("%s\n", str);
	erase(str, 2, 3);
	printf("%s\n", str);
	
	return 0;
}
