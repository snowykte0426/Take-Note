#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

long long subject_arr[350][350], Craftsman_Information_Processing_Warring = 0, Craftsman_Information_Processing_Error = 0;
enum{
	BLACK,
	DARK_BLUE,
	DARK_GREEN,
	DARK_SKYBLUE,
	DARK_RED,
	DARK_VIOLET,
	DAKR_YELLOW,
	GRAY,
	DARK_GRAY,
	BLUE,
	GREEN,
	SKYBLUE,
	RED,
	VIOLET,
	YELLOW,
	WHITE,
};
void List() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
	printf("----------------------\n");
	printf("PCM(Pulse Code Modulation)의 과정 - 1\n연속 신호파형에서 나이키스트 표본화 주기 - 2\n");
	printf("EBCDIC(Extended BCD Interchange Code)에서 Zone 비트의 갯수 - 3\n순차 처리만 가능한 장치 - 4\n");
	printf("명령 사이클(Instruction Cycle)의 구성 - 5\nDBMS기능의 구성요소 - 6\nUNIX의 로그아웃 명령어 - 7\n");
	printf("UINX명령어와 MS-DOS명령어의 비교 - 8\n절대 주소(Absolute Address)의 정의 - 9\n간접 주소(Indirect Address)의 정의 - 10");
	printf("\n주기억 장치에서 기억 장치의 지정 - 11\n인코더(Encoder)의 기능 - 12\n망형 통신망(Mesh Communications Network)에서 국(Station)의 갯수에 따른 통신 회선 - 13\n");
	printf("약식 주소 표현 방식의 정의 - 14\n블록(Block),정지(Halted) 상태 - 15\n디스패치(Dispatch) 작업의 정의 - 16\n");
	printf("유틸리티(Utility) - 17\n색인 주소 지정(Indexed Address Mode)의 정의 - 18\n정보 통신 시스템의 기본 요소 - 19\n");
	printf("멀티태스킹(Multitasking)과 멀티프로그래밍(Multi-Programming) - 20\nUNIX에서 작업 중인 프로그램의 상태를 파악하는 명령어 - 21\n");
	printf("연관 기억 장치의 정의 및 구성 요소 - 22\n데이터 통신의 교환 방식 - 23\nUNIX의 셸(Shell) - 24\n프로토콜(Frotocol)의 기본적인 요소 - 25\n");
	printf("데이터베이스 시스템(Database System)의 관리자 - 26\n아이노드(i-node)의 정의 - 27\nJK 플립플롭(Jack-King Flip-flop)의 출력 - 28\n");
	printf("----------------------\n");
}
void Def_Sy() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
	printf("----------------------\n");
	if (Craftsman_Information_Processing_Error < 1)
		Craftsman_Information_Processing_Error++;
	else
		Sleep(10);
}
void Pulse_Code_Modulation() {
	printf("신호 → 표본화 → 양자화 → 부호화 → 복호화\n");
	return 1;
}
void Nyquist_Sampling_Theorem() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), BLUE);
	printf("나이키스트 표본화 주기는 연속적인 신호파형에서 최고 주파수의 ½이다\nEx)W[Hz]일 때 나이키스트 표본화 주기는 ½W\n");
}
void Extended_BCD_Interchange_Code_Zone_bit() {
	printf("EBCDIC코드는 확장 2진화 10진 코드로 Zone은 4bit / Digit는 4bit로 구성\n8bit로 256가지 표현이 가능\n");
}
void Sequential_Access_Storage_Machine() {
	printf("자기 테이프(Magnetic Tape)가 순차 접근 기억 장치에 해당\n");
}
void Instruction_Cycle() {
	printf("명령 사이클(Instruction Cycle)은 인출 사이클(Fetch Cycle),간접 사이클(Fectch Cycle),\n실행 사이클(Execution Cycle),인터럽트 사이클(Interrupt Cycle)로 구성\n");
}
void UNIX_Command_and_MS_DOS_Command() {
	long long command_list_with_UNIX_MSDOS[5][3] = {
		{"UNIX 명령어\t", "MS-DOS 명령어\t","내용\n"},
		{ "ls\t\t","dir\t\t","지정한 디렉터리의 파일을 보여줌\n" },
		{ "cp\t\t", "COPY\t\t", "파일 복사 명령\n" },
		{ "cd\t\t", "CD\t\t", "디렉토리 경로 명령\n" },
		{ "rmdir\t\t", "RD\t\t", "디렉토리 삭제 명령\n" }
	};
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++)
			printf("%s", command_list_with_UNIX_MSDOS[i][j]);
	}
}
void Jank_King_Flip_Flop() {
	long long JK_Flip_Flop_true_false_list[5][3] = {
		{"J\t","K\t","Q(t+1)\t\n"},
		{"0\t","0\t","No Change\n"},
		{"0\t","1\t","Clear\n"},
		{"1\t","0\t","Set\n"},
		{"1\t","1\t","Complement\n"}
	};
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 3; j++)
			printf("%s", JK_Flip_Flop_true_false_list[i][j]);
	}
}
long long Subject_Arr_Def() {
		subject_arr[6][6]   = "데이터베이스 관리 시스템(DBMS, Databases Management System)은 정의,조작,제어 기능으로 구성\n";
		subject_arr[7][7]   = "UNIX는 로그아웃 명령어로 [Ctrl] + [D],logout,exit가 존재\n";
		subject_arr[9][9]   = "절대 주소(Absolute Address)는 주소 부분의 값이 실제 데이터가 있는 주기억 장치 내의 주소를 나타내며\n단순한 변수 등을 엑세스 하는데 사용\n";
		subject_arr[10][10] = "간접 주소(Indirect Address)는 메모리 참조 횟수가 2회 이상이며 명령어의 주소 부분이 기억 장소의 실제 데이터 주소로 사용\n";
		subject_arr[11][11] = "주기억 장치에서 기억 장치의 지정은 어드레스(Address)에 의해 이루어지며\n이 기억 장치 내의 주소를 기억하는 장치를 주소 레지스터(Address Register)라 지칭\n";
		subject_arr[12][12] = "인코더(Encoder)는 2ⁿ개의 입력을 받아 n개의 데이터를 출력하고 OR 게이트로 구성되며\n부호기라 지칭";
		subject_arr[13][13] = "망(Mesh)형 통신망에서 국(Station)의 개수를 'n'이라 칭한다면\n통신 회선을 구축 시 n(n-1)/2 의 계산식에 따라 통신 회선의 수를 구할 수 있으며\n10개의 국이 있을 시 통신 회선 45개로 구성 가능\n";
		subject_arr[14][14] = "약식 주소 표현 방식은 다른 말로 '계산에 의한 주소' 라고도 말하며\n레지스터(Register)를 이용하고 주소의 일부분이 생략된 방식\n";
		subject_arr[15][15] = "블록(Block),정지(Halted) 상태란 프로세스가 어떤 사건이 일어나기를 기다리는 상태로\n실행 상태의 프로세스가 종료되기 전에 다른 작업이 필요 할 경우 CPU를 반납하고\n작업의 완료때까지 대기 상태로 전환되는 상황이 예시\n";
		subject_arr[16][16] = "디스패치(Dispatch)는 실행을 기다리는 여러 프로세스 중 한 프로세스에게 CPU의 선점 권한을 부여하는 작업을 의미\n";
		subject_arr[17][17] = "유틸리티(Utility)는 파일 시스템(File System)이라고도 부르며\n파일이나 자료를 쉽게 발견 및 조회할 수 있도록 보관 또는 조직 하는 체제를 의미\n";
		subject_arr[18][18] = "색인 주소 지정(Indexed Address Mode)은 인덱스 레지스터(Index Register)의 주소 부분 값을 더해서\n주소를 지정하는 방식을 뜻하며\n유효번지 = 오퍼랜드(Operand) 번지값+인덱스 레지스터 값의 방식으로 유효번지를 지정하고\n순차적인 주소 지정 등에 유리하며 주소 지정에 2개의 레지스터(Register)가 사용\n";
		subject_arr[19][19] = "정보 통신 시스템 4대 기본요소가 있고 단말 장치,전송 회선,통신 제어 장치,CPU로 구성\n";
		subject_arr[20][20] = "멀티태스킹(Multitasking)은 한 사람이 하나의 컴퓨터로 여러 가지 작업을 동시에 처리하거나\n2개 이상의 프로그램을 동시에 실행하는 것을 의미하고\n멀티프로그래밍(Multi-Programming)은 2개 이상의 프로그램을 주기억 장치에 기억시키고\nCPU를 번갈아 사용하여 자원을 최대한 활용하는 처리기법을 뜻함\n";
		subject_arr[21][21] = "UNIX 시스템에서는 현재 작업 중인 프로그램의 상태를 알기 위해서 ps 명령어를 사용\n";
		subject_arr[22][22] = "연관 기억 장치 메모리에 저장된 정보를 찾는데 저장된 내용에 의하여 접근(병렬 탐색 가능)하는 기억 장치로\n검색 자료,일치지시기,검색 자료 레지스터,마스크 레지스터(Mask Register) 등이 필요\n";
		subject_arr[23][23] = "데이터 통신의 교환 방식에는 \n회선 교환 방식(Circuit Switching),메세지 교환 방식(Message Switching),패킷 교환 방식(Packet Switching)이 존재\n";
		subject_arr[24][24] = "UNIX의 셸(Shell)에는 C Shell,Bourn Shell,Korn Shell이 존재\n";
		subject_arr[25][25] = "프로토콜(Frotocal)은 의미(Semantics),구문(Syntax),순서(Timing) 등을 포함\n";
		subject_arr[26][26] = "데이터베이스 시스템(Database System)의 관리자를 DBA(Data Base Administrator)이라고 하며 전체 시스템에 권한을 행사\n";
		subject_arr[27][27] = "아이노드(i-node)란 UNIX 파일 시스템(File System)의 구조 중 하나로\nUNIX 파일에 대한 정보를 규정하는 자료 구조이며 파일의 이름,크기,소유자 등의 정보를 가지고\nDOS의 FAT(File Allocation Table)과 유사한 개념\n";
		return subject_arr;
}
int Craftsman_Information_Processing(void) {
	while (true) {	
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
		Subject_Arr_Def();
		for (Craftsman_Information_Processing_Warring; Craftsman_Information_Processing_Warring < 1; Craftsman_Information_Processing_Warring++) {
			printf("카테고리 선택으로 돌아가려면 B를,프로그램을 종료하시려면 Q를 입력해주세요\n");
		}
		printf("찾으시는 항목의 번호를 입력해주세요(0를 입력하면 색인을 불러옵니다): ");
		int subject = 2200;
		char subject_charsync = 1;
		if (Craftsman_Information_Processing_Error >= 1)
			subject = 2200, subject_charsync = 1;
		scanf("%d", &subject);
		if (subject == 2200)
			scanf("%c", &subject_charsync);
		if (subject == 0 && subject_charsync == 1) {
			List();
			continue;
		}
		if (subject == 1) {
			Def_Sy();
			Pulse_Code_Modulation();
			Def_Sy();
			continue;
		}
		if (subject == 2) {
			Def_Sy();
			Nyquist_Sampling_Theorem();
			Def_Sy();
			continue;
		}
		if (subject == 3) {
			Def_Sy();
			Extended_BCD_Interchange_Code_Zone_bit();
			Def_Sy();
			continue;
		}
		else {
			switch (subject) {
				case 4:
					Def_Sy();
					Sequential_Access_Storage_Machine();
					Def_Sy();
					continue;
				case 5:
					Def_Sy();
					Instruction_Cycle();
					Def_Sy();
					continue;
				case 8:
					Def_Sy();
					UNIX_Command_and_MS_DOS_Command();
					Def_Sy();
					continue;
				case 28:
					Def_Sy();
					Jank_King_Flip_Flop();
					Def_Sy();
					continue;
				default:
					if (subject_charsync == 'B') {
						printf("\n");
						return 1;
					}
					else if (subject_charsync == 'Q')
						exit(1);
					else {
						Def_Sy();
						printf("%s", subject_arr[subject][subject]);
						Def_Sy();
						continue;
					}
			}
		}
	}
	return 1;
}
int main(void) {
	SetConsoleTitle(TEXT("Take_Note"));
	error_category:
	printf("원하는 정보의 카테고리 번호를 입력해주세요(0를 입력하면 카테고리 정보를 불러옵니다): ");
	unsigned short category = 15000,  category_char = NULL;
	scanf("%d", &category);
	if (category == 15000) {
		scanf("%c", &category_char);
	}
	if (category == 0 && category_char == 0) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
		printf("----------------------\n정보처리기능사 필기 - 1\n");
		printf("----------------------\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
		goto error_category;
	}
	switch (category) {
	case 1:
		printf("\n");
		Craftsman_Information_Processing();
		goto error_category;
	default:
		if (category_char == 'Q')
			exit(1);
		else if (category_char == 'QUIT')
			exit(1);
		else {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), RED);
		printf("----------------------\n존재하지 않는 카테고리입니다!!\n----------------------\n");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), WHITE);
		goto error_category;
		}
	}
	return 0;
}