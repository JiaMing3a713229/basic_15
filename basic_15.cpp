#include<stdio.h>    /*�ɤJ�禡�w*/ 
#include<stdlib.h>
void isLate(int,int);/*isLate()���쫬*/ 
int main(void){      /*�D�{��*/ 
	int h,m;         /*�إ�int�ܼ� h�p�� m����*/ 
	printf("�п�J�ɶ�");
	scanf("%d %d",&h,&m);
	isLate(h,m);
}
void isLate(int h,int m){
	if(h>=7&&h<17){
		if(h==7&&m>=30){    /*7:30���W�Үɶ�*/ 
			printf("�{�b�O�W�Үɶ�");
			printf("�ɶ�%d:%d",h,m);
		}
		else if(h>7){       /*8:00~17:00���W�Үɶ�*/ 
			printf("�{�b�O�W�Үɶ�");
			printf("�ɶ�%d:%d",h,m);
		} 
		
	}
	else{
		printf("�U���o");
	}
	
}
