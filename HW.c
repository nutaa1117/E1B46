#include <stdio.h>
#include <stdlib.h>

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
    system("pause");
    system("cls");

    int password = 2024, input=0, n=0,v=0;    //�]�w��ƦW��
    char choose;
    char draw;

    printf("�п�J�K�X:\n");
    scanf("%d", &input);
    while (input != 2024)
    {                 //while�P�_�O���O2024
        n++;
        if (n == 3)
        {
            printf("����T��");
            return 0;
        }
        printf("�K�X���~");
        printf("�A����J�K�X:");
        scanf("%d", &input);
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

    switch (choose)
    {

    case 'a':
    case 'A':
        printf("�п�J�@�Ӧr���]a-n�^�G");
        scanf(" %c", &draw);

        if (draw < 'a' || draw > 'n')
        {
            printf("�п�J���Ľd�򪺦r���]a-n�^\n");  //�P�_��J���r�����S���b�d���
            scanf(" %c", &draw);
        }

        char c, d;
        for (c = 'a'; c <= draw; c++) {
            for (d = draw; d > c; d--) {
                printf("  "); // �L�X�Ů��������T���ξa�k
            }
            for (d = 'a'; d <= c; d++) {
                printf("%c ", d); // �L�X�r��
            }
            printf("\n"); 
        }
        break;
    
		case 'b':
        case 'B':
                
                printf("�п�J�@�Ӿ��(1-9)�G");  
                scanf("%d", &v);
                if (v<1||v>9) {      //�P�_�O�_�b1~9���϶� 
                    printf("�п�J���Ľd�򪺾�ơ]1-9�^\n");
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
        		if(a=='y' || a=='Y')       
               
                
        
	

	

	

	
	
	
	}

    



system("pause");
return 0;


}

