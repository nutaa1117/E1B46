#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROWS 9
#define COLS 9

void Booking_system(){                              //��ƿ�檺�w�q�A�᭱�ϥήɥi�����s�X�� 
        printf("----------[BookingSystem]----------\n");
        printf("|  a. Available seats             |\n");
        printf("|  b. Arrange for you             |\n");
        printf("|  c. Choose by yourself          |\n");
        printf("|  d. Exit                        |\n");
        printf("------------------------------------\n");
	    printf("choose what you want?");
}

void Firstseats(char seats[ROWS][COLS]){        //����G����Ƹ̪��Ȧs�J 
	int i,j;
	for( i=0;i<ROWS;i++){
		for( j=0;j<COLS;j++){
			seats[i][j]='-';            //�C�@�C�C�@�泣�O- 
		}
	}

    srand(time(0));         //�]�w�ɶ��ؼơA�o�˨C�����|���X���P���� 
    for(i=0;i<10;i++){          //���ͤQ���H����l 
    	int row,col;
	 do{
	 	row=rand()%ROWS;                
	 	col=rand()%COLS;
	 }while(seats[row][col]=='*');       //�H�����ͪ��Ʀr�A������C����m 
	 seats[row][col]='*';           //�L�X*�Ÿ� 
    }   
}

void displayseats(char seats[ROWS][COLS]){     
	printf(" \\123456789\n");
	int i,j;
  for(i=ROWS-1;i>=0;i--){                     //�L�X�y����
      printf("%d ", i + 1);       
  	for(j=0;j<COLS;j++){
  		printf("%c",seats[i][j]);
	  } 
	  printf("\n");
   }
}
   

int main(void){
	char seats[ROWS][COLS];
    char choice;
	
	printf("++_=====_+++_+_+_+++++++====_+_+_+_+=====+_+_+_+_+_+=========_+_+_+_+_+_~~\n");
	printf("_________________________________________________________________________?\n");
	printf("                                          ~  ~~~~~~~~~~~~~~~~~~~~~~    !!!\n");
	printf(" ############      ############           ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ #%@\n");
	printf("      #                  #                                            $$&^\n");
	printf("      #                  #                  #        # #               +++\n");
	printf("      #                  #                  #       #   #                 \n");
	printf("      #      #     #     #    #     #    #######     #       #     #      \n");
	printf("      #      #     #     #    #     #       #         #      #     #      \n");
	printf("  #   #      #     #  #  #    #     #       #          #     #     #      \n");
	printf("   #  #      #     #   # #    #     #       # #     #   #    #     #      \n");
	printf("    ##        # # #     ##     # # #        ##       # #      # # #       \n ");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~  \n");
	printf("\n");
	printf("    #                                                                     \n");
	printf("    #    #                                                                \n");
	printf("    #   #                   #       ##         ##### ##      #  # #       \n");
	printf("    # #        #  ###              #   #      #        #     ##    #      \n");
	printf("    ##               #      #       #         #########      #     #      \n");
	printf("    # #       ###### #      #        #        #              #     # xdxdd\n");
	printf("    #   #    #       #      #     #   #        #      #      #     # ><><>\n");
	printf("@   #    #    # # # ##      #      ## #         ## ## #      #     #  ++==\n");
	printf("@_________________________________________________________________________\n");
	printf(" @@ ++++!!!!@@22@?????@~~++++_/+++++++()()?>?>+++?>?>��{++_==_++12=-=--===\n");
	
	system("pause");
    system("cls");
    
    int input=0,n=0,i=3;
    printf("Please enter your password(You have 3 chance! )\n");
    scanf("%d",&input);
    while(input!=2024){
    	n++;
    	if(n==3){
		 printf("Wrong 3 time already");
		return 0;}
		i--;
    printf("Wrong Please try again(%d chance)\n",i);	 
    	scanf("%d",&input);
	}
    printf("Correct!welcome!!\n");
    system("pause");
    system("cls");
	
	
	Firstseats(seats);
	    do{
	    	Booking_system();
	    	scanf("%c",&choice);
	    	
	    switch(choice){
	    	case 'a':
	    		printf("Available seats:\n");
	    		displayseats(seats);
	    	     system("pause");
                 system("cls");
	    	break;
		}	
	    	
	    	
		
		
		
		
		
		}while(choice!=0);
	
	
	
	
	
	system("pause");
	return 0;
}
