#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
   char *str= "Musk";
	FILE *fp;
	//int line_num = 1;
	int find_result = 0;
	char temp[512];

	if((fp = fopen("maa.txt" ,"r")) == NULL)
        {
		return(-1);
	}

	while(fgets(temp,512, fp) != NULL) {
		if((strstr(temp, str)) != NULL) {
			//printf("A match found on line: %d\n", line_num);
			find_result++;
		}
		//line_num++;
	}
   printf("%d\n",find_result);
	if(find_result == 0) {
		printf("\nSorry, couldn't find a match.\n");
	}

	//Close the file if still open.
	if(fp) {
		fclose(fp);
	}
   	return(0);
}
