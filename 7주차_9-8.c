////9-8
//
////file:out.c
//
//#include <stdio.h>
//
//void outfunction()
//{
//	extern int global; //이건 오류니까 주석 처리 -> sglobal;
//
//	printf("%d\n", ++global);
//	//외부 파일에 선언된 정적 전역변수이므로 실행 시 오류
//	//printf("%d\n",++sglobal);
//}