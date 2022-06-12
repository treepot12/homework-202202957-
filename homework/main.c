/* 국가별 6월 12일 기준 covid 19 실시간 상황 안내 프로그램
1. 신규 확진자 수
2. 누적 확진자 수
3. 누적 사망자 수
4. 전체 내용
를 알려준다.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "covid1.h"
#include <string.h>

void conf()
{
	printf("0. 종료\n");
	printf("1. 신규 확진자 수\n");
	printf("2. 누적 확진자 수\n");
	printf("3. 누적 사망자 수\n");
	printf("4. 전체 출력\n");
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
		printf("번호를 입력하시오.\n");
		scanf(" %d", &choice);

		if (choice == 0) {
			printf("종료되었습니다.");
			ch = 0;
		}
		else if (choice == 1)
		{
			int i, n;
			char* nations[] = {
				"1. 한국",
				"2. 미국",
				"3. 인도",
				"4. 브라질",
				"5. 프랑스"
			};
			int ntn;
			char nation;
			printf("번호를 입력하시오.\n");

			n = sizeof(nations) / sizeof(nations[0]);

			for (i = 0; i < n; i++)
				printf("%s \n", nations[i]);
			scanf(" %d", &ntn);
			nation = (char)ntn;

			if (nation == 1)
				printf("국가 : 한국  신규 확진자 수 : %d\n", list[0][0].korea);
			else if (nation == 2)
				printf("국가 : 미국  신규 확진자 수 : %d\n", list[1][0].usa);
			else if (nation == 3)
				printf("국가 : 인도  신규 확진자 수 : %d\n", list[2][0].india);
			else if (nation == 4)
				printf("국가 : 브라질  신규 확진자 수 : %d\n", list[3][0].brazil);
			else if (nation == 5)
				printf("국가 : 프랑스  신규 확진자 수 : %d\n", list[4][0].france);
		}
		else if (choice == 2)
		{
			int j, m;
			char* nations1[] = {
				"1. 한국",
				"2. 미국",
				"3. 인도",
				"4. 브라질",
				"5. 프랑스"
			};
			int ntn1;
			char nation1;
			printf("번호를 입력하시오.\n");

			m = sizeof(nations1) / sizeof(nations1[0]);

			for (j = 0; j < m; j++)
				printf("%s \n", nations1[j]);
			scanf(" %d", &ntn1);
			nation1 = (char)ntn1;

			if (nation1 == 1)
				printf("국가 : 한국  누적 확진자 수 : %d\n", list[0][1].korea);
			else if (nation1 == 2)
				printf("국가 : 미국  누적 확진자 수 : %d\n", list[1][1].usa);
			else if (nation1 == 3)
				printf("국가 : 인도  누적 확진자 수 : %d\n", list[2][1].india);
			else if (nation1 == 4)
				printf("국가 : 브라질  누적 확진자 수 : %d\n", list[3][1].brazil);
			else if (nation1 == 5)
				printf("국가 : 프랑스  누적 확진자 수 : %d\n", list[4][1].france);
		}
		else if (choice == 3)
		{
			int r[] = { 1, 2, 3, 4, 5};
			int virus[] = { 24371, 1035828 ,524761 ,668134 ,148749 };
			int* p;
			p = virus;
			int cont3;
			printf("1. 한국\n2. 미국\n3. 인도\n4. 브라질\n5. 프랑스\n");
			scanf(" %d", &cont3);

			if (cont3 == r[0])
				printf("\n한국의 누적 사망자 수: %d명\n", p[0]);
			if (cont3 == r[1])
				printf("\n미국의 누적 사망자 수: %d명\n", p[1]);
			if (cont3 == r[2])
				printf("\n인도의 누적 사망자 수: %d명\n", p[2]);
			if (cont3 == r[3])
				printf("\n브라질의 누적 사망자 수: %d명\n", p[3]);
			if (cont3 == r[4])
				printf("\n프랑스의 누적 사망자 수: %d명\n", p[4]);
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
			printf("다시 선택해주세요.\n");
		}
	}
	return 0;
}

