#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	printf("  *****         \n");       //�s�@�ӤH���e������ 
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
  
  int password=2024,input=0,n=0;    //�]�w��ƦW�� 
  	char choose;     //�]�w�r���W�� 
	char draw;
  
  
  printf("�п�J�K�X:\n");
  scanf("%d",&input);
  while(input!=2024){                 //while�P�_�O���O2024 
		n++;
		if(n==3){
  		printf("����T��");
  		return 0;
  		}
  		printf("�K�X���~");
  		printf("�A����J�K�X:");
  		scanf("%d",&input);
  	
	  
  }
 printf("���߿�J���T"); 
 system("pause");
  system("cls");
  
  printf("--------------------------\n");
  printf("|  a. �e�X�����T����      |\n");          //�s�@��� 
  printf("|  b. ��ܭ��k��          |\n");
  printf("|  c. ����                |\n");
  printf("--------------------------- \n");
        
		printf("�п�ܾާ@�G");
        scanf(" %c", &choose);
 system("pause");
  system("cls");
  
  switch (choose) {                         
  
            case 'a':
            case 'A':
				 printf("�п�J�@�Ӧr���]a-n�^�G");
                scanf(" %c", &draw);
                
                if (draw<'a' || draw >'n') {
                    printf("�п�J���Ľd�򪺦r���]a-n�^\n");  //�P�_��J���r�����S���b�d��� 
                    break;
                }
 
 	}
 } 
