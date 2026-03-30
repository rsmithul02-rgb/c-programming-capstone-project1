#include<stdio.h>
#include<string.h>
void main(){
	char str1[128],str2[128];
	printf("__String utility box__\n");
	printf("1.Find length\n");
	printf("2.Copy the string\n");
	printf("3.Comparing two strings\n");
	printf("4.Reverse the string\n");
	printf("5.joining two strings\n");
	int choice;
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("Enter the word:");
			scanf("%s",&str1);
			printf("length:%d",strlen(str1));
			break;
		case 2:
			printf("Enter the word:");
			scanf("%s",&str1);
			strcpy(str2,str1);
			printf("original string:%s\n",str1);
			printf("copied string:%s\n",str2);
			break;
		case 3:
			printf("Enter the first word:");
			scanf("%s",&str1);
			printf("Enter the second word:");
			scanf("%s",&str2);
			if(strcmp(str1,str2)==0){
				printf("the given words are same");
			}
			else{
				printf("the given words are not same ");
			}
			break;
		case 4:
			printf("Enter the word:");
			scanf("%s",&str1);
			strrev(str1);
			printf("reversed word:%s",str1);
			break;
		case 5:
			printf("Enter the first word:");
			scanf("%s",&str1);
			printf("Enter the second word:");
			scanf("%s",&str2);
			printf("concatenated word:%s",strcat(str1,str2));
			break;
	default:
	  printf("Invalid choice");							
	}
}