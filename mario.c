
#include<stdio.h>
#include<cs50.h>

int main(void){
    int num;
    do{
		num=get_int("Height:");
	}while(num<1 || num>8);
	for(int n=num; n>0; n--){
		for(int i=1;i<=num; i++){
			if(i<n){
				printf(" ");
			}
			else printf("#");
		}
		printf("\n");
	}

}
