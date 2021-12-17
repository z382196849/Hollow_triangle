#include<stdio.h>
#include<windows.h>

void main()
{
    int i = 0;//行
    int j = 0;//星号个数
    int k = 0;//空格数
    int line = 0;//空心三角形的高
    printf("请输入空心三角形的高：");
    scanf("%d", &line);
    for(i = 1; i <= line; i++)
    {
 	for(k = 1; k <= line - i; k++)
	{
  	    printf(" ");
	}
	for(j = 1; j <= 2 * i - 1; j++)
	{
	    if(j == 1 || j == 2 * i - 1 || i == line)
	    {
		printf("*");
	    }
	    else
	    {
		printf(" ");
  	    }
	}
	printf("\n");
    }
    system("pause");
}