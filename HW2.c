#include<stdio.h>
#include<stdlib.h>
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
 printf("                           \\\\               |           \n");
  system("pause");
  system("cls");
  
  int password=2024,input=0,n=0;
  	char choose;
	char draw;
  
  
  printf("請輸入密碼:\n");
  scanf("%d",&input);
  while(input!=2024){
		n++;
		if(n==3){
  		printf("輸錯三次");
  		return 0;
  		}
  		printf("密碼錯誤");
  		printf("再次輸入密碼:");
  		scanf("%d",&input);
  	
	  
  }
 printf("恭喜輸入正確"); 
 system("pause");
  system("cls");
  
  printf("--------------------------\n");
  printf("|  a. 畫出直角三角形      |\n");
  printf("|  b. 顯示乘法表          |\n");
  printf("|  c. 結束                |\n");
  printf("--------------------------- \n");
        
		printf("請選擇操作：");
        scanf(" %c", &choose);
 system("pause");
  system("cls");
 
 
 
 } 
