#include <stdio.h>

void ascii(void);

int main() {
	printf("\t %s\t\t","**ASCII table**");
	printf("\n----------------------------------\n");
	ascii();
}

void ascii() {
	unsigned char i;
	for(i=0;i<128;i++) {
		switch(i) {
			case 0:
				printf("\n%-3d --> null\t|\t%d --> %c",i,i+128,i+128);
				break;
			case 7:
				printf("\n%-3d --> \\a\t|\t%d --> %c",i,i+128,i+128);
				break;
			case 8:
				printf("\n%-3d --> \\b\t|\t%d --> %c",i,i+128,i+128);
				break;
			case 9:
				printf("\n%-3d --> \\t\t|\t%d --> %c",i,i+128,i+128);
				break;
			case 10:
				printf("\n%-3d --> \\n\t|\t%d --> %c",i,i+128,i+128);
				break;
			case 11:
				printf("\n%-3d --> \\v\t|\t%d --> %c",i,i+128,i+128);
				break;
			case 12:
				printf("\n%-3d --> \\f\t|\t%d --> %c",i,i+128,i+128);
			case 13:
				printf("\n%-3d --> \\r\t|\t%d --> %c",i,i+128,i+128);
				break;
			default:
				printf("\n%-3d --> %-4c\t|\t%d --> %c",i,i,i+128,i+128);	
		}	
	}	
}

