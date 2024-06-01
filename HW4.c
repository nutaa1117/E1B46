#include <stdio.h>
#include <stdlib.h>
#include <string.h>




void mynumber(){
	printf("�X--------------------------------------------------------------------------------------------\n");
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
	printf("�X--------------------------------------------------------------------------------------------\n");
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
	while((c=getchar())!='\n'&&c!=EOF);
}

void studentlist(){
	clean();
	printf("�п�J�n�񪺾ǥͤH��(5~10)");
	int b;
	scanf("%d",&b);
	while(b<5 || b>10){
		printf("��J���b�d�򤺡A�Э��s����:");
		scanf("%d",&b);
		cleantoo();
	}
	a=b;
	int i;
	for(i=0;i<b;i++){
		printf("��J�ǥͩm�W:");
		scanf("%s",students[i].name);
		printf("��J�Ǹ� (6����):");
		scanf("%d",&students[i].id);
		while(students[i].id<100000 || students[i].id>999999){
			printf("��J���~�A�Э��s��J:");
		    scanf("%d",&students[i].id);
		    cleantoo();
		}
		printf("��J�ƾǦ��Z(0~100):");
		scanf("%d",&students[i].math);
		while(students[i].math<0 || students[i].math>100){
			printf("��J���~�A�Э��s��J�ƾǦ��Z(0~100):");
			cleantoo();
		}
		printf("��J���z���Z(0~100):");
		scanf("%d",&students[i].physics);
		while(students[i].physics<0 || students[i].physics>100){
			printf("��J���~�A�Э��s��J���z���Z(0~100):");
			scanf("%d",&students[i].physics);
			cleantoo();
		}
		printf("��J�^�妨�Z(0~100):");
		scanf("%d",&students[i].english);
		while(students[i].english<0 || students[i].english>100){
			printf("��J���~�A�Э��s��J�^�妨�Z(0~100):");
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
	printf("�Q�n��M���ǥͩm�W:");
	char findname[50];
	scanf("%s",findname);
	cleantoo();
	int i,e=0;
	for(i=0;i<a;i++){
		if(strcmp(students[i].name,findname)==0){
			printf("name:%s  ID:%d  math:%d  pyhsics:%d  english:%d  average:%.1f\n",students[i].name,students[i].id,students[i].math,students[i].physics,students[i].english,students[i].average);
		    e=1;
			break;
		}
	}
	
	if(e==0){
		printf("��J���W�r���s�b!"); 
	}
	 system("pause");
	 clean();
	
}

void password(){
int n=0,input=0,i=3;
printf("Please enter your password(You have 3 chance!)\n");       
    scanf("%d",&input);
    while(input!=2024){                   //�P�_��J���K�X�O���O2024 
    	n++;                           
    	if(n==3){                    //��n=3�ɡA�{������ 
		 printf("Wrong 3 time already");
		exit(0);}
		i--;
    printf("Wrong Please try again(%d chance)\n",i);	 //���ϥΪ̭��s��J 
    	scanf("%d",&input);
	}
    printf("Correct!welcome!!\n");                //��J���T�A�w��A 
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

void rank(){
	cleantoo();
	compare();
	printf("name  id  average\n");
	int i;
	for(i=0;i<a;i++){
		printf("%s  %d  %.1f",students[i].name,students[i].id,students[i].average);
	}
	
	system("pause");
	clean();
}

void leave(){
	cleantoo();
	char f;
	while(1){
		printf("�T�w���}�H(y/n):");
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
        printf("�п��: ");
}
int main(void){
	mynumber();
	system("pause");
	clean();
	password();
	cleantoo();
	char h;
	while(1){
		 Grade();
		 h=getchar();
		 cleantoo();
		 
		 switch(h){
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
		 		printf("�п�Ja~e");
		 	
		 	
		 }
			
	}
	return 0;
}

