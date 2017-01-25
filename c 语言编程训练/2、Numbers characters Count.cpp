#include <windows.h>
#include <stdio.h>


char File[100000]={""};   //文件读入字符串 

int num_numbers=0;    //初始化个数 
int num_characters=0;


HANDLE g_hEvent; 

void OpenFileAndReadContentsIntoMemory()
{
  printf("Open File and Read contents into memory\n");
}

DWORD WINAPI numWordCount(PVOID pvParam) 
{
   WaitForSingleObject(g_hEvent, INFINITE);
   	for(int i=0;File[i]!='\0';i++)
		if(File[i]>='0'&&File[i]<='9')
			num_numbers++;
   SetEvent(g_hEvent);   //自动
   return 0;
}
DWORD WINAPI chaWordCount(PVOID pvParam)
{
  WaitForSingleObject(g_hEvent, INFINITE);
   	for(int i=0;File[i]!='\0';i++)
		if((File[i]>='a'&&File[i]<='z')||(File[i]>='A'&&File[i]<='Z'))
			num_characters++;
	return 0;
   SetEvent(g_hEvent);   //自动
   return(0);
}


int main()
{
   // g_hEvent = CreateEvent(NULL, TRUE, FALSE, NULL);  //人工复位
   g_hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);  //自动复位

   HANDLE hThread[2];
   DWORD dwThreadID[2];
   
   hThread[0] = CreateThread(NULL, 0, numWordCount, NULL, 0, &dwThreadID[0]);
   hThread[1] = CreateThread(NULL, 0, chaWordCount, NULL, 0, &dwThreadID[1]);

   OpenFileAndReadContentsIntoMemory();

   //Allow all 3 threads to access the memory.
   SetEvent(g_hEvent); 

	FILE * fp_r;
	if((fp_r=fopen("file_in.txt","r"))==NULL)
	{
		printf("Cannot open the file.\n");	
		exit(0);									//读取文件失败报错 
	}
	
	
	
	int i=0;
	while(fscanf(fp_r,"%c",&(File[i++]))!=EOF) ; //读入 
	
	fclose(fp_r);
	
   	WaitForMultipleObjects (2, hThread,  TRUE, INFINITE); 
   	
   	printf("The number of numbers is:  %d\n",num_numbers); 
	printf("The number of characters is:  %d\n",num_characters);
   	printf("main thread exit\n");
   	getchar();

   	return 0;
}

