#include <stdio.h>
#include <stdlib.h>
int main(){
	printf("---------------------Sender's Side ----------------\n");
	int n[8],count=0,ch;
	printf("Enter 7bit Binary No. ");
	for(int i=0;i<7;i++){
		scanf("%d",&n[i]);
		if(n[i] == 1)
			count++;
		if((n[i]!=0)&&(n[i]!=1)) {
			printf("Invalid Input");
			exit(1);
		}
	}
	printf("0.Odd Parity\n1.Even Parity\nEnter Choice: ");
	scanf("%d",&ch);

	if(ch == 0){
		if(count %2 == 0)
			n[7] = 1;
		else
			n[7] = 0;
	}else{
		if(count %2 != 0)
			n[7] = 1;
		else
			n[7] = 0;
	}
	printf("\nDATAWORD IS: ");
	for(int i=0;i<7;i++){
		printf("%d",n[i]);
	}
	printf("\nCODEWORD IS: ");
	for(int i=0;i<8;i++){
		printf("%d",n[i]);
	}
	printf("\nThe Parity bit is: %d\n",n[7]);

	printf("---------------------Receiver's End--------------------\n");
	count = 0;
	printf("Enter CODEWORD: ");
	for(int i=0;i<8;i++){
		scanf("%d",&n[i]);
		if(n[i] == 1)
			count++;
	}
	if(ch == 0){
		if(count %2 == 0){
			printf("ERROR\n");
			exit(1);
		}
	}else{
		if(count %2 != 0){
			printf("ERROR\n");
			exit(1);
		}
	}
	printf("\nThe CODEWORD is: ");
	for(int i=0;i<8;i++){
		printf("%d",n[i]);
	}
	printf("\nThe DATAWORD is: ");
	for(int i=0;i<7;i++){
		printf("%d",n[i]);
	}
	printf("\nThe Parity Bit is : %d",n[7]);
}


