#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)//�ж��ļ�ָ���Ƿ�Ϊ��ָ��
//	{
//		perror("fopen");
//		return 1;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		fputc('a' + i, pf);//�����ݴ�ӡ���ı��ļ�text.txt��
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
    

//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)//�ж��ļ�ָ���Ƿ�Ϊ��ָ��
//	{
//		perror("fopen");
//		return 1;
//	}
//	int ch = 0;
//	for(int i=0;i<3;i++)
//	{
//		ch = fgetc(pf);
//		printf("%c", ch);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)//�ж��ļ�ָ���Ƿ�Ϊ��ָ��
//	{
//		perror("fopen");
//		return 1;
//	}
//	fputs("hello bit\n", pf);
//	fputs("hello world\n", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
    
     

//#include<stdio.h>
//int main()
//{
//	FILE* pf = fopen("text.txt", "w");
//	if (pf == NULL)//�ж��ļ�ָ���Ƿ�Ϊ��ָ��
//	{
//		perror("fopen");
//		return 1;
//	}
//	char arr[20];
//	fgets(arr, 10, pf);//��pf�ı��ļ���10�����ݻ�ȡ��arr��
//	printf("%s\n", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
 

//�����Ƶ�д�ļ� - fwrite
//#include<stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "pengge",18,99.9f };
//	//���ļ�
//	FILE* pf = fopen("test.dat", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	FILE* pFile;
//	//���ļ�
//	pFile = fopen("myfile.txt", "w");
//	//�ļ�����
//	if (pFile != NULL)
//	{
//		fputs("fopen example", pFile);
//		//�ر��ļ�
//		fclose(pFile);
//	}
//	return 0;
//}

//�����Ƶ�д�ļ� - fwrite
 

//#include<stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//	float score;
//};
//int main()
//{
//	struct S s = { "pengge",18,99.9f };
//	//���ļ�
//	FILE* pf = fopen("test.dat", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//���ļ�
//	FILE* pf = fopen("test.dat", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//���ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);//p
//	ch = fgetc(pf);
//	printf("%c\n", ch);//e
//	ch = fgetc(pf);
//	printf("%c\n", ch);//n
//	ch = fgetc(pf);
//	printf("%c\n", ch);//g
//
//	//fseek(pf, -3, SEEK_CUR);
//	fseek(pf, 1, SEEK_SET);
//	ch = fgetc(pf);
//	printf("%c\n", ch);//ϣ����������e
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

/* ftell example : getting size of a file */
//
//#include <stdio.h>
//int main()
//{
//    FILE* pFile;
//    long size;
//    pFile = fopen("myfile.txt", "rb");
//    if (pFile == NULL) perror("Error opening file");
//    else
//    {
//        fseek(pFile, 0, SEEK_END);  // non-portable
//        size = ftell(pFile);
//        fclose(pFile);
//        printf("Size of myfile.txt: %ld bytes.\n", size);
//    }
//    return 0;
//}

#include<stdio.h>

int main()
{
	//���ļ�
	FILE* pf = fopen("test.dat", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	//���ļ�
	int ch = fgetc(pf);
	printf("%c\n", ch);//p
	ch = fgetc(pf);
	printf("%c\n", ch);//e
	ch = fgetc(pf);
	printf("%c\n", ch);//n
	ch = fgetc(pf);
	printf("%c\n", ch);//g

	rewind(pf);
	printf("%d\n", ftell(pf));
	ch = fgetc(pf);
	printf("%c\n", ch);//p
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	return 0;
}







