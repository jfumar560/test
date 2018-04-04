
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void stringCompare(char string1[], char string2[])
{
	
	int maxLength;
	int string1Length = strlen(string1);
	int string2Length = strlen(string2);
	printf("string 1: %s \n",string1);
	printf("string 2: %s \n",string2);
	
	if (string1Length != string2Length){
		printf("string is different\n");
		return;}
	else
		for(int i = 0; i<string1Length; i++){
			if(string1[i] == string2[i])
				printf("identical char %u,  %u\n", string1[i],string[2]);
		}
}

void reverseString(char string3[])
{
	char* word;
	char stringBuffer[5][strlen(string3)];
	char *tokenarray[strlen(string3)];
	
	static int count = 1;
	word = strtok(string3, " ");
    //printf("1st word: %s\n", word);
    strcpy(stringBuffer[1],word);
	printf("1st word: %s\n",stringBuffer[1]);
	int i = 0;
		while ((word = strtok(NULL, " ")) != NULL)
		{
			     
				//strcpy(stringBuffer[2],word);
				//tokenarray[i--] = string3;
				strcpy(tokenarray[i++], word);
				printf("%s\n", tokenarray);
			    //word = strtok(NULL, " ");
		}
	//printf("token array %s\n", tokenarray[3]);
	
	//printf("%s %s %s %s\n",stringBuffer[1], stringBuffer[2], stringBuffer[3], stringBuffer[4]);
	
}
void stringReverse(char str[])
{
    int length = strlen(str);
    int i;
    for (i = length - 1; i >= 0; i--) {
        if (str[i] == ' ') 
		{
     
            str[i] = '\0';
 
            // Start from next charatcer     
            printf("%s ", &(str[i]) + 1);
        }
    }
 
    printf("%s", str);
}
void identicalVal(int a[],int n)
{
	for(int i = 0; i<n; i++)
	{
		int x = i-1;		
		for (int y = 0; y<=x; y++)
		{		
			if (a[i] == a[x-y])
			{
				printf("Value %u at locations a[%u] and a[%u]\n", a[x-y],i,x-y);
			}
			
		}
	}
}

int main()
{
	char string1[] = "apple";
	char string2[] = "pepper";
	char string3[] = "Hello to the world";
	stringCompare(string1, string2);
	stringReverse(string3);
	int a[6] = {1,2,3,4,1,6};
	int n = sizeof(a)/sizeof(a[0]);
		
	identicalVal(a,n);
	
}
