#include "survive.h"
#pragma comment(lib,"winmm.lib")

int num = 0;
using namespace std;
vector<string> item;
bool isSick;
void Escape()
{
	clock_t start, end;
	start = clock();
	int timer = 0;
	while (true)
	{
		Sleep(1000);
		system("mode con: cols=200 lines=20");
		_setmode(_fileno(stdout), _O_U8TEXT);
		textcolor(rand() % 14, BLACK);
		wcout << L"         ██████╗ ██████╗ ███╗   ██╗ ██████╗ ██████╗  █████╗ ████████╗██╗   ██╗██╗      █████╗ ████████╗██╗ ██████╗ ███╗   ██╗███████╗		   " << endl;
		textcolor(rand() % 14, BLACK);
		wcout << L"	██╔════╝██╔═══██╗████╗  ██║██╔════╝ ██╔══██╗██╔══██╗╚══██╔══╝██║   ██║██║     ██╔══██╗╚══██╔══╝██║██╔═══██╗████╗  ██║██╔════╝	   " << endl;
		textcolor(rand() % 14, BLACK);
		wcout << L"	██║     ██║   ██║██╔██╗ ██║██║  ███╗██████╔╝███████║   ██║   ██║   ██║██║     ███████║   ██║   ██║██║   ██║██╔██╗ ██║███████╗	   " << endl;
		textcolor(rand() % 14, BLACK);
		wcout << L"	██║     ██║   ██║██║╚██╗██║██║   ██║██╔══██╗██╔══██║   ██║   ██║   ██║██║     ██╔══██║   ██║   ██║██║   ██║██║╚██╗██║╚════██║	   " << endl;
		textcolor(rand() % 14, BLACK);
		wcout << L"	╚██████╗╚██████╔╝██║ ╚████║╚██████╔╝██║  ██║██║  ██║   ██║   ╚██████╔╝███████╗██║  ██║   ██║   ██║╚██████╔╝██║ ╚████║███████║	   " << endl;
		textcolor(rand() % 14, BLACK);
		wcout << L"	╚═════╝ ╚═════╝ ╚═╝  ╚═══╝ ╚═════╝ ╚═╝  ╚═╝╚═╝  ╚═╝   ╚═╝    ╚═════╝ ╚══════╝╚═╝  ╚═╝   ╚═╝   ╚═╝ ╚═════╝ ╚═╝  ╚═══╝╚══════		   " << endl;
		textcolor(WHITE, BLACK);
		_setmode(_fileno(stdout), _O_TEXT);

	}
}
BOOL FindItem(string items)
{
	for (int i = 0; i < item.size(); i++)
	{
		if (items == item[i])
		{
			return true;
		}
	}
	return false;
}
void ItemSet()
{
	Stringtochar(70, "현재 아이템");
	for (int i = 0; i < item.size(); i++)
	{
		if (i > 0)
		{
			cout << ',';
		}
		cout << item[i];
	}
	if (item.size() == 0)
	{
		Sleep(600);
		cout << "아이템 없음" << endl;
	}
	cout << endl;
}
void Stringtochar(int a, string d)
{
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i);
		Sleep(a);
	}
	cout << endl;
}
void Stringtochara(int a, string d)
{
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i);
		Sleep(a);
	}
}
#pragma region Itemslect
void SelectItem()
{
	int a = 0;
	string itemselect;
	Sleep(1000);
	cout << "잠깐 ! 당신은 게임을 시작하기전 아이템을 고르실 수 있습니다" << endl;
	Sleep(2000);
	cout << "어떤 아이템을 선택하시겠습니까 ? " << endl;
	Sleep(1000);
	Stringtochar(80, "성냥 , 물 1L , 의약품 , 무인도에서 살아남기 책");
	while (true)
	{
		getline(cin, itemselect);
		if (itemselect == "성냥" || itemselect == "물 1L" || itemselect == "의약품" || itemselect == "무인도에서 살아남기 책")
		{
			cout << "당신은 " << itemselect << "을 선택하였습니다" << endl;
			item.push_back(itemselect);
			Sleep(1000);
			break;
		}
		else
		{
			if (a == 0)
			{
				a++;
				continue;
			}
			else if (50 <= a && a < 100)
			{
				Randomtlqkf();
				a++;
				continue;
			}
			else if (a == 100)
			{
				cout << "걍 하지마";
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
#pragma endregion


void textcolor(int foreground, int background)
{
	int color = foreground + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void Die()
{

	_setmode(_fileno(stdout), _O_U8TEXT);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	wcout << L"          ██████╗  █████╗ ███╗   ███╗███████╗     ██████╗ ██╗   ██╗███████╗██████╗	" << endl;
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
	Stringtochar(70, "현재 HP");
	for (int i = 1; i < hp + 1; i++)
	{
		textcolor(RED, BLACK);
		cout << "♥";
		if (i % 10 == 0)
		{
			cout << endl;
		}
	}
	cout << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	Sleep(1500);
	ItemSet();
	Sleep(1500);
	cout << "다음으로 가려면 아무키나 누르시고 게임을 나가시려면 2를 누르십시오" << endl;
	int a = _getch();
	if (a == 50)
	{
		exit(0);
	}

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
		SelectItem();
		break;
	case 1:
		ASituation();
		break;
	case 2:
		BSituation();
		break;
	case 3:
		CSituation();
		break;
	case 4:
		DSituation();
		break;
	case 5:
		LastSituation();
	default:

		break;
	}
}
void easynormalhard()
{
	int b = 0;
	while (true)
	{
		cout << "어떤 모드로 하시겠습니까?" << endl;
		cout << "1: Easy 2: Normal 3: Hard" << endl;
		int a = _getch();
		if (a == 49)
		{
			hp = 3;
		}
		else if (a == 50)
		{
			hp = 2;
		}
		else if (a == 51)
		{
			hp = 1;
		}
		else
		{
			if (b >= 50 && b < 100)
			{
				Randomtlqkf();
				b++;
				continue;
			}
			else if (b == 100)
			{
				cout << "넌 걍 하지마라 ㅋㅋ";
				exit(0);
			}
			Randomelse();
			b++;
			continue;
		}
		break;
	}
	Story();
}
MCI_PLAY_PARMS Playbgm;
MCI_OPEN_PARMS Openbgm;
UINT dwID;
void Playingbgm()
{

	Openbgm.lpstrElementName = L"evolution.mp3";
	Openbgm.lpstrDeviceType = L"mpegvideo"; // wav파일은 waveaudio
	mciSendCommand(0, MCI_OPEN, MCI_OPEN_ELEMENT | MCI_OPEN_TYPE, (DWORD)(LPVOID)&Openbgm);
	dwID = Openbgm.wDeviceID;
	mciSendCommand(dwID, MCI_PLAY, MCI_DGV_PLAY_REPEAT, (DWORD)(LPVOID)&Playbgm);
}
void Startprint()
{

	int num;
	_setmode(_fileno(stdout), _O_U16TEXT);
	textcolor(rand() % 14, BLACK);
	wcout << L"███████╗██╗   ██╗██████╗ ██╗   ██╗██╗██╗   ██╗███████╗     ██████╗ ███╗   ██╗     █████╗     ██████╗ ███████╗███████╗███████╗██████╗ ████████╗    ██╗███████╗██╗      █████╗ ███╗   ██╗██████╗	" << endl;
	textcolor(rand() % 14, BLACK);
	wcout << L"██╔════╝██║   ██║██╔══██╗██║   ██║██║██║   ██║██╔════╝    ██╔═══██╗████╗  ██║    ██╔══██╗    ██╔══██╗██╔════╝██╔════╝██╔════╝██╔══██╗╚══██╔══╝    ██║██╔════╝██║     ██╔══██╗████╗  ██║██╔══██╗" << endl;
	textcolor(rand() % 14, BLACK);
	wcout << L"███████╗██║   ██║██████╔╝██║   ██║██║██║   ██║█████╗      ██║   ██║██╔██╗ ██║    ███████║    ██║  ██║█████╗  ███████╗█████╗  ██████╔╝   ██║       ██║███████╗██║     ███████║██╔██╗ ██║██║  ██║" << endl;
	textcolor(rand() % 14, BLACK);
	wcout << L"╚════██║██║   ██║██╔══██╗╚██╗ ██╔╝██║╚██╗ ██╔╝██╔══╝      ██║   ██║██║╚██╗██║    ██╔══██║    ██║  ██║██╔══╝  ╚════██║██╔══╝  ██╔══██╗   ██║       ██║╚════██║██║     ██╔══██║██║╚██╗██║██║  ██║" << endl;
	textcolor(rand() % 14, BLACK);
	wcout << L"███████║╚██████╔╝██║  ██║ ╚████╔╝ ██║ ╚████╔╝ ███████╗    ╚██████╔╝██║ ╚████║    ██║  ██║    ██████╔╝███████╗███████║███████╗██║  ██║   ██║       ██║███████║███████╗██║  ██║██║ ╚████║██████╔╝" << endl;
	textcolor(rand() % 14, BLACK);
	wcout << L"╚══════╝ ╚═════╝ ╚═╝  ╚═╝  ╚═══╝  ╚═╝  ╚═══╝  ╚══════╝     ╚═════╝ ╚═╝  ╚═══╝    ╚═╝  ╚═╝    ╚═════╝ ╚══════╝╚══════╝╚══════╝╚═╝  ╚═╝   ╚═╝       ╚═╝╚══════╝╚══════╝╚═╝  ╚═╝╚═╝  ╚═══╝╚═════╝	" << endl;
	textcolor(WHITE, BLACK);
	_setmode(_fileno(stdout), _O_TEXT);
	int a = 0;
	Playingbgm();
	while (true)
	{
		cout << "1: 게임 시작 2: 게임 나가기" << endl;
		int a = _getch();
		if (a == 49)
		{
			easynormalhard();
		}
		else if (a == 50)
		{
			exit(0);
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
}
void Story()
{
	system("mode con: cols=100 lines=20");
	system("cls");
	Sleep(3000);
	cout << "여긴 어디지....?? " << endl;
	Sleep(1000);
	cout << "윽...." << endl;
	Sleep(1000);
	cout << "기억을 해보자... 난 가족들이랑 필리핀행 비행기 여행을 가고 있었지 근데 갑자기 비행기가 격추되었고..... " << endl;
	Sleep(2000);
	cout << "난 바다로 떨어졌지..... " << endl;
	Sleep(1000);
	cout << "그후에는 기억이 없다...." << endl;
	Sleep(1500);
	cout << "그리고 도대체 내가 여기 왜 있는거지?? 여긴 어디고 또 가족들은 대체 어딧는거야 !!" << endl;
	Sleep(2000);
	cout << "주위를 살펴본다";
	Sleep(1000);
	cout << "(아무키나 누르세요)" << endl;
	int a = _getch();
	if (a == 93) // ]키
	{
		Sleep(500);
		Stringtochar(70, "이스터에그)) 황금사과를 발견하였습니다 사용자의 HP가 대폭증가합니다");
		hp += 100;
	}
	Sleep(1500);
	cout << "??? 사방이 물로 뒤덮혀 있다...." << endl;
	Sleep(2000);
	cout << "여기는 설마 무인도 ....? " << endl;
	Sleep(1700);
	cout << "일단 주변을 살펴보자 .. 뭔가 있을지도 몰라" << endl;
}
#pragma region Asituation
void ASituation()
{
	int b = 0;
	int a = 0;
	int eat;
	Sleep(1000);
	cout << " 일단 먹을거부터 찾아봐야될거 같은데....." << endl;
	Sleep(2000);
	cout << "앞쪽에 먹을 수 있는 것처럼 보이는 것들이 있다" << endl;
	Sleep(2000);
	cout << "음 뭔가 이상하게 생겼는데 이게 뭐지 ,,,,? " << endl;
	Sleep(1300);
	cout << "살아서는 한번도 못본 음식인데..." << endl;
	while (true)
	{
		b = rand() % 10;
		cout << "1: 먹는다 2: 먹지 않는다";
		if (FindItem("무인도에서 살아남기 책"))
		{
			Sleep(500);
			Stringtochar(70, " 3: 무인도에서 살아남기 책(아이템)");
		}
		else
		{
			cout << endl;
		}
		eat = _getch();
		if (eat == 49)
		{
			cout << "한번 먹어볼까 ? ~" << endl;
			Sleep(1500);
			if (0 <= b && b <= 5)
			{
				cout << "윽.. 배가 아프다" << endl;
				Sleep(2000);
				Stringtochar(80, "먹을 것에 독이 들어있었다 (HP -1)");
				hp--;
			}
			else
			{
				cout << "오 뭐야 이거 생각보다 맛있는데?? 우리나라에 팔면 대박나겠어" << endl;
				Sleep(1500);
				Stringtochar(80, "당신은 의외로 맛있는 먹거리를 찾은걸 만족합니다(HP + 1)");
				hp++;
			}
		}
		else if (eat == 50)
		{
			Stringtochar(70, "그래 위험은 감수하지않는게 좋지 (HP 변화 없음)");
		}
		else if (eat == 51 && FindItem("무인도에서 살아남기 책"))
		{
			int c = rand() % 10;
			cout << "아 맞다 그 책이 있었지!!" << endl;
			Sleep(1000);
			cout << "57쪽쯤에 무인도에서 먹을 수 있는 생물들이 기록돼있었던걸로 기억하는데...." << endl;
			Sleep(1500);
			if (0 <= c && c <= 6)
			{
				cout << "나는 재빨리 책을 피고 57쪽을 폈다" << endl;
				Sleep(1300);
				Stringtochar(80, "아 찾았다!! 이 식물들이 식용생물이었지 ㅎㅎ(HP + 1)");
				hp++;

			}
			else if (6 < c && c <= 8)
			{
				cout << "식용 생물쪽을 보다가 아까 본 식물이 생각났고 바로 그 식물쪽으로 가서 확인했다" << endl;
				Sleep(2000);
				cout << "어 ??? 이것은 기력을 최대로 채워주는 그 전설의 식물 kmozart??? " << endl;
				Sleep(1500);
				cout << "나는 재빨리 뛰어가 그 식물을 섭취하였다" << endl;
				Sleep(1300);
				Stringtochar(60, "나는 온몸에 활력이 돋는것을 느꼈다 (HP +2)");
				hp += 2;
			}
			else
			{
				cout << "책을 10분동안 찾아봤지만 관련된 내용이없었다.." << endl;
				Sleep(1000);
				cout << "일단 아무거나 먹어보자..." << endl;
				Sleep(800);
				Stringtochar(80, "윽....(먹을 것에 독이 들어있었다 HP -1)");
				hp--;
			}
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
#pragma endregion 
#pragma region Bsituaition
void BSituation()
{
	Sleep(1000);
	cout << "으... 슬슬 추워지네" << endl;
	Sleep(800);
	cout << "(밤이 오기 시작한다)" << endl;
	Sleep(900);
	cout << "불을 피워야겠다" << endl;
	Sleep(1000);
	while (true)
	{
		int t = 0;
		int aa = 0;
		int a = rand() % 10;
		cout << "1: 불을 피운다 2: 불을 안피운다 ";
		Sleep(1000);
		if (FindItem("성냥"))
		{
			if (FindItem("무인도에서 살아남기 책"))
			{
				Stringtochara(70, "3: 성냥 (아이템) ");
				Sleep(1000);
				Stringtochar(70, " 4:무인도에서 살아남기 책(아이템)");
			}
			else
			{
				Stringtochar(70, "3: 성냥 (아이템) ");
			}
		}
		else if (FindItem("무인도에서 살아남기 책"))
		{
			Stringtochar(70, "4:무인도에서 살아남기 책(아이템)");
		}
		else
		{
			cout << endl;
		}

		Sleep(1500);
		int c = _getch();
		if (c == 49)
		{
			cout << "주변에 불을 피울만한 재료가 있는지 보다가 3개의 재료를 발견했다" << endl;
			Sleep(1500);
			cout << "돋보기 , 부싯돌, 보우드릴이 있었다" << endl;
			Sleep(1000);
			while (true)
			{
				int a = 0;
				int b = rand() % 10;
				cout << "1: 돋보기를 쓴다 2: 부싯돌을 쓴다 3:보우드릴을 쓴다" << endl;
				int d = _getch();
				if (d == 49)
				{
					int random49A = rand() % 10;
					int random49 = rand() % 10;
					cout << "돋보기를 이용해 나뭇잎에 빛을 모으기 시작했다..." << endl;
					Sleep(2000);
					if (0 <= random49 && random49 <= 4)
					{
						cout << "태양 빛이 쌘덕에 불을 피우는것을 성공했다 !!" << endl;
						Sleep(700);
						Stringtochar(70, "불 덕분에 야생동물에게 습격당하지않고 편안한 밤을 보냈습니다(HP+1)");
						hp++;
					}
					else
					{
						cout << "태양 빛이 너무 약해서 불을 못피웠습니다 당신은 너무 피로하기때문에 기절합니다" << endl;
						Sleep(2500);
						if (0 <= random49A && random49A < 8)
						{
							Stringtochar(70, "당신이 기절한 사이 야생동물들이 와서 당신을 습격했습니다(HP-1)");
							hp--;
						}
						else
						{
							Stringtochar(70, "다행히 아무일도 없었습니다....(HP 변화없음)");
						}
					}
				}
				else if (d == 50)
				{
					int random50A = rand() % 10;
					int random50 = rand() % 10;
					cout << "부싯돌을 튕기면서 마른풀들에 대고 불을 피우기 시작했다...";
					Sleep(1500);
					if (0 <= random50 && random50 < 7)
					{
						cout << "불씨가 피었다 !!" << endl;
						Sleep(800);
						cout << "나는 그 불씨들을 재빨리 옮겨 불을 피웠다" << endl;
						Sleep(1000);
						Stringtochar(70, "당신은 자신의 실력에 만족하여 따뜻한 밤을 보냈다(HP+1)");
						hp++;
					}
					else if (7 <= random50 && random50 < 9)
					{
						cout << "당신은 열심히 노력했지만 불씨는 보이지 않았다..." << endl;
						Sleep(2500);
						cout << "당신은 그냥 자기로 했다" << endl;
						if (0 <= random50A && random50A < 8)
						{
							Stringtochar(70, "당신이 기절한 사이 야생동물들이 와서 당신을 습격했습니다(HP-1)");
							hp--;
						}
						else
						{
							Stringtochar(70, "다행히 아무일도 없었습니다....(HP 변화없음)");
						}
					}
					else
					{
						int firerandA = rand() % 10;
						int firerand = rand() % 10;
						cout << "드디어 불씨가 붙었다!!" << endl;
						Sleep(700);
						cout << "자세히 보니 불씨가 내 옷에 붙었다???!!!!" << endl;
						Sleep(1000);
						if (0 < firerand && firerand < 5)
						{
							cout << "이리저리 뛰어봤지만 불씨는 꺼지지 않았고 불씨는 커쳐만 갔다 내 모습은 마치 고스트라이더 같았다..." << endl;
							Sleep(1500);
							Stringtochar(70, "크게 화상을 입었다(HP-2)");
							hp -= 2;
						}
						else
						{
							cout << "엄청나게 빠른 스피드로 달리니까 불씨가 꺼졌다.. 다행이다" << endl;
						}
						Sleep(1000);
						cout << "당신은 힘든 몸으로 잠을 청했다.." << endl;
						if (0 <= random50A && random50A < 8)
						{
							Stringtochar(70, "당신이 잠을 자고있는 사이 야생동물들이 와서 당신을 습격했습니다(HP-1)");
							hp--;
						}
						else
						{
							Stringtochar(70, "다행히 아무일도 없었습니다....(HP 변화없음)");
						}
					}
				}
				else if (d == 51)
				{
					int random51A = rand() % 10;
					int random51 = rand() % 10;
					cout << "보우드릴을 써서 불을 피우기 시작했다 (보우드릴 모르면 인터넷에 쳐보셈ㅋㅋ)" << endl;
					Sleep(1500);
					cout << "난 계속 두 나무를 마찰시켰다.." << endl;
					Sleep(1000);
					if (0 <= random51 && random51 <= 3)
					{
						cout << "노력의 결과인가... 나무에 불이 붙었다" << endl;
						Sleep(1000);
						Stringtochar(80, "불 덕분에 안전한 밤을 보낼 수 있었다(HP+1)");
						hp++;
					}
					else
					{
						cout << "도저히 불이 안붙는다 역시 전문가용 도구인가....;;" << endl;
						Sleep(1000);
						cout << "아쉬운 마음을 뒤로한채 잠에 들었다" << endl;
						Sleep(2000);
						if (0 <= random51A && random51A <= 7)
						{
							Stringtochar(70, "당신이 잠에든 사이 야생동물들이 와서 당신을 공격하였습니다(HP-1)");
							hp--;
						}
						else
						{
							Stringtochar(70, "다행히 아무일도 없었습니다....(HP 변화없음)");
						}
					}
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
			}
			break;
		}
		else if (c == 50)
		{
			int randomc50 = rand() % 10;
			cout << "귀찮다 ;; 그래.... 까짓 뭔 일 있겠냐" << endl;
			Sleep(2000);
			if (0 <= randomc50 && randomc50 <= 6)
			{
				Stringtochar(70, "당신이 잠에든 사이 야생동물들이 와서 당신을 공격하였습니다(HP-1)");
				hp--;
			}
			else
			{
				Stringtochar(70, "다행히 아무일도 없었습니다....(HP 변화없음)");
			}
		}
		else if (c == 51 && FindItem("성냥"))
		{

			cout << "아 맞다 성냥이 있었지 !!" << endl;
			Sleep(1500);
			cout << "나는 성냥을 이용해 손쉽게 불을 피웠다" << endl;
			Sleep(1500);
			cout << "음 따뜻해 ㅎㅎ" << endl;
			Stringtochar(70, "당신은 편하고 따뜻하게 밤을 보냈습니다 (HP+1)");
			hp++;
		}
		else if (c == 52 && FindItem("무인도에서 살아남기 책"))
		{
			int random52A = rand() % 10;
			int random52 = rand() % 10;
			cout << "맞다 그 책이 있었지 !!!" << endl;
			Sleep(1000);
			cout << "책의 69쪽에 불을 피우는 내용이 설명돼있던거같은데..." << endl;
			Sleep(2000);
			cout << "아 찾았다 불을 쉽게 피우는 방법 !!!" << endl;
			Sleep(1300);
			cout << "나는 그것을 그대로 따라해 보았다" << endl;
			Sleep(2000);
			if (0 <= random52 && random52 < 8)
			{
				cout << "오 불이 피워진다!!!! " << endl;
				Sleep(1500);
				cout << "역시 그 책은 짱이야 !!ㅎㅎ" << endl;
				Sleep(1500);
				Stringtochar(60, "당신은 그 책에 감탄하며 편안하게 밤을 보냈습니다(HP+1)");
				hp++;
			}
			else
			{
				cout << "아 ;; 따라해도 안되잖아 쓰레기책이네 그냥;;" << endl;
				Sleep(2000);
				cout << "나는 책한테 실망하면서 잠에 들었다" << endl;
				Sleep(1500);
			}
		}
		else
		{
			if (aa >= 50 && aa < 100)
			{
				Randomtlqkf();
				aa++;
				continue;
			}
			else if (aa == 100)
			{
				cout << "넌 걍 하지마라 ㅋㅋ";
				exit(0);
			}
			Randomelse();
			aa++;
			continue;
		}
		break;
	}
	num++;
	MainScreen();
}
#pragma endregion
#pragma region CSituation

void CSituation()
{
	int c = 0;
	cout << "자고 일어났더니 급격하게 갈증이 나기 시작했다....." << endl;
	Sleep(1500);
	while (true)
	{
		cout << "1: 참는다 2:옆에 있는 구정물을 마신다 " << endl;
		Sleep(1500);
		if (FindItem("물 1L"))
		{

			if (FindItem("무인도에서 살아남기 책"))
			{
				Stringtochara(70, " 3: 물 1L(아이템) ");
				Sleep(1000);
				Stringtochar(70, " 4:무인도에서 살아남기 책(아이템) ");
			}
			else
			{
				Stringtochar(70, " 3: 물 1L(아이템) ");
			}
		}
		else if (FindItem("무인도에서 살아남기 책"))
		{
			Stringtochar(70, " 4: 무인도에서 살아남기 책(아이템)");
		}
		int a = _getch();
		if (a == 49)
		{
			int rand49a = rand() % 10;
			cout << "나는 그냥 악으로 깡으로 버티기로 했다..." << endl;
			Sleep(2000);
			if (0 <= rand49a && rand49a < 2)
			{
				cout << "으윽...으ㅡ....ㅇ..ㅡ.... 너무 힘ㄷ..ㄹ.ㅇㅓ...." << endl;
				Sleep(1500);
				Stringtochar(70, "당신은 갈증을 못버티다 결국 죽었습니다....우리 신체의 70퍼센트는 수분으로 채워져 있습니다(사망)");
				Die();
			}
			else if (2 <= rand49a && rand49a < 4)
			{
				cout << "으... 나는 마시는 호흡을 최소화하고 정신을 집중해 명상에 들어갔다..." << endl;
				Sleep(2000);
				Stringtochar(70, "당신은 받는 피해를 최소화해서 최소한의 피해를 받았습니다 (HP-1)");
				hp--;
			}
			else
			{
				cout << " 근성에는 자신있지 !! 이정도는 버틸수 있어 ㅋ" << endl;
				Sleep(1500);
				Stringtochar(70, "당신은 목이 엄청나게 메말라 가는것을 느끼면서 고통스러워합니다..(HP-2)");
				hp -= 2;
				Sleep(2000);
			}
		}
		else if (a == 50)
		{
			int random50 = rand() % 10;
			cout << "나는 갈증을 못참고 옆에 구정물이 있는곳으로 달려갔다" << endl;
			Sleep(1500);
			cout << " 좀 더럽지만 일단 살기 위해 그 물을 황급히 마셨다" << endl;
			Sleep(2000);
			if (0 <= random50 && random50 <= 1)
			{
				cout << "오 뭐야 생각보다 그렇게 더럽지는 않았던거 같은데?" << endl;
				Sleep(1500);
				Stringtochar(70, "당신은 다행이라고 운이 좋았다고 생각한다(HP 유지)");
			}
			else
			{
				cout << ("으윽... 배가 아파온다 끄윽ㄲ..ㅡ윽") << endl;
				Sleep(1000);
				Stringtochar(70, "어딘가 아픈곳이 생긴것 같다..(알수없는 질병 +)");
				isSick = true;
			}
		}
		else if (a == 51 && FindItem("물 1L"))
		{
			cout << "내가 이래서 물을 선택했지 꿀꺽꿀꺽~~" << endl;
			Sleep(1000);
			Stringtochar(70, "당신은 물을 먹고 컨디션이 좋아졌습니다(HP+1)");
			hp++;
		}
		else if (a == 52 && FindItem("무인도에서 살아남기 책"))
		{
			int random52 = rand() % 10;
			cout << "아 맞다 그 책이 있었지???" << endl;
			Sleep(1000);
			cout << "여기 74쪽 쯤에 무인도에서 물을 얻는 방법이 있었는데....." << endl;
			Sleep(2000);
			if (0 <= random52 && random52 < 5)
			{
				cout << "어 여깃다 물은 항상 낮고 단단한 곳으로 모인다.계곡이나 모래,자갈지대를 파보아도 물이 나오고 수풀이 드문드문있는 곳도 파보면 물이 나온다" << endl;
				Sleep(2500);
				cout << "아 뭐이리 길어 일단 해보고 봐야지;;" << endl;
				Sleep(5000);
				Stringtochar(70, "당신은 얻은 물을 찝찝하게 마셨다(HP 변동없음)");
			}
			else
			{
				cout << "바닥에 비닐을 펼쳐놓으면 비닐의 면적만큼 아침 일찍 이슬을 얻을 수 있다? " << endl;
				Sleep(1500);
				cout << "이걸 도대체 어느 세월에해 ;;" << endl;
				Stringtochar(70, "당신은 그냥 참기로 했다..(HP-2)");
				hp -= 2;
			}
		}
		else
		{


			if (c >= 50 && c < 100)
			{
				Randomtlqkf();
				c++;
				continue;
			}
			else if (c == 100)
			{
				cout << "넌 걍 하지마라 ㅋㅋ";
				exit(0);
			}
			Randomelse();
			c++;
			continue;
		}

		break;
	}
	num++;
	MainScreen();
}
#pragma endregion
#pragma region DSituation
void DSituation()
{
	int a = 0;
	cout << "위에 비행기가 지나간다 ??" << endl;
	Sleep(1000);
	cout << "나는 내 위치를 알릴 방법을 생각해보았다.." << endl;
	Sleep(2000);
	cout << "내가 생각한 방법은....." << endl;
	Sleep(1000);
	while (true)
	{
		cout << "1: 소리를 지른다";
		if (FindItem("성냥"))
		{
			if (FindItem("무인도에서 살아남기 책"))
			{
				Stringtochara(70, " 2 : 성냥(아이템) ");
				Sleep(1000);
				Stringtochar(70, " 3:무인도에서 살아남기 책(아이템) ");
			}
			else
			{
				Stringtochar(70, " 2: 성냥(아이템) ");
			}
		}
		else if (FindItem("무인도에서 살아남기 책"))
		{
			Stringtochar(70, " 3: 무인도에서 살아남기 책(아이템) ");
		}
		else
		{
			cout << endl;
		}
		int a = _getch();
		if (a == 49)
		{
			int random49 = rand() % 10;
			cout << "나는 힘껏 소리를 질러봤다" << endl;
			if (random49 == 0)
			{
				cout << "나는 젖먹던 힘을 짜서 소리를 질러봤지만 아무 반응이 없는거 같았다.." << endl;
				Sleep(2000);
				cout << "그 순간 비행기가 갑자기 내쪽으로 오는거 같았다 .. 잘못 본건가?" << endl;
				Sleep(1500);
				cout << "아니 ? 내가 제대로 본게 맞았다 비행기는 내쪽으로 점점 오고있었다" << endl;
				Sleep(2000);
				cout << "비행기에서 사람들이 내렸고  그 사람들은 나의 자초지종을 듣고 나를 한국으로 데려다 주었다 " << endl;
				Sleep(3000);
				Stringtochar(70, "당신은 기적적으로 구조됐습니다");
				Sleep(2000);
				Escape();
			}
			else
			{
				cout << "될리가 있나... 목만 쉬었다 ;;;" << endl;
				Sleep(1500);
				cout << "비행기는 멀리 가버렸다 하.. 좋은 기회였는데" << endl;
			}
		}
		else if (a == 50 && FindItem("성냥"))
		{
			int random50 = rand() % 10;
			cout << "나는 불을 피워서 내 위치를 알리기로 생각했다" << endl;
			Sleep(2000);
			cout << "나는 재빨리 불을 피웠고 내 위치를 알아주길 기도했다..." << endl;
			Sleep(2000);
			if (0 <= random50 && random50 < 4)
			{
				int a = 0;
				cout << "어 ?? 비행기가 내쪽으로 오는거같은데? 계속 봐보자" << endl;
				Sleep(2000);
				cout << "비행기는 내쪽으로 오다가 결국 이 섬에 착륙했다 " << endl;
				Sleep(1500);
				cout << "나는 조심스럽게 비행기 쪽으로 갔다" << endl;
				Sleep(1500);
				cout << "그 사람들은 일본 사람들이었다" << endl;
				Sleep(1500);
				cout << "일본사람들 ? 우리나라를 한때 지배한 그 나라 사람들 ??" << endl;
				Sleep(2000);
				cout << "흠 ... 어떡하지" << endl;
				while (true)
				{
					cout << "1: 한국인인걸 말한다 2: 외국인인척 한다" << endl;
					int a = _getch();
					if (a == 49)
					{
						int b = rand() % 10;
						cout << "나는 당당하게 한국인인걸 말했다" << endl;
						Sleep(1500);
						if (0 <= b && b < 5)
						{
							cout << "일본인들은 그말을 들은순간 갑자기 눈빛이 변했다 " << endl;
							Sleep(1500);
							cout << "일본인들은 칼을 꺼내고 나에게로 오기 시작했다" << endl;
							Sleep(1500);
							cout << "나는 무서워서 곧바로 도망쳤다" << endl;
							Sleep(1500);
							cout << "일본놈들은 총을 쏴서 나를 맞췄다" << endl;
							Sleep(1500);
							cout << "그리고 나한테 다가와서 더러운 조센징년이 어딜 ㅋㅋ 죽어라" << endl;
							Sleep(1500);
							Stringtochar(70, "운이 없이 혐한 사상을 갖고있는 일본인에게 걸렸다 (죽음)");
							Die();
						}
						else
						{
							cout << "일본인들은 그말을 듣고 갑자기 눈빛이 변했다" << endl;
							Sleep(1500);
							cout << "오마에... 코리아 데스까??" << endl;
							Sleep(1500);
							cout << "오 아이 다이스키 BTS 소시테 킴치" << endl;
							Sleep(1500);
							cout << "다행히 한국을 좋아하는 일본인한테 걸린거 같았다" << endl;
							Sleep(1500);
							cout << "나는 몸짓,발짓,손짓을 총동원해서 한국으로 가야한다는 것을 표현했다" << endl;
							Sleep(1500);
							cout << "일본인도 알아듣고 하잇이라고 하였다 다행이다...휴 여기서 평생 사는줄 알았어..." << endl;
							Sleep(2000);
							Stringtochar(70, "당신은 착한 일본인을 만나 한국으로 무사히 갈 수 있게 됐습니다..(탈출 성공)");
							Escape();
						}
					}
					else if (a == 50)
					{
						Stringtochar(70, "개발자: 잠깐 아무리 그래도 한국인인데 외국인인척을해 ? 이건 아니지 넌 벌좀 받아야겠다 (HP -2)");
						hp -= 2;
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


			}

		}
		else if (a == 51 && FindItem("무인도에서 살아남기 책"))
		{
			int ranmdom51 = rand() % 10;
			cout << "아 맞다 (또) 그책이 있었지 ㅎㅎㅎㅎ" << endl;
			Sleep(1000);
			cout << "100쪽쫌에 무인도에서 자기 위치를 알리는 방법이 있었던거같은데...." << endl;
			Sleep(2000);
			if (0 <= ranmdom51 && ranmdom51 < 8)
			{
				cout << "아 찾았다 !! 주변에 있는 돌을 이용해 SOS모양을 만든다??" << endl;
				Sleep(2000);
				cout << "나는 바로 실행에 옮겼다" << endl;
				Sleep(2500);
				cout << "읏쨔 다했다... 후 힘들다 비행기가 이쪽을 보는지 한번 볼까?!" << endl;
				Sleep(2500);
				cout << "어.... 망했다" << endl;
				Sleep(1500);
				Stringtochar(70, "당신이 SOS모양을 만드는 사이 비행기는 지나가고 없었습니다.....");
				Sleep(1000);
			}
			else
			{
				cout << "주변에 거울이나 유리등을 이용해서 빛을 비친다??..." << endl;
				Sleep(1500);
				cout << "음 신뢰가 안가지만 일단 해보자,,," << endl;
				Sleep(1500);
				cout << "나는 비행기쪽으로 빛을 쏘기 시작했다 그리고 기다렸다 " << endl;
				Sleep(3000);
				cout << "어 뭐지??? 기적스럽게 비행기가 내쪽으로 오기 시작했다.." << endl;
				Sleep(2000);
				cout << "난 환호하면서 비행기쪽으로 갔다 ㅎㅎ 야호!!ㅎ" << endl;
				Sleep(2500);
				Stringtochar(80, "당신은 운이좋게 비행기를 발견하였고 그 비행기를 타고 한국으로 돌아가셨습니다 (탈출 성공)");
				Escape();
			}
		}
		break;
	}
	num++;
	if (isSick == true)
	{
		Issick();
	}
	MainScreen();
}
#pragma endregion
void Issick()
{
	system("cls");
	int b = 0;
	Sleep(2000);
	cout << "저번에 먹은 물 때문에 식중독에 걸린 것 같다...." << endl;
	Sleep(2000);
	cout << "윽으으ㅡ 배가 너무 아프다 이러다 진짜 죽을거같은데 하.. 어떡하지... 어떤 방법이 없을까..." << endl;
	Sleep(2500);
	while (true)
	{
		cout << "1: 그냥 참는다 " << endl;
		if (FindItem("의약품"))
		{
			cout << "2: 의약품 (아이템)" << endl;
		}
		int a = _getch();
		if (a == 49)
		{
			cout << "나는 나의 정신력을 믿고 버티기로 했고 잠을 청해보기로 했다" << endl;
			Sleep(3000);
			int random49 = rand() % 10;
			if (0 <= random49 && random49 < 8)
			{
				cout << "나는 갑자기 극심한 고통을 느껴 잠이 깼다" << endl;
				Sleep(2000);
				cout << "머리가 깨질듯 아프다....호흡도 잘 안되기 시작했어,,,, " << endl;
				Sleep(2000);
				cout << "윽...ㅇ..ㅡ...이렇게 죽는건 아니겠지...? 살고싶어......" << endl;
				Sleep(3000);
				Stringtochar(70, "당신은 기생충에 감염되서 죽을고비를 넘겼습니다....(HP-2)");
				hp -= 2;
			}
			else
			{
				cout << "오,,, 자고 일어났더니 정신이 말끔해졌다" << endl;
				Sleep(2000);
				Stringtochar(70, "당신은 운이좋게 식중독이 없어졌습니다");
			}
		}
		else if (a == 50 && FindItem("의약품"))
		{
			cout << "난 가지고있던 의약품을 황급히 꺼내서 먹었다" << endl;
			Sleep(2000);
			cout << "흠..이게 효과가 있으려나.. 일단 좀만 기다려보자" << endl;
			Sleep(3000);
			cout << "오 하나도 안아픈데?? 지금 완전 풀컨디션이야 !! " << endl;
			Sleep(2000);
			Stringtochar(70, "당신은 약의 효능에 감탄하면서 잠에 들었습니다 (HP+1)");
			hp++;
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
}
#pragma region LastSiutation
void LastSituation()
{
	int c = 0;
	system("cls");
	int b = 0;
	cout << "어 저게 뭐지??" << endl;
	Sleep(1500);
	cout << "저기에 배같은게 보이는데 ? 나는 그쪽으로 황급히 뛰어갔다" << endl;
	Sleep(2000);
	cout << "오...오 진짜 배다 배야 " << endl;
	Sleep(1500);
	cout << "빨리 이걸타고 한국으로 돌아가야겠어 !!!!" << endl;
	Sleep(1500);
	cout << "난 이성을 잃고 무작정 배를 타고 노를 젓기 시작했다..." << endl;
	Sleep(3000);
	cout << "헉 뭐지 내가 지금 뭐하는거야????" << endl;
	Sleep(1000);
	cout << "이성이 돌아왔을 때쯤 무인도는 실루엣만 보일 정도로 멀어졌다" << endl;
	Sleep(2000);
	cout << "헉 어떡하지 어느쪽으로 가야되지......일단 내가 남쪽에서 왔으니까 남쪽은 아닐테고 북쪽에서 선택해야되는데..하.. 어디로 가야하오.." << endl;
	Sleep(2000);
	while (1)
	{

		cout << "1: 북서쪽으로 간다 2: 북쪽으로 간다 3: 북동쪽으로 간다" << endl;
		int b = _getch();
		if (b == 49)
		{
			cout << "북서쪽으로 가는 것을 선택했다" << endl;
			Sleep(1000);
			cout << "나는 계속 북서쪽으로 노를 저었다  .. 팔이 저려왔지만 그래도 집을 갈 수 있다는 생각에 쉬지 않았다 " << endl;
			Sleep(5000);
			cout << "3시간쯤 노를 저었을때 나는 어떤 대륙에 도착했다 ..." << endl;
			Sleep(2000);
			cout << "나는 일단 주변에 보이는 마을로 뛰었다" << endl;
			Sleep(2000);
			cout << "헉....헉 ...... 너무 힘들다.... " << endl;
			Sleep(2000);
			cout << "난 주변에 있는 마을 주민분께 여기가 어디냐고 물어봤다" << endl;
			Sleep(3000);
			cout << "그분이 말하시는것을 듣고 난 좌절했다..." << endl;
			Sleep(3000);
			cout << "그분은 이렇게 말하셨다..." << endl;
			Sleep(1000);
			Stringtochar(70, "Anh ấy đang nói gì bây giờ??? ");
			Stringtochar(70, "그렇다 여기는 베트남이었다....");
			Die();
		}
		else if (b == 50)
		{
			cout << "나는 북쪽으로 가는것을 선택했다" << endl;
			Sleep(1000);
			cout << "나는 계속 북쪽으로 젓고있었다 하지만 무슨 이상한 낌새가 나타나고 있었다" << endl;
			Sleep(2000);

			cout << "아까부터 바람이 내쪽으로 불고 있었다 흠 여기로 계속 가는게 맞을까?" << endl;
			Sleep(1500);
			while (true)
			{
				cout << "1:북서쪽으로 간다 2: 계속 북쪽으로 간다 3: 북동쪽으로 간다" << endl;
				int b = _getch();
				if (b == 49)
				{
					cout << "나는 방향을 바꿔 북서쪽으로 가는 것을 선택했다" << endl;
					Sleep(1000);
					cout << "난 북쪽에서 토네이도가 휘몰아 치는 것을 보고 이쪽으로 잘 온거같다고 생각했다" << endl;
					Sleep(2000);
					cout << "나는 계속 북서쪽으로 노를 저었다  .. 팔이 저려왔지만 그래도 집을 갈 수 있다는 생각에 쉬지 않았다 " << endl;
					Sleep(5000);
					cout << "3시간쯤 노를 저었을때 나는 어떤 대륙에 도착했다 ..." << endl;
					Sleep(2000);
					cout << "나는 일단 주변에 보이는 마을로 뛰었다" << endl;
					Sleep(2000);
					cout << "헉....헉 ...... 너무 힘들다.... " << endl;
					Sleep(2000);
					cout << "난 주변에 있는 마을 주민분께 여기가 어디냐고 물어봤다" << endl;
					Sleep(3000);
					cout << "그분이 말하시는것을 듣고 난 좌절했다..." << endl;
					Sleep(3000);
					cout << "그분은 이렇게 말하셨다..." << endl;
					Sleep(1000);
					Stringtochar(70, "他现在在说什么?? ");
					Stringtochar(70, "그렇다 여기는 대만이었다....(게임 오버)");
					Sleep(2000);
					Die();
				}
				else if (b == 50)
				{
					cout << "나는 그냥 계속 북쪽으로 가는것을 선택했다.." << endl;
					Sleep(2000);
					cout << "10분쯤 계속 북쪽으로 가는데 앞쪽에서 토네이도 휘몰아 쳤다" << endl;
					Sleep(2000);
					cout << "난 도망칠세도 없이 몸이 위로 뜨기 시작했다" << endl;
					Sleep(3000);
					cout << "그리고 상공 500미터까지 몸이 뜨고 그대로 아래로 떨어졌다..." << endl;
					Stringtochar(70, "토네이도에 휘말려 죽었습니다(게임 오버)");
					Die();
				}
				else if (b == 51)
				{
					cout << "나는 예감이 좋지 않아 북동쪽으로 가는 것을 선택했다" << endl;
					Sleep(2000);
					cout << "10분정도 뒤에 아까 왔던곳에 토네이도가 휘몰아 치는 것을 보고 나의 선택에 정말 감격했다" << endl;
					Sleep(1000);
					cout << "나는 계속 북동쪽으로 노를 저었다...." << endl;
					Sleep(3000);
					cout << "3시간쯤 걸렸을때 땅이 보이기 시작했다 난 더욱 빨리 노를 저었다" << endl;
					Sleep(2000);
					cout << "드디어 땅에 발을 딛었고 가까운 마을로 달리기 시작했다" << endl;
					Sleep(3000);
					cout << "그리고 그 표지판에 부산광역시라는 팻말을 봤다" << endl;
					Sleep(2000);
					cout << "드디어 한국에 한국에 왔구나 !!!!!! 거기서 죽는줄 알았어....." << endl;
					Sleep(1000);
					Stringtochar(70, "부산광역시에 도착하셨습니다 탈출 성공");
					Escape();
				}
				else
				{
					if (b >= 50 && b < 100)
					{
						Randomtlqkf();
						b++;
						continue;
					}
					else if (b == 100)
					{
						cout << "넌 걍 하지마라 ㅋㅋ";
						exit(0);
					}
					Randomelse();
					b++;
					continue;
				}
				break;
			}
		}
		else if (b == 51)
		{
			cout << "나는 순간적인 뇌지컬로 북동쪽으로 가야된다고 생각했다" << endl;
			Sleep(2000);
			cout << "나는 필리핀으로 여행을 가고있었으니 한국에서 필리핀은 한국에서 반대쪽이다 즉 남서쪽의 반대인 북동쪽으로 가면 된다는 말이다" << endl;
			Sleep(3000);
			cout << "이대로 가면 한국에 도착할수 있겠지.....?" << endl;
			Sleep(2000);
			cout << "나는 계속 북동쪽으로 노를 저었다...." << endl;
			Sleep(3000);
			cout << "3시간쯤 걸렸을때 땅이 보이기 시작했다 난 더욱 빨리 노를 저었다" << endl;
			Sleep(2000);
			cout << "드디어 땅에 발을 딛었고 가까운 마을로 달리기 시작했다" << endl;
			Sleep(3000);
			cout << "그리고 그 표지판에 부산광역시라는 팻말을 봤다" << endl;
			Sleep(2000);
			cout << "드디어 한국에 한국에 왔구나 !!!!!! 거기서 죽는줄 알았어....." << endl;
			Sleep(1000);
			Stringtochar(70, "부산광역시에 도착하셨습니다 탈출 성공");
			Escape();
		}

		else
		{
			if (c >= 50 && c < 100)
			{
				Randomtlqkf();
				c++;
				continue;
			}
			else if (c == 100)
			{
				cout << "넌 걍 하지마라 ㅋㅋ";
				exit(0);
			}
			Randomelse();
			c++;
			continue;
		}

		break;
	}

}

#pragma endregion
