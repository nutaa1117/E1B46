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
    int found = 0;                 //標記是否找到合適的座位
    int row, col, i, fit;
    while(!found){                    //當還沒找到合適的座位時 
    	row=rand()%ROWS;
    	col=rand()%(COLS-numSeats+1);          //隨機生成列，確保可以容納numSeats個連續座位 
    	fit=1;
	  
	  for(i=0;i<numSeats;i++){               //檢查隨機生成的座位是否都是空的 
	  	if(seats[row][col+i]!='-'){          //如果座位不是空的 
	  		fit=0;
	  		break;
		  }
	  }
      
      if(fit){                      //如果所有座位都適合 
      	for(i=0;i<numSeats;i++){
      		seats[row][col+i]='@';
		  }
		  found=1;                //表示找到了適合的座位，退出迴圈 
	  }
 
   }
}

 int OKinput(char *input, int *row, int *col) {
    if (strlen(input) != 3 || input[1] != '-') return 0;           //檢查輸入的格式是否是正確的   

    *row = input[0] - '1';          //將第一個數字轉換為行 
    *col = input[2] - '1';           //將第三個數字轉換為列 

    if (*row < 0 || *row >= ROWS || *col < 0 || *col >= COLS) return 0;    //檢查行和列是否在合理範圍內 

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
   
    printf("Please enter your password(You have 3 chance!)\n");       
    scanf("%d",&input);
    while(input!=2024){                   //判斷輸入的密碼是不是2024 
    	n++;                           
    	if(n==3){                    //當n=3時，程式結束 
		 printf("Wrong 3 time already");
		return 0;}
		i--;
    printf("Wrong Please try again(%d chance)\n",i);	 //讓使用者重新輸入 
    	scanf("%d",&input);
	}
    printf("Correct!welcome!!\n");                //輸入正確，歡迎你 
    system("pause");
    system("cls");
	
	
	Firstseats(seats);
	    do{
	
	    	Booking_system();                 //顯示選單 
	    	choice=getchar();                 //取得使用者輸入的字元 
	    	clearInputBuffer() ;              //清空輸入緩衝區 
	    	
	    switch(choice){
		
	    	case 'a':                                   //顯示被訂走的位子 
	    		printf("Available seats:\n");
	    		displayseats(seats);
	    	     printf("press enter to return the Booking_system...");
	    	     getchar();
	    	     break;
			case 'b':{
				
			     int numSeats;                                
			    printf("How many seats do you want(1~4) ");            //詢問使用者要多少個座位              
                scanf("%d", &numSeats);
                clearInputBuffer();
			    if (numSeats < 1 || numSeats > 4) {            //檢查輸入是否有效 
                    printf("wrong number. press enter to return the Booking_system...");
                    getchar();
                    break;
                }
			    char CopySeats[ROWS][COLS];
                   memcpy(CopySeats, seats, sizeof(seats));           //複製初始化座位表 
                   suggestSeats(CopySeats, numSeats);           //座位建議函數，把參數丟入 

                
                   printf("Suggested seats:\n");
                    displayseats(CopySeats);

                    printf("Do you like (y/n)?: ");       //詢問使用者是否滿意 
                    cont = getchar(); 
                    clearInputBuffer();

                if (cont=='y' || cont=='Y') {         //滿意的話，就更新座位表 
                memcpy(seats,CopySeats,sizeof(seats));
            }
                break;
			
			}
		    
		    case 'c':{
		    	char input[4];
		    	int row,col;
		    	printf("Enter the seats you want(ex: 1-2)");        //叫使用者輸入想坐的座位 
		    	scanf("%s",&input);
		    	clearInputBuffer();
		    	if(!OKinput(input,&row,&col) || seats[row][col]!='-'){           //檢查輸入是否有效 
		    		printf("wrong or the seats already taken");
		    		getchar();
		    		break;
				}
		    	seats[row][col] = '@';                 //將輸入的座位標示為@ 
                printf("Chosen seats:\n");
                displayseats(seats);
                printf("press enter to return the Booking_system...");
                getchar();

                int i,j;                                //將座位標示為* 
                for(i=0;i<ROWS;i++){
                    for(j=0;j<COLS;j++){
                        if(seats[i][j]=='@'){
                            seats[i][j] ='*';
                        }
                    }
                }
		    	
				break;
			}
		    
		    case 'd':{
				printf("Continue? (y/n):");          //詢問是否繼續 
                cont = getchar();   
                clearInputBuffer();

                if(cont=='n' ||cont=='N'){
                    printf("Over!!\n");                     //輸入n就結束程式 
                    return 0;
                } else if(cont=='y' || cont=='Y'){           //輸入y就回到選單 
                    printf("OK!press enter to return the Booking_system...");
                    getchar();
                }
			
				
				break;
			}
		    default:                     //當輸入的字元不是a b c d  
                printf("Wrong!Please enter a b c d \n");
                printf("press enter to return the Booking_system...");
                getchar();
                break;
		    
		    
       	}
			}while(choice!=5);    //當choice不是5的時候，重複迴圈 

		
		
		
	
	
	system("pause");
	return 0;

}

	
	
	
