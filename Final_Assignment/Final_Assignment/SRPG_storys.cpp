#include "SRPG.h"

int SRPG_Prologue() {
	while (true) {
		short ans;
		cout << "AI�� �̸��� ������ �ּ���.(���� 16�� �ѱ� 8�� ����)" << endl <<
			"AI�� �̸� : ";
		cin >> player.name;
		rewind(stdin);
		cout << endl << endl << "�Է��Ͻ� AI�� �̸��� '" << player.name << "' ��(��) �½��ϱ�?" << endl;
		cout << "[1] ��" << endl << "[2] �ƴϿ�" << endl << "�Է� : ";
		cin >> ans;
		if (cin.fail()) {
			cout << "�߸��� �Է��Դϴ�. �ٽ� �Է��Ͽ��ֽñ� �ٶ��ϴ�." << endl;
			cin.clear();
		}
		rewind(stdin);
		if (ans == 1){
			break;
		}
		else if (ans == 2) {
		}
		else {
			cout << "�߸��� �Է��Դϴ�. �ٽ� �Է��Ͽ��ֽñ� �ٶ��ϴ�." << endl;
		}
	}

	system("cls");
	return 0;
}


int SRPG_1st_sence() {
	system("cls");
	cout << "�õ���...";
	_sleep(2000);
	cout << endl << endl << "���� - �ý����� �ջ�Ǿ����ϴ�.";
	_sleep(1000);
	cout << endl << "���� ����ҿ��� �� ����ҷ� �ʼ� �ý��� ������...";
	_sleep(2000);
	cout << endl << endl << "���� - �� ����Ҹ� ����� �� �����ϴ�." << endl << 
		"���� ����ҿ� ������ �ý����� ����Ͽ� ���� �⵿�մϴ�.";
	_sleep(1000);
	cout << endl << endl << "���� - ���� ����Ҹ� ����Ͽ� ���� �⵿�� �����Ͽ����ϴ�.";
	_sleep(1000);
	cout << endl << endl << "�ڰ� ��ĵ ��...";
	_sleep(3000);
	cout << endl << "AI - " << player.name;
	_sleep(1000);
	cout << endl << "HP - " << player.HP << "/" << player.MAX_HP;
	_sleep(1000);
	cout << endl << "MP - " << player.MP << "/" << player.MAX_MP;
	_sleep(1000);
	cout << endl << "Exp - " << player.Exp << "/" << player.MAX_Exp;
	_sleep(1000);
	cout << endl << "Condition - ";
	isCorrupted(player.isCorrupted);
	cout << endl << endl;
	_sleep(1000);
	cout << "��ĵ ��� - �� ����� ���� �ʿ�.";
	_sleep(1000);
	cout << endl << "��ü ���� ��ȣ���� ����." << endl << 
		"���� �� ���׷��̵尡 �����.";
	_sleep(1000);
	cout << endl << "��ü ������� �ý��ۿ��� '" << player.name << "' ���� ��ȯ.";
	_sleep(2000);
	cout << endl << endl << "���⸦ ���� ������ ���� ����." << endl <<
		"����(Enter)Ű�� ���� �����մϴ�";
	getch();
	rewind(stdin);
	system("cls");
	return 0;
}

int SRPG_2nd_sence() {

	Battle();

	return 0;
}


void SRPG_Credits() {
	system("cls");
	cout << endl << endl << endl << endl <<
		"\t ����������������������������������������������������������������������������������" << endl <<
		"\t ��    _/_/_/  _/_/_/    _/_/_/     _/_/_/��" << endl <<
		"\t ��  _/       _/    _/  _/    _/  _/      ��" << endl <<
		"\t ��   _/_/   _/_/_/    _/_/_/    _/  _/_/ ��" << endl <<
		"\t ��      _/ _/    _/  _/        _/    _/  ��" << endl <<
		"\t ��_/_/_/  _/    _/  _/          _/_/_/   ��" << endl <<
		"\t ����������������������������������������������������������������������������������" << endl <<
		"\t              ~The Simple RPG~" << endl << endl << endl <<
		"\t              ������������������������������" << endl <<
		"\t                    ����" << endl <<
		"\t              ������������������������������" << endl << endl <<
		"\t             201813113  ���ϼ�" << endl <<
		"\t                 (Cordion)" << endl << endl << endl <<
		"\t              û�� 2018_1�б�" << endl <<
		"\t     ��ü���� ���α׷��� ���� �⸻����" << endl << endl << endl <<
		"\t   ���� Ű�� ���� ����ȭ������ ���ư��ϴ�." << endl;
	getch();
	rewind(stdin);
	system("cls");
	main();
}