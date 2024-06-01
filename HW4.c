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

struct Student{                    //結構student 
	char name[50];            //裡面包含姓名身分證成績平均 
	int id;
	int math;
	int physics;
	int english;
	float average;
	
};
struct Student students[10];             //結構陣列的設定 
int a=0;


void clean() {
    system("cls"); 
}

void cleantoo(){                   //清理緩衝區的函數 
	int c;
	while((c=getchar())!='\n'&&c!=EOF);
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
	for(i=0;i<b;i++){                        //迴圈持續輸入存進陣列中 
		printf("輸入學生姓名:");
		scanf("%s",students[i].name);
		printf("輸入學號 (6位整數):");
		scanf("%d",&students[i].id);
		while(students[i].id<100000 || students[i].id>999999){       //如果不是六位數的話，就要重新輸 
			printf("輸入錯誤，請重新輸入:");
		    scanf("%d",&students[i].id);
		    cleantoo();
		}
		printf("輸入數學成績(0~100):");
		scanf("%d",&students[i].math);
		while(students[i].math<0 || students[i].math>100){
			printf("輸入錯誤，請重新輸入數學成績(0~100):");
			scanf("%d",&students[i].math);
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
		students[i].average=(students[i].math+students[i].physics+students[i].english)/3.0;	//平均值的計算 
	}
	  cleantoo();
	  clean();
	
}

void displaystudentlist(){                    //輸入後列印出這些值的函數 
	cleantoo();
	int i;
	for(i=0;i<a;i++){
		printf("name:%s  ID:%d  math:%d  physics:%d  english:%d  average:%.1f\n",students[i].name,students[i].id,students[i].math,students[i].physics,students[i].english,students[i].average);
	}
	system("pause");
	clean();
}

void findstudentlist(){
	cleantoo();
	printf("想要找尋的學生姓名:");
	char findname[50];                  //設定一個字串 
	scanf("%s",findname);             //輸入一個字串 
	cleantoo();
	int i,e=0;
	for(i=0;i<a;i++){
		if(strcmp(students[i].name,findname)==0){         //string標頭黨裡的函數，可以用來比對字串是否相同，如果相同會傳回0 
			printf("name:%s  ID:%d  math:%d  pyhsics:%d  english:%d  average:%.1f\n",students[i].name,students[i].id,students[i].math,students[i].physics,students[i].english,students[i].average);
		    e=1;
			break;
		}
	}
	
	if(e==0){
		printf("輸入的名字不存在!"); 
	}
	 system("pause");
	 clean();
	
}

void password(){
int n=0,input=0,i=3;
printf("Please enter your password(You have 3 chance!)\n");       
    scanf("%d",&input);
    while(input!=2024){                   //判斷輸入的密碼是不是2024 
    	n++;                           
    	if(n==3){                    //當n=3時，程式結束 
		 printf("Wrong 3 time already");
		exit(0);}
		i--;
    printf("Wrong Please try again(%d chance)\n",i);	 //讓使用者重新輸入 
    	scanf("%d",&input);
	}
    printf("Correct!welcome!!\n");                //輸入正確，歡迎你 
    system("pause");
    clean();
}



void compare(){           //比對平均值的大小 
	int i,j;
	for(i=0;i<a-1;i++){                         //外層迴圈，到倒數第一個數 
      for(j=0;j<a-1-i;j++){                //內層迴圈，到倒數第二個數 
      	if(students[j].average<students[j+1].average){
      		struct Student d=students[j];               //交換兩個的位置 
      		students[j]=students[j+1];
      		students[j+1]=d;
		  }
	  } 
	
   }
} 

void rank(){
	cleantoo();
	compare();           //叫出比較函數，改變順序 
	int i;
	for(i=0;i<a;i++){
		printf("name:%s  ID:%d  average:%.1f\n",students[i].name,students[i].id,students[i].average);
	}
	
	system("pause");
	clean();
}

void leave(){
	cleantoo();
	char f;
	while(1){
		printf("確定離開？(y/n):");
		f=getchar();
		cleantoo();
		if(f=='y'||f=='Y'){
			exit(0);
		}else if(f=='n'||f=='N'){
			break;
		}
	}
}
void Grade(){

        printf("------------[Grade System]----------\n");
        printf("|  a. Enter student grades          |\n");
        printf("|  b. Display student grades        |\n");
        printf("|  c. Search for student grades     |\n");
        printf("|  d. Grade ranking                 |\n");
        printf("|  e. Exit system                   |\n");
        printf("------------------------------------\n");
        printf("請選擇: ");
}
int main(void){
	mynumber();            //個人風格 
	system("pause");
	clean();
	password();               //密碼 
	cleantoo();
	char h;
	while(1){
		 Grade();           //叫出選單 
		 h=getchar();
		 cleantoo();
		 switch(h){                     //依照使用者所輸入的 
		 	case'a':
		 		studentlist();
		 	break;
		 	case'b':
		 		displaystudentlist();
		 	break;
		 	case'c':
		 		findstudentlist();
		 	break;
		 	case'd':
		 		rank();
		 	break;
		 	case'e':
		 		leave();
		 	break;
		 	default:
		 		printf("請輸入a~e");
		 	
		 	
		 }
			
	}
	return 0;
}

