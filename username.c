#include<Stdio.h>
int main(){
	char name[20];
	int age;
	char gender;
	
	printf("Enter the name: ");
	scanf("%s",name);
	
	printf("Enter the gender: ");
	scanf(" %c",&gender);
	
	printf("enter the age: ");
	scanf("%d",&age);
	
	printf("name:%s,Gender:%c,Age:%d",name,gender,age);
	//printf("Gender:%c",gender);
	//printf("Age:%d\n",age);
	return 0;
}