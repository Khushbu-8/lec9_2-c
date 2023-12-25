#include<stdio.h>
#include<string.h>

//Q.2 Write a Program to create a login mechanism by entering the right email & password. You can compare it with your desired email & password.

//Input:
//Enter your email: admin@gmail.com
//Enter your password: 123456
//
//Output:
//Login Successful...

void main(){
	
	char email[50];
	char password[50];
	
	printf("Enter your email :");
	scanf("%s",&email);
	
	printf("Enter your password :");
	scanf("%s",&password);
	
	if(strcmp(email,"khushbu@gmail.com")==0){
		if(strcmp(password,"123")==0){
			printf("Login successfull");
		}else{
			printf("Wrong password");
		}
		
	}else{
			printf("Login invalid ");
		}
		
}
