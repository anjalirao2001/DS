#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,x;
	char str[30];
	printf("\nEnter a String : ");
	scanf("%s",str);
	
	while(1)
	{
		
		printf("\n1 :: Encryption");
		printf("\n2 :: Decryption");
		printf("\n3 :: Exit\n");
		printf("\nEnter your choice :: ");
		scanf("%d",&x);
		switch(x)
		{
			case 1 : for(i=0;(i<100 && str[i] != '\0');i++)
						str[i]=str[i] + 3;
					printf("\nEncrypted string :: %s\n",str);
					break;
			case 2 : for(i=0;(i<100 && str[i] != '\0');i++)
						str[i]=str[i] - 3;
					printf("\nEncrypted string :: %s\n",str);
					break;
			case 3 : exit(0);
			default : printf("\nInvalid Choice \n");						
		}
	}
	return 0;
}
