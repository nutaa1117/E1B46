#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void mynumber(){
	printf("—--------------------------------------------------------------------------------------------\n");
	printf("!                       44  44                                 66                            !\n");
	printf("!                      44   44                               66                              !\n");
	printf("!                     44    44                            66                                 !\n");
	printf("!                    44     44                          66                                   !\n");
	printf("!                   44      44                         66                                    !\n");
	printf("!                  44       44                        66                                     !\n");
	printf("!                 44        44                       66           66                         !\n");
	printf("!                44         44                       66      66        66                    !\n");
	printf("!               444444444444444444444                66  66             66                   !\n");
	printf("!               444444444444444444444                66                  66                  !\n");
	printf("!                           44                       66                   66                 !\n");
	printf("!                           44                        66                  66                 !\n");
	printf("!                           44                         66                 66                 !\n");
	printf("!                           44                           66             66                   !\n");
	printf("!                           44                             66   66   66                      !\n");
	printf("—--------------------------------------------------------------------------------------------\n");
}

struct Student{
	char name[50];
	int id;
	int math;
	int physics;
	int english;
	float average;
	
};
struct Student students[10];
int a=0;


void clean() {
    system("cls"); 
}

void cleantoo(){
	int c;
	while((c=getchar())!='\n' && c!=EOF);
}

void studentlist(){
	clean();
	printf("請輸入要填的學生人數(5~10)");
	int b;
	scanf("%d",&b);
	while(b<5 || b>10){
		printf("輸入不在範圍內，請重新嘗試:");
		scanf("%d",&b);
		cleantoo();
	}
	a=b;
	int i;
	for( i=0;i<b;i++){
		printf("輸入學生姓名:");
		scanf("%s",students[i].name);
		printf("輸入學號 (6位整數):");
		scanf("%d",&students[i].id);
		while(students[i].id<100000 || students[i].id>999999){
			printf("輸入錯誤，請重新輸入:");
		    scanf("%d",&students[i].id);
		    cleantoo();
		}
		
		
		
	}
	
	
}


int main(void){
	mynumber();
	system("pause");
	clean();
}

