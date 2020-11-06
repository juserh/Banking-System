/*
 * �����̸�: Account.h
 * �ۼ���: ������
 * ������Ʈ ����: [2010, 01, 01] ���Ϲ��� 0.7 
 */

#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

class Account
{
private:
	int accID; 
	int balance;    
	string cusName; 
public:
	Account(int ID, int money, string name);
	//Account(const Account & ref);

	int GetAccID() const;
	virtual void Deposit(int money);
	int Withdraw(int money) ;
	void ShowAccInfo() const ;
	//Account& operator =(const Account& ref);
	//~Account();
};
#endif