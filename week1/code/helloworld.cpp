#include<stdio.h> 
int main(){
	int input;
	while(1){
		printf("������-1��0����1:");
		scanf("%d",&input);
		if (input==-1){
			return 0;
		}else if(input==0){
			printf("helloworld\n");
		}else if(input==1){
			printf("HELLOWORLD\n");
		}else{
			printf("�����������������\n");
		}
		
	}
	return 0;
}
