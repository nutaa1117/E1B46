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
        if (n == 3)                 //��if�ӧP�_n�A�i���D��J�F�X�� 
        {
            printf("����T��");        //�L�X����T�� 
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

    switch (choose)            //switch�ӧP�_�ϥΪ̿�J�F�ƻ� 
    {

    case 'a':                         //a��A���� 
    case 'A':
        printf("�п�J�@�Ӧr���]a-n�^�G");          //�n�D��J�r��a~n 
        scanf(" %c", &draw);

        if (draw < 'a' || draw > 'n')              //�P�_��J���r�����S���b�d���
        {
            printf("�п�J���Ľd�򪺦r���]a-n�^\n");  
            scanf(" %c", &draw);
        }

        char c, d;                              
        for (c = 'a'; c <= draw; c++) {               //�qa�}�l�����J���r�� 
            for (d = draw; d > c; d--) {           //�����j��A�q��J���r���}�l�A����P�~���j��ۦP 
                printf("  "); // �L�X�Ů��������T���ξa�k
            }
            for (d = 'a'; d <= c; d++) {            //�����j��qa�}�l����P�~���ۦP 
                printf("%c ", d); // �L�X�r��
            }
            printf("\n"); 
        }
        break;
    
		case 'b':                 //��Jb��B�� 
        case 'B':
                
                printf("�п�J�@�Ӿ��(1-9)�G");  
                scanf("%d", &v);
                if (v<1||v>9) {      //�P�_�O�_�b1~9���϶� 
                    printf("�п�J���Ľd�򪺾�ơ]1-9�^\n");
                    scanf("%d", &v);
                }

                
                int i=0,j=0;                   
                for (i=1; i<=v;i++) {             //�L�X���k�� 
                    for (j=1; j<=v; j++)           
                        printf("%4d\n",i*j);
                    	printf("\n");
                }break;
                
          	case 'c':                //�p�G��J���r���Oc��C���� 
    		case 'C':
       		 printf("continue(y/n)?");             //�L�X�O�_�~�� 
        	char a;
        	scanf(" %c",&a);                   //�n�D�ϥΪ̿�J�r�� 
        	while(a!='y'&&a!='Y'&&a!='n'&&a!='N')   {            //�p�G��J���r�����Oy,Y,n,N,�N�|�n�D���� 
            	 printf("continue(y/n)?");
            	 scanf(" %c",&a);
			} 
			if(a=='y' || a=='Y'){                            //�p�G��Jy��Y 
        	printf("--------------------------\n");              //���s�^��G�A����{�� 
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
            else if(a=='n'||a=='N'){          //�p�G��Jn��N���ܡA�h�{������ 
            	return 0;
			}   
            
        
	
	
	}


}

