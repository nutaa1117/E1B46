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
	for(i=0;i<b;i++){
		printf("輸入學生姓名:");
		scanf("%s",students[i].name);
		printf("輸入學號 (6位整數):");
		scanf("%d",&students[i].id);
		while(students[i].id<100000 || students[i].id>999999){
			printf("輸入錯誤，請重新輸入:");
		    scanf("%d",&students[i].id);
		    cleantoo();
		}
		printf("輸入數學成績(0~100):");
		scanf("%d",&students[i].math);
		while(students[i].math<0 || students[i].math>100){
			printf("輸入錯誤，請重新輸入數學成績(0~100):");
			cleantoo();
		}
		printf("輸入物理成績(0~100):");
		scanf("%d",&students[i].physics);
		while(students[i].physics<0 || students[i].physics>100){
			printf("輸入錯誤，請重新輸入物理成績(0~100):");
			scanf("%d",&students[i].physics);
			cleantoo();
		}
		printf("輸入英文成績(0~100):");
		scanf("%d",&students[i].english);
		while(students[i].english<0 || students[i].english>100){
			printf("輸入錯誤，請重新輸入英文成績(0~100):");
			scanf("%d",&students[i].english);
			cleantoo();
		}
		students[i].average=(students[i].math+students[i].physics+students[i].english)/3.0;	
	}
	  cleantoo();
	  clean();
	
}

void displaystudentlist(){
	clean();
	printf("name  ID  math  pyhsics  english  average\n");
	int i;
	for(i=0;i<a;i++){
		printf("%s  %d  %d  %d  %d  %.1f\n",students[i].name,students[i].id,students[i].math,students[i].physics,students[i].english,students[i].average);
	}
	system("pause");
	clean();
}

void findstudentlist(){
	cleantoo();
	printf("想要找尋的學生姓名:");
	char findname[50];
	scanf("%s",findname);
	int i,e=0;
	for(i=0;i<a;i++){
		if(strcmp(students[i].name,findname)==0){
			printf("name:%s  ID:%d  math:%d  pyhsics:%d  english:%d  average:%.1f\n",students[i].name,students[i].id,students[i].math,students[i].physics,students[i].english,students[i].average);
		    break;
		    e=1;
		}
	}
	
	if(e==0){
		printf("輸入的名字不存在!"); 
	}
	 system("pause");
	 clean();
	
}

void compare(){
	int i,j;
	for(i=0;i<a-1;i++){
      for(j=0;j<a-1-i;j++){
      	if(students[j].average<students[j+1].average){
      		struct Student d=students[j];
      		students[j]=students[j+1];
      		students[j+1]=d;
		  }
	  } 
	
   }
} 


int main(void){
	mynumber();
	system("pause");
	clean();
}

