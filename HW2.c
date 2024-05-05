#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("  *****         \n");       //製作個人的畫面風格
    printf(" *     *        \n");
    printf("*  O O  *      \n");
    printf("*   ^   *     \n");
    printf(" * \\_/ *       \n");
    printf(" -------   /|     ***       /|       ****\n");
    printf(" |        / |     *  *     / |       *\n");
    printf(" |----      |     * *     /__|_      ****\n");
    printf(" |          |     **         |       *  *\n");
    printf(" -------  __|__   *  *       |       ****\n");
    printf("                  ***                \n");


    printf("    \\     /             \\             \\         \\    \\     \n");
    printf("    ---  /-----      ---------       -----  -----------   \n");
    printf("     /               \\  ---- /        ---   |     \\     \n");
    printf("    /--  -|-|--          /\\           ---   |---   \\  / \n");
    printf("   /  /   | | /           /\\          ---   |  |    \\/ \n");
    printf("  / \\/    |              /  \\        |   |  |\\ |    /\\ \n");
    printf("          -----              \\        ---   |         \\/  \n");
    system("pause");
    system("cls");

    int password = 2024, input=0, n=0,v=0;    //設定整數名稱
    char choose;
    char draw;

    printf("請輸入密碼:\n");
    scanf("%d", &input);
    while (input != 2024)
    {                 //while判斷是不是2024
        n++;
        if (n == 3)                 //用if來判斷n，可知道輸入了幾次 
        {
            printf("輸錯三次");        //印出輸錯三次 
            return 0;
        }
        printf("密碼錯誤");
        printf("再次輸入密碼:");
        scanf("%d", &input);
    }
    printf("恭喜輸入正確");
    system("pause");
    system("cls");

    printf("--------------------------\n");
    printf("|  a. 畫出直角三角形      |\n");          //製作選單
    printf("|  b. 顯示乘法表          |\n");
    printf("|  c. 結束                |\n");
    printf("--------------------------- \n");

    printf("請選擇操作：");
    scanf(" %c", &choose);
    system("pause");
    system("cls");

    switch (choose)            //switch來判斷使用者輸入了甚麼 
    {

    case 'a':                         //a或A的話 
    case 'A':
        printf("請輸入一個字元（a-n）：");          //要求輸入字元a~n 
        scanf(" %c", &draw);

        if (draw < 'a' || draw > 'n')              //判斷輸入的字元有沒有在範圍裡
        {
            printf("請輸入有效範圍的字元（a-n）\n");  
            scanf(" %c", &draw);
        }

        char c, d;                              
        for (c = 'a'; c <= draw; c++) {               //從a開始直到輸入的字元 
            for (d = draw; d > c; d--) {           //內部迴圈，從輸入的字元開始，直到與外部迴圈相同 
                printf("  "); // 印出空格讓直角三角形靠右
            }
            for (d = 'a'; d <= c; d++) {            //內部迴圈從a開始直到與外部相同 
                printf("%c ", d); // 印出字元
            }
            printf("\n"); 
        }
        break;
    
		case 'b':                 //輸入b或B時 
        case 'B':
                
                printf("請輸入一個整數(1-9)：");  
                scanf("%d", &v);
                if (v<1||v>9) {      //判斷是否在1~9的區間 
                    printf("請輸入有效範圍的整數（1-9）\n");
                    scanf("%d", &v);
                }

                
                int i=0,j=0;                   
                for (i=1; i<=v;i++) {             //印出乘法表 
                    for (j=1; j<=v; j++)           
                        printf("%4d\n",i*j);
                    	printf("\n");
                }break;
                
          	case 'c':                //如果輸入的字元是c或C的話 
    		case 'C':
       		 printf("continue(y/n)?");             //印出是否繼續 
        	char a;
        	scanf(" %c",&a);                   //要求使用者輸入字元 
        	while(a!='y'&&a!='Y'&&a!='n'&&a!='N')   {            //如果輸入的字元不是y,Y,n,N,就會要求重輸 
            	 printf("continue(y/n)?");
            	 scanf(" %c",&a);
			} 
			if(a=='y' || a=='Y'){                            //如果輸入y或Y 
        	printf("--------------------------\n");              //重新回到二，執行程式 
    printf("|  a. 畫出直角三角形      |\n");          //製作選單
    printf("|  b. 顯示乘法表          |\n");
    printf("|  c. 結束                |\n");
    printf("--------------------------- \n");

    printf("請選擇操作：");
    scanf(" %c", &choose);
    system("pause");
    system("cls");

    switch (choose)
    {

    case 'a':
    case 'A':
        printf("請輸入一個字元（a-n）：");
        scanf(" %c", &draw);

        if (draw < 'a' || draw > 'n')
        {
            printf("請輸入有效範圍的字元（a-n）\n");  //判斷輸入的字元有沒有在範圍裡
            scanf(" %c", &draw);
        }

        char c, d;
        for (c = 'a'; c <= draw; c++) {
            for (d = draw; d > c; d--) {
                printf("  "); // 印出空格讓直角三角形靠右
            }
            for (d = 'a'; d <= c; d++) {
                printf("%c ", d); // 印出字元
            }
            printf("\n"); 
        }
        break;
    
		case 'b':
        case 'B':
                
                printf("請輸入一個整數(1-9)：");  
                scanf("%d", &v);
                if (v<1||v>9) {      //判斷是否在1~9的區間 
                    printf("請輸入有效範圍的整數（1-9）\n");
                    scanf("%d", &v);
                }

                
                int i=0,j=0;
                for (i=1; i<=v;i++) {
                    for (j=1; j<=v; j++) 
                        printf("%4d\n",i*j);
                    	printf("\n");
                }break;
                
          	case 'c':
    		case 'C':
       		 printf("continue(y/n)?");
        	char a;
        	scanf(" %c",&a);
        	while(a!='y'&&a!='Y'&&a!='n'&&a!='N')   {
            	 printf("continue(y/n)?");
            	 scanf(" %c",&a);
			} 
			if(a=='y' || a=='Y'){
        	
			}      
            else if(a=='n'||a=='N'){
            	return 0;
			}   
            
        
	
	
	
	}

		
		
		
		
			}      
            else if(a=='n'||a=='N'){          //如果輸入n或N的話，則程式結束 
            	return 0;
			}   
            
        
	
	
	}


}

