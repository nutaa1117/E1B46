#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#define ROWS 9
#define COLS 9

void clearInputBuffer() {    //為了檢查輸入緩衝區中不會有多餘的字符 

    int c;
    while ((c = getchar()) != '\n' && c != EOF);}



void Booking_system(){                              //函數選單的定義，後面使用時可直接叫出來 
        printf("----------[BookingSystem]----------\n");
        printf("|  a. Available seats             |\n");
        printf("|  b. Arrange for you             |\n");
        printf("|  c. Choose by yourself          |\n");
        printf("|  d. Exit                        |\n");
        printf("------------------------------------\n");
	    printf("choose what you want?");
}

void Firstseats(char seats[ROWS][COLS]){        //先把二階函數裡的值存入 
	int i,j;
	for( i=0;i<ROWS;i++){
		for( j=0;j<COLS;j++){
			seats[i][j]='-';            //每一列每一行都是- 
		}
	}

    srand(time(0));         //設定時間種數，這樣每次都會產出不同的數 
    for(i=0;i<10;i++){          //產生十個隨機位子 
    	int row,col;
	 do{
	 	row=rand()%ROWS;                
	 	col=rand()%COLS;
	 }while(seats[row][col]=='*');       //隨機產生的數字，對應行列的位置 
	 seats[row][col]='*';           //印出*符號 
    }   
}

void displayseats(char seats[ROWS][COLS]){     
	printf(" \\123456789\n");
	int i,j;
  for(i=ROWS-1;i>=0;i--){                     //印出座位表格
      printf("%d ", i + 1);       
  	for(j=0;j<COLS;j++){
  		printf("%c",seats[i][j]);
	  } 
	  printf("\n");
   }
}
   
   void suggestSeats(char seats[ROWS][COLS], int numSeats){  
    int found = 0;
    int row, col, i, fit;
    while(!found){
    	row=rand()%ROWS;
    	col=rand()%(COLS-numSeats+1);
    	fit=1;
	  
	  for(i=0;i<numSeats;i++){
	  	if(seats[row][col+i]!='-'){
	  		fit=0;
	  		break;
		  }
	  }
      
      if(fit){
      	for(i=0;i<numSeats;i++){
      		seats[row][col+i]='@';
		  }
		  found=1;
	  }
 
   }
}

 int OKinput(char *input, int *row, int *col) {
    if (strlen(input) != 3 || input[1] != '-') return 0;

    *row = input[0] - '1';
    *col = input[2] - '1';

    if (*row < 0 || *row >= ROWS || *col < 0 || *col >= COLS) return 0;

    return 1;
}



int main(void){


	
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
	printf(" @@ ++++!!!!@@22@?????@~~++++_/+++++++()()?>?>+++?>?>”{++_==_++12=-=--===\n");
	
	system("pause");
    system("cls");
    
	char seats[ROWS][COLS],choice,cont;
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
	    	choice = getchar();
	    	clearInputBuffer() ;
	    	
	    switch(choice){
		
	    	case 'a':
	    		printf("Available seats:\n");
	    		displayseats(seats);
	    	     printf("press enter to return the Booking_system...");
	    	     getchar();
	    	     break;
			case 'b':{
				
			     int numSeats;
			    printf("How many seats do you want(1~4) ");               
                scanf("%d", &numSeats);
                clearInputBuffer();
			    if (numSeats < 1 || numSeats > 4) {
                    printf("wrong number. press enter to return the Booking_system...");
                    getchar();
                    break;
                }
			    char CopySeats[ROWS][COLS];
                   memcpy(CopySeats, seats, sizeof(seats));
                   suggestSeats(CopySeats, numSeats);

                
                   printf("Suggested seats:\n");
                    displayseats(CopySeats);

                    printf("Do you like (y/n)?: ");
                    cont = getchar(); 
                    clearInputBuffer();

                if (cont=='y' || cont=='Y') {
                memcpy(seats,CopySeats,sizeof(seats));
            }
                break;
			
			}
		    
		    case 'c':{
		    	
		    	
		    	
		    	
		    	
				break;
			}
		    
		    
		    
		    
		    
	}
			}while(choice!=0);

		
		
		
	
	
	system("pause");
	return 0;

}

	
	
	
