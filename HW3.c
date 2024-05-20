#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <string.h>
#define ROWS 9
#define COLS 9

void clearInputBuffer() {    //���F�ˬd��J�w�İϤ����|���h�l���r�� 

    int c;
    while ((c = getchar()) != '\n' && c != EOF);}



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
   
   void suggestSeats(char seats[ROWS][COLS], int numSeats){  
    int found = 0;                 //�аO�O�_���X�A���y��
    int row, col, i, fit;
    while(!found){                    //���٨S���X�A���y��� 
    	row=rand()%ROWS;
    	col=rand()%(COLS-numSeats+1);          //�H���ͦ��C�A�T�O�i�H�e��numSeats�ӳs��y�� 
    	fit=1;
	  
	  for(i=0;i<numSeats;i++){               //�ˬd�H���ͦ����y��O�_���O�Ū� 
	  	if(seats[row][col+i]!='-'){          //�p�G�y�줣�O�Ū� 
	  		fit=0;
	  		break;
		  }
	  }
      
      if(fit){                      //�p�G�Ҧ��y�쳣�A�X 
      	for(i=0;i<numSeats;i++){
      		seats[row][col+i]='@';
		  }
		  found=1;                //��ܧ��F�A�X���y��A�h�X�j�� 
	  }
 
   }
}

 int OKinput(char *input, int *row, int *col) {
    if (strlen(input) != 3 || input[1] != '-') return 0;           //�ˬd��J���榡�O�_�O���T��   

    *row = input[0] - '1';          //�N�Ĥ@�ӼƦr�ഫ���� 
    *col = input[2] - '1';           //�N�ĤT�ӼƦr�ഫ���C 

    if (*row < 0 || *row >= ROWS || *col < 0 || *col >= COLS) return 0;    //�ˬd��M�C�O�_�b�X�z�d�� 

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
	printf(" @@ ++++!!!!@@22@?????@~~++++_/+++++++()()?>?>+++?>?>��{++_==_++12=-=--===\n");
	
	system("pause");
    system("cls");
    
	char seats[ROWS][COLS],choice,cont;
    int input=0,n=0,i=3;
   
    printf("Please enter your password(You have 3 chance!)\n");       
    scanf("%d",&input);
    while(input!=2024){                   //�P�_��J���K�X�O���O2024 
    	n++;                           
    	if(n==3){                    //��n=3�ɡA�{������ 
		 printf("Wrong 3 time already");
		return 0;}
		i--;
    printf("Wrong Please try again(%d chance)\n",i);	 //���ϥΪ̭��s��J 
    	scanf("%d",&input);
	}
    printf("Correct!welcome!!\n");                //��J���T�A�w��A 
    system("pause");
    system("cls");
	
	
	Firstseats(seats);
	    do{
	
	    	Booking_system();                 //��ܿ�� 
	    	choice=getchar();                 //���o�ϥΪ̿�J���r�� 
	    	clearInputBuffer() ;              //�M�ſ�J�w�İ� 
	    	
	    switch(choice){
		
	    	case 'a':                                   //��ܳQ�q������l 
	    		printf("Available seats:\n");
	    		displayseats(seats);
	    	     printf("press enter to return the Booking_system...");
	    	     getchar();
	    	     break;
			case 'b':{
				
			     int numSeats;                                
			    printf("How many seats do you want(1~4) ");            //�߰ݨϥΪ̭n�h�֭Ӯy��              
                scanf("%d", &numSeats);
                clearInputBuffer();
			    if (numSeats < 1 || numSeats > 4) {            //�ˬd��J�O�_���� 
                    printf("wrong number. press enter to return the Booking_system...");
                    getchar();
                    break;
                }
			    char CopySeats[ROWS][COLS];
                   memcpy(CopySeats, seats, sizeof(seats));           //�ƻs��l�Ʈy��� 
                   suggestSeats(CopySeats, numSeats);           //�y���ĳ��ơA��Ѽƥ�J 

                
                   printf("Suggested seats:\n");
                    displayseats(CopySeats);

                    printf("Do you like (y/n)?: ");       //�߰ݨϥΪ̬O�_���N 
                    cont = getchar(); 
                    clearInputBuffer();

                if (cont=='y' || cont=='Y') {         //���N���ܡA�N��s�y��� 
                memcpy(seats,CopySeats,sizeof(seats));
            }
                break;
			
			}
		    
		    case 'c':{
		    	char input[4];
		    	int row,col;
		    	printf("Enter the seats you want(ex: 1-2)");        //�s�ϥΪ̿�J�Q�����y�� 
		    	scanf("%s",&input);
		    	clearInputBuffer();
		    	if(!OKinput(input,&row,&col) || seats[row][col]!='-'){           //�ˬd��J�O�_���� 
		    		printf("wrong or the seats already taken");
		    		getchar();
		    		break;
				}
		    	seats[row][col] = '@';                 //�N��J���y��Хܬ�@ 
                printf("Chosen seats:\n");
                displayseats(seats);
                printf("press enter to return the Booking_system...");
                getchar();

                int i,j;                                //�N�y��Хܬ�* 
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
				printf("Continue? (y/n):");          //�߰ݬO�_�~�� 
                cont = getchar();   
                clearInputBuffer();

                if(cont=='n' ||cont=='N'){
                    printf("Over!!\n");                     //��Jn�N�����{�� 
                    return 0;
                } else if(cont=='y' || cont=='Y'){           //��Jy�N�^���� 
                    printf("OK!press enter to return the Booking_system...");
                    getchar();
                }
			
				
				break;
			}
		    default:                     //���J���r�����Oa b c d  
                printf("Wrong!Please enter a b c d \n");
                printf("press enter to return the Booking_system...");
                getchar();
                break;
		    
		    
       	}
			}while(choice!=5);    //��choice���O5���ɭԡA���ưj�� 

		
		
		
	
	
	system("pause");
	return 0;

}

	
	
	
