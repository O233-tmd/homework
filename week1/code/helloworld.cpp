#include<stdio.h> 
int main(){
	int input;
	while(1){
		printf("请输入-1，0，或1:");
		scanf("%d",&input);
		if (input==-1){
			return 0;
		}else if(input==0){
			printf("helloworld\n");
		}else if(input==1){
			printf("HELLOWORLD\n");
		}else{
			printf("输入错误，请重新输入\n");
		}
		
	}
	return 0;
}
