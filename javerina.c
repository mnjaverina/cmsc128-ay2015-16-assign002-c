#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 






int getHammingDistance(char str1[], char str2[]){

	int st1Len, st2Len, i, x=0;
	
	st1Len = strlen(str1);
	st2Len = strlen(str2);
	
	if(st1Len == st2Len){
		for(i=0; i<st1Len; i++){
			if(str1[i] != str2[i]){
				x++;
			}
		}
	}else{
		x = NULL;
	}	 
   	return x;
}




int countSubstrPattern(char original[], char pattern[]){
	int origLen, pattLen, i, j, count=0, x=0;
		
	origLen = strlen(original)+1;
	pattLen = strlen(pattern)+1;
	
	i=0;
	j=0;
	while(i != origLen){
	
		if(j == pattLen){
			j=0;
		}
		
		if(original[i]==pattern[j]){
			x++;
		}
		
		if(x == pattLen){
			count++;
		}
		
		i++;
		j++;
		
	}
	
	return count;
}


/*
int isValidString(char string[], char alphabet[]){
	char *p, *q;
	int alphaLen, stringLen, i, j, count=0;
	
	stringLen = strlen(string);
	alphaLen = strlen(alphabet);
	
	for(i=0; i<stringLen; i++){
		for(j=0; j<alphaLen; j++){
			if(string[i] == alphabet[j]){
				count++;
			}else{
				count=0;
			}
		}
	}
	
	
	
	if (count!=0) return 1;
	else return 0;
}



int getSkew(char string[], int n){
	int skew, i, len, g=0, c=0;
	
	for(i=0; i<=n; i++){
		if(string[i] == 'G'){
			g++;
		}else if(string[i] == 'C'){
			c++;
		}
	}
	
	skew = g-c;

	return skew;
}



int getMaxSkew(char string[], int n){
	int skew, i, len, g=0, c=0;
	
	for(i=0; i<=n; i++){
		if(string[i] == 'G'){
			g++;
		}else if(string[i] == 'C'){
			c++;
		}
	}
	
	skew = g-c;

	return skew;
}

int getMinSkew(char string[], int n){
	int skew, i, len, g=0, c=0;
	
	for(i=0; i<=n; i++){
		if(string[i] == 'G'){
			g = 1;
		}else if(string[i] == 'C'){
			c++;
		}
	}
	
	skew = g-c;

	return skew;
}*/


main(){
	char string1[256], string2[256], alphabet[256];
	int num, choice, hamDistance, n;
	
	while(choice != 7){
	 
		printf("Menu\n");
		printf("[1] Get Hamming Distance\n");
		printf("[2] Count Substring Pattern\n");
		printf("[3] Validate String\n");
		printf("[4] Get Skew\n");
		printf("[5] Get Max Skew\n");
		printf("[6] Get Min Skew\n");
		printf("[7] Exit\n");
		printf("Choice:");
		scanf("%d", &choice);
		
		
		switch(choice){
			
			
			case 1:		printf("Enter a string:");
					scanf("%s", string1);
					printf("Enter a string:");
					scanf("%s", string2);
					
					hamDistance = getHammingDistance(string1, string2);
					if(hamDistance == NULL) printf("Strings are not equal!\n");
					else	printf("Hamming Distance of %s and %s is %d\n", string1, string2, hamDistance);
					break;



			case 2:		printf("Enter a string:");
					scanf("%s", string1);
					printf("Enter a string:");
					scanf("%s", string2);
					
					n = countSubstrPattern(string1, string2);
					printf("There are %d Substring Patterns of %s in %s\n", n, string2, string1 );
					break;

			case 3:		printf("Enter a string:");
					scanf("%s", string1);
					printf("Enter an alphabet:");
					scanf("%s", alphabet);
					
					n = 0;
					n = isValidString(string1, alphabet);
					if(n==1) printf("%s is valid string of alphabet %s\n", string1, alphabet);
					else printf("%s is not valid string of alphabet %s\n", string1, alphabet);
					break;

			case 4:		printf("Enter a string:");
					scanf("%s", string1);
					printf("Enter number of nucleotides:");
					scanf("%d", &num);
					
					n=0;
					n = getSkew(string1, num-1);
					printf("Skew = %d\n", n);
					break;
			
			
			case 5:		printf("Enter a string:");
					scanf("%s", string1);
					printf("Enter number of nucleotides:");
					scanf("%d", &num);
					
					n=0;
					n = getMaxSkew(string1, num-1);
					printf("Max Skew = %d\n", n);
					break;
			case 6:		printf("Enter a string:");
					scanf("%s", string1);
					printf("Enter number of nucleotides:");
					scanf("%d", &num);
					
					n=0;
					n = getMinSkew(string1, num-1);
					printf("Min Skew = %d\n", n);
					break;
			case 7:		printf("Exit...\n");
					break;
					
			default:	printf("Wrong Choice\n");
					break;
			
			
		}
		
		
		
	}
		 
	
}
