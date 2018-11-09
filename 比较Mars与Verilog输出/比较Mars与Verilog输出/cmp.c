#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *Verilog, *Mars;
	char strv[54], strm[22], zero[16], b;
	int i = 0;
	Verilog = fopen("Verilog.txt","r");
	Mars = fopen("Mars.txt","r");
	for (i = 0; i < 16; i++)
	{
		zero[i] = (i == 0) ? '$' :
			(i == 1) ? ' ' :
			(i == 3) ? ' ' :
			(i == 4) ? '<' :
			(i == 5) ? '=' :
			(i == 6) ? ' ' :
			(i == 15) ? 0 : '0';
	}
	i = 0;
	fgets(strv,54,Verilog);			//消去空格行
	while (fgets(strv, 54, Verilog) != NULL)
	{
		if (strstr(strv, zero) != NULL)
		{
			i++;
			continue;
		}
		rerere:
		fgets(strm, 22, Mars);
		i++;
		if (strstr(strv, strm) == NULL)
		{
			printf("@Line:%d %s\t\t\t\t\t%s", i, strv,strm);
			b = getchar();
			getchar();
			if (b == '1')
			{
				goto rerere;
			}
		}
		if (strchr(strm, '*') != NULL && strlen(strm) > 20)
		{
			fgets(strm, 22, Mars);//魔改Mars输出写内存的，行尾有\n
		}
	}
	printf("Pass!");
	getchar();
	return 0;
}