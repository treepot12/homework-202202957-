/* ������ 6�� 12�� ���� covid 19 �ǽð� ��Ȳ �ȳ� ���α׷�
1. �ű� Ȯ���� ��
2. ���� Ȯ���� ��
3. ���� ����� ��
4. ��ü ����
�� �˷��ش�.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "covid1.h"
#include <string.h>

void conf()
{
	printf("0. ����\n");
	printf("1. �ű� Ȯ���� ��\n");
	printf("2. ���� Ȯ���� ��\n");
	printf("3. ���� ����� ��\n");
	printf("4. ��ü ���\n");
}
int main(void) {
	Cont list[5][2] = {
		{7382,18225460},
		{58110,87305419},
		{8582,43222017},
		{32332,31449673},
		{17152,29770522}
	};
	int choice;
	int ch=1;
	while (ch) {
		conf();
		printf("��ȣ�� �Է��Ͻÿ�.\n");
		scanf(" %d", &choice);

		if (choice == 0) {
			printf("����Ǿ����ϴ�.");
			ch = 0;
		}
		else if (choice == 1)
		{
			int i, n;
			char* nations[] = {
				"1. �ѱ�",
				"2. �̱�",
				"3. �ε�",
				"4. �����",
				"5. ������"
			};
			int ntn;
			char nation;
			printf("��ȣ�� �Է��Ͻÿ�.\n");

			n = sizeof(nations) / sizeof(nations[0]);

			for (i = 0; i < n; i++)
				printf("%s \n", nations[i]);
			scanf(" %d", &ntn);
			nation = (char)ntn;

			if (nation == 1)
				printf("���� : �ѱ�  �ű� Ȯ���� �� : %d\n", list[0][0].korea);
			else if (nation == 2)
				printf("���� : �̱�  �ű� Ȯ���� �� : %d\n", list[1][0].usa);
			else if (nation == 3)
				printf("���� : �ε�  �ű� Ȯ���� �� : %d\n", list[2][0].india);
			else if (nation == 4)
				printf("���� : �����  �ű� Ȯ���� �� : %d\n", list[3][0].brazil);
			else if (nation == 5)
				printf("���� : ������  �ű� Ȯ���� �� : %d\n", list[4][0].france);
		}
		else if (choice == 2)
		{
			int j, m;
			char* nations1[] = {
				"1. �ѱ�",
				"2. �̱�",
				"3. �ε�",
				"4. �����",
				"5. ������"
			};
			int ntn1;
			char nation1;
			printf("��ȣ�� �Է��Ͻÿ�.\n");

			m = sizeof(nations1) / sizeof(nations1[0]);

			for (j = 0; j < m; j++)
				printf("%s \n", nations1[j]);
			scanf(" %d", &ntn1);
			nation1 = (char)ntn1;

			if (nation1 == 1)
				printf("���� : �ѱ�  ���� Ȯ���� �� : %d\n", list[0][1].korea);
			else if (nation1 == 2)
				printf("���� : �̱�  ���� Ȯ���� �� : %d\n", list[1][1].usa);
			else if (nation1 == 3)
				printf("���� : �ε�  ���� Ȯ���� �� : %d\n", list[2][1].india);
			else if (nation1 == 4)
				printf("���� : �����  ���� Ȯ���� �� : %d\n", list[3][1].brazil);
			else if (nation1 == 5)
				printf("���� : ������  ���� Ȯ���� �� : %d\n", list[4][1].france);
		}
		else if (choice == 3)
		{
			int r[] = { 1, 2, 3, 4, 5};
			int virus[] = { 24371, 1035828 ,524761 ,668134 ,148749 };
			int* p;
			p = virus;
			int cont3;
			printf("1. �ѱ�\n2. �̱�\n3. �ε�\n4. �����\n5. ������\n");
			scanf(" %d", &cont3);

			if (cont3 == r[0])
				printf("\n�ѱ��� ���� ����� ��: %d��\n", p[0]);
			if (cont3 == r[1])
				printf("\n�̱��� ���� ����� ��: %d��\n", p[1]);
			if (cont3 == r[2])
				printf("\n�ε��� ���� ����� ��: %d��\n", p[2]);
			if (cont3 == r[3])
				printf("\n������� ���� ����� ��: %d��\n", p[3]);
			if (cont3 == r[4])
				printf("\n�������� ���� ����� ��: %d��\n", p[4]);
		}
		else if (choice == 4)
		{
			FILE* fp = fopen("cont1.txt", "r");
			char buffer[1000];
			fgets(buffer, sizeof(buffer), fp);
			printf("%s\n", buffer);
			fclose(fp);
		}
		else
		{
			printf("�ٽ� �������ּ���.\n");
		}
	}
	return 0;
}

