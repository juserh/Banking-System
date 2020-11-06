/*
 * ����Ʈ���� ����: Banking System Ver 0.7 
 * 
 * �����̸�: BankingSystemMain.cpp
 * �ۼ���: ������
 * ������Ʈ ����: [2010, 01, 01] ���Ϲ��� 0.7 
 */

#include "BankingCommonDecl.h"
#include "AccountHandler.h"

int main(void)
{
	AccountHandler manager;
	int choice;
	
	//Ÿ��Ʋ �߰�
	cout << "*************************" << endl;
	cout << "**   WELCOME DS BANK   **" << endl;
	cout << "*************************" << endl;

	while(1) //���ѷ���
	{
		manager.ShowMenu();
		cout<<"����: "; 
		cin>>choice;
		cout<<endl;
		
		switch(choice)
		{
		case MAKE:
			manager.MakeAccount(); 
			break;
		case DEPOSIT:
			manager.DepositMoney(); 
			break;
		case WITHDRAW: 
			manager.WithdrawMoney(); 
			break;
		case INQUIRE:
			manager.ShowAllAccInfo(); 
			break;
		case EXIT:
			return 0;
		default:
			cout<<"Illegal selection.."<<endl;
		}
	}
	return 0;
}