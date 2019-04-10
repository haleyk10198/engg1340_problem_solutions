#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[]){
	int len = strlen(str);
	for(int i = 0, j = len-1; i < j; i++, j--){
		if(str[i] != str[j]){
			return false;
		}
	}
	
	return true;
}

int main(){
	// typo in slides
	printf("%s: %d\n", "abcbc", isPalindrome("abcbc"));
	// intended
	printf("%s: %d\n", "abcba", isPalindrome("abcba"));
	printf("%s: %d\n", "noon", isPalindrome("noon"));
	printf("%s: %d\n", "kayak", isPalindrome("kayak"));
	printf("%s: %d\n", "hku", isPalindrome("hku"));
	printf("%s: %d\n", "engg1340", isPalindrome("engg1340"));
	return 0;
}
