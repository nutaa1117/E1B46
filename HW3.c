#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROWS 9
#define COLS 9

void Booking_system(){
        printf("----------[BookingSystem]----------\n");
        printf("|  a. Available seats             |\n");
        printf("|  b. Arrange for you             |\n");
        printf("|  c. Choose by yourself          |\n");
        printf("|  d. Exit                        |\n");
        printf("------------------------------------\n");
	    printf("choose what you want?");
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
	printf(" @@ ++++!!!!@@22@?????@~~++++_/+++++++()()?>?>+++?>?>би{++_==_++12=-=--===\n");
	
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
	
	    
	
	
	
	
	
	system("pause");
	return 0;
}
