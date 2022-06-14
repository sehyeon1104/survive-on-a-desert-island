#include "survive.h"
int num = 0;
string item[] = { "사시미", };

void ItemSet()
{
	for (int i = 0; i < sizeof(item) / sizeof(string); i++)
	{
		cout << "현재 아이템 : ";
		cout << item[i] << endl;
	}
}
void Die()
{
	_setmode(_fileno(stdout), _O_U8TEXT);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	wcout << L"         ██████╗  █████╗ ███╗   ███╗███████╗     ██████╗ ██╗   ██╗███████╗██████╗	" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	wcout << L"	██╔════╝ ██╔══██╗████╗ ████║██╔════╝    ██╔═══██╗██║   ██║██╔════╝██╔══██╗	" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	wcout << L"	██║  ███╗███████║██╔████╔██║█████╗      ██║   ██║██║   ██║█████╗  ██████╔╝	" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	wcout << L"	██║   ██║██╔══██║██║╚██╔╝██║██╔══╝      ██║   ██║╚██╗ ██╔╝██╔══╝  ██╔══██╗	" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	wcout << L"	╚██████╔╝██║  ██║██║ ╚═╝ ██║███████╗    ╚██████╔╝ ╚████╔╝ ███████╗██║  ██║	" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	wcout << L"	╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝     ╚═════╝   ╚═══╝  ╚══════╝╚═╝  ╚═╝	" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	_setmode(_fileno(stdout), _O_TEXT);
	exit(0);
}
void Setting()
{
	cout << "현재 HP:";
	for (int i = 0; i < hp; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cout << "♥";
	}
	cout << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	Sleep(3000);
	ItemSet();
	Sleep(3000);
	if (hp <= 0)
	{
		Die();
	}
	system("cls");
}
void Randomtlqkf()
{
	string a[] = { "씨X아 제대로 선택하라고","혹시 눈깔이없어??","병X아 장난치지 말라고","야 놀아주니까 장난같지 ㅋㅋ ","한번만 더 똑바로 안치기만 해봐 ㅋㅋ~","이쁘게 말하니까 말안듣지?", };
	int b = sizeof(a) / sizeof(string);
	int c = rand() % b;
	cout << a[c] << endl;
}
void Randomelse()
{
	string a[] = { "잘못 입력 하셨습니다 똑바로 입력해주세요","다른 선택지는 없어요 ㅎㅎ","응 아니야 돌아가 ~","야 다시쳐!","야 장난칠래?","제대로 입력하세요","그거아닌데......." };
	int b = sizeof(a) / sizeof(string);
	int c = rand() % b;
	cout << a[c] << endl;
}

