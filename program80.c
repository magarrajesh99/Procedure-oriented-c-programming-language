/* 5. Accept N numbers from user and accept one another number as NO, return frequency of NO from it.
	Input:	N 	6
			NO	66
			Elements: 85	66	3	66	93	88
	Output:2
	Input:	N 	6
			NO	12
			Elements: 85	11	3	15	11	111
	Output:0
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[],int iSize,int iNo)
{	
	int i=0,iCnt=0;
	
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==iNo)
		{
			iCnt++;
		}
	}
	return iCnt;
}

int main()
{
	int iSize=0,iCnt=0,iRet=0,iValue=0;
	int *p=NULL;

	
	printf("Enter numbers of elements");
	scanf("%d",&iSize);
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	p=(int *)malloc(iSize*sizeof(int));
	
	if(p==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter %d elements\t\n",iSize);
	
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter element :%d\t",iCnt+1);
		scanf("%d",&p[iCnt]);
	}
	
	iRet=Frequency(p,iSize,iValue);
	printf("%d",iRet);
	
	free(p);
	return 0;
}