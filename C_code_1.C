#include <stdio.h>
#include<string.h>
typedef enum{dog,cat,lion=4,tiger,monky,hippo,giraffe} animal;

void f1(int a,int b){
	printf("%d\n",!a&&b);// ! priority
	printf("%d\n",~a&b);// ~ priority
}
void f2(){
	animal a = cat + hippo;//Add string's word count
	printf("%d\n",a);
}
void f3(int num){
	int k;
	k = (num > 1 ? (num <= 10 ? 100 : 200 ) : 300);
	printf("%d\n",++k);
}
void f4(int num){
	float f=1.0;
	for(int i =1 ;i<num;i++){
		f *= i;
	printf("%.2f\n",f);
	}
}
int main(void) {
	f1(16,8);
	f2();
	f3(5);
	f4(5);
	
	
	return 0;
}