void MainScreen()
{

	Setting();
	switch (num)
	{
	case 0:
		ASituation();
		break;
	case 1:

		break;
	case 2:
		BSituation();

		break;
	case 3:

		break;
	default:
		break;
	}
}
void Startprint()
{

	cout << "Alt + Enter을 눌러 전체 화면으로 하시길 권장합니다" << endl << endl << endl << endl;

	int num;
	_setmode(_fileno(stdout), _O_U16TEXT);
	wcout << L"███████╗██╗   ██╗██████╗ ██╗   ██╗██╗██╗   ██╗███████╗     ██████╗ ███╗   ██╗     █████╗     ██████╗ ███████╗███████╗███████╗██████╗ ████████╗    ██╗███████╗██╗      █████╗ ███╗   ██╗██████╗	" << endl;
	wcout << L"██╔════╝██║   ██║██╔══██╗██║   ██║██║██║   ██║██╔════╝    ██╔═══██╗████╗  ██║    ██╔══██╗    ██╔══██╗██╔════╝██╔════╝██╔════╝██╔══██╗╚══██╔══╝    ██║██╔════╝██║     ██╔══██╗████╗  ██║██╔══██╗" << endl;
	wcout << L"███████╗██║   ██║██████╔╝██║   ██║██║██║   ██║█████╗      ██║   ██║██╔██╗ ██║    ███████║    ██║  ██║█████╗  ███████╗█████╗  ██████╔╝   ██║       ██║███████╗██║     ███████║██╔██╗ ██║██║  ██║" << endl;
	wcout << L"╚════██║██║   ██║██╔══██╗╚██╗ ██╔╝██║╚██╗ ██╔╝██╔══╝      ██║   ██║██║╚██╗██║    ██╔══██║    ██║  ██║██╔══╝  ╚════██║██╔══╝  ██╔══██╗   ██║       ██║╚════██║██║     ██╔══██║██║╚██╗██║██║  ██║" << endl;
	wcout << L"███████║╚██████╔╝██║  ██║ ╚████╔╝ ██║ ╚████╔╝ ███████╗    ╚██████╔╝██║ ╚████║    ██║  ██║    ██████╔╝███████╗███████║███████╗██║  ██║   ██║       ██║███████║███████╗██║  ██║██║ ╚████║██████╔╝" << endl;
	wcout << L"╚══════╝ ╚═════╝ ╚═╝  ╚═╝  ╚═══╝  ╚═╝  ╚═══╝  ╚══════╝     ╚═════╝ ╚═╝  ╚═══╝    ╚═╝  ╚═╝    ╚═════╝ ╚══════╝╚══════╝╚══════╝╚═╝  ╚═╝   ╚═╝       ╚═╝╚══════╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═════╝	" << endl;
	_setmode(_fileno(stdout), _O_TEXT);
	int a = 0;
	while (true)
	{
		cout << "1: 게임 시작 2: 게임 나가기" << endl;
		cin >> num;
		switch (num)
		{
		case 1:
			Story();
			break;
		case 2:
			exit(0);
			break;
		default:
			if (a >= 50 && a < 100)
			{
				Randomtlqkf();
				a++;
				continue;
			}
			else if (a == 100)
			{
				cout << "넌 걍 하지마라 ㅋㅋ";
				exit(0);
			}
			Randomelse();
			a++;
			continue;
		}
		break;
	}
}
void Story()
{
	system("cls");
	Sleep(3000);
	cout << "여긴 어디지....";
	Sleep(500);
	cout << "아무키나 누르세요" << endl;
	int a = _getch();
	Sleep(1000);
	cout << "주위를 살펴본다" << endl;
	Sleep(1500);
	cout << "??? 사방이 물로 뒤덮혀 있다...." << endl;
	Sleep(2000);
	cout << "여기는 아마 무인도 ....? " << endl;
	Sleep(1700);
	cout << "일단 주변을 가보자 .. 뭔가 있을지도 몰라" << endl;
}
void SelectItem()
{
	Sleep(1000);
	cout << "아 맞다 게임을 시작하기전에 ";
}
void ASituation()
{
	int a = 0;
	int eat;
	Sleep(1000);
	cout << "아 배고프다 어디 먹을거 없나........" << endl;
	Sleep(1500);
	cout << "앞에 무언가 먹을거로 보이는 것이 있다 가보자 " << endl;
	Sleep(2000);
	cout << "음 뭔가 이상하게 생겼는데 이게 뭐지 ,,,,? " << endl;
	Sleep(1300);
	while (true)
	{

		cout << "1: 먹는다 2: 먹지 않는다 " << endl;
		eat = _getch();
		if (eat == 49)
		{
			cout << "음 한번 먹어볼까 ? ~" << endl;

			int b = rand() % 10;
			Sleep(1500);
			if (0 < b && b <= 5)
			{

				cout << "윽.. 뭐지... (먹을 것에 독이 들어있었다 HP -1)" << endl;
				hp--;
			}
			else if (6 <= b)
			{
				cout << "음 맛있다 ㅎㅎ (HP +1)" << endl;
				hp++;
			}
			break;
		}
		else if (eat == 50)
		{
			cout << "그래 위험은 감수하지않는게 좋지 " << endl;
			break;
		}
		else
		{
			if (a >= 50 && a < 100)
			{
				Randomtlqkf();
				a++;
				continue;
			}
			else if (a == 100)
			{
				cout << "넌 걍 하지마라 ㅋㅋ";
				exit(0);
			}
			Randomelse();
			a++;
			continue;
		}
		break;
	}
	num++;
	MainScreen();
}
void BSituation()
{
	int b = rand() % 10;
	Sleep(1000);
	cout << "으... 슬슬 추워지네" << endl;
	Sleep(800);
	cout << "(밤이 오기 시작한다)" << endl;
	Sleep(900);
	cout << "불을 피워야겠다" << endl;
	while (true)
	{
		cout << "1: 불을 피운다 2: 불을 안피운다" << endl;
		Sleep(1500);
		int c = _getch();
		if (c == 49)
		{

		}
		else if (c == 50)
		{
			cout << "귀찮다 ;; 그래.... 까짓 뭔 일 있겠냐 ";


		}
		else
		{
			int a = 0;
			if (a >= 50 && a < 100)
			{
				Randomtlqkf();
				a++;
				continue;
			}
			else if (a == 100)
			{
				cout << "넌 걍 하지마라 ㅋㅋ";
				exit(0);
			}
			Randomelse();
			a++;
			continue;
		}
		break;
	}
}