
#include <string.h>
#include <stdio.h>
int main()
{
	char sn[] = {'N','e','n','o',0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c,0x0c};
	//char sn[] = { '-','0','1','2','3','4','5','6','7','8','9','B','S','S',0x0c,0x0c };
	char key1[] = "xia0x1ngA-ESC-BC" ;
	char key2[] = "HLJ2's gameID=12";
	char crypt[] = { 0x55,0x59,0x50,0x2,0x4b,0x5,0x5b,0x51,0x76,0x15,0x7c,0x11,0x10,0x7e,0x4e,0x4f };
	char crypt2[] = { 0x55,0x59,0x50,0x2,0x4b,0x5,0x5b,0x51,0x76,0x15,0x7c,0x11,0x10,0x7e,0x40,0x41 };
	char result[16] ;
	int i;
	for( i = 0; i < strlen(key1); i++)
	{
		result[i] =  key1[i]^crypt[i];
	}
	for (i = 0; i < strlen(key1); i++)
	{
		printf("0x%x, ",result[i]);
	}
	return 0;
}