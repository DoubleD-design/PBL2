#pragma once
#include<conio.h>
#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<fstream>
#include<string>
#include<cstring>
#include<iomanip>
#include"Manager.h"

using namespace std;

Node<Customer>* uc = new Node<Customer>;
Node<Staff>* uf = new Node<Staff>;
StaffList sl;
CustomerList cl;
Orders ods;
BillList bl;
Menu m;
Manager mng;

void SetupStaff(){
	Staff s1("Nguyen_Thanh_Hieu", 1, 2004, "0522984048");
	Staff s2("Tran_Duc_Duy", 1, 2004, "0905227016");
	sl.Insert(s1);
	sl.Insert(s2);
}

void SetupMenu(){
	Food f1(1, "Banh_bao_chien", 20000);
	Food f2(2, "Salad_ca_ngu", 30000);
	Food f3(3, "Rau_muong_xao_toi", 30000);
	Food f4(4, "Sup_hai_san", 40000);
	Food f5(5, "Bo_xao_la_lot", 50000);
	m.Insert(f1);
	m.Insert(f2);
	m.Insert(f3);
	m.Insert(f4);
	m.Insert(f5);
	m.Sort();
}

void SetupCustomer(){
	Customer c1("Nguyen_Thanh_Hieu", "0522984048", "12345678");
	Customer c2("Tran_Duc_Duy", "0905227016", "12345678");
	cl.Insert(c1);
	cl.Insert(c2);
	cl.Sort();
}

void Setup(){
	SetupStaff();
	SetupMenu();
	SetupCustomer();
}

void Intro(){
	system("cls");
    int i;
 	printf("\n%9c",201);
 	for (i=0;i<=85;i++) printf("%c",205);
 	printf("%c",187);
 	printf("\n        %c %86c",4,4);
 	printf("\n        %c                             DO AN CO SO LAP TRINH                                    %c",4,4);
 	printf("\n        %c                       DE TAI: He thong quan li nha hang                              %c",4,4);
 	printf("\n        %c %86c",4,4);
 	printf("\n        %c       Sinh vien thuc hien:                       Giao vien huong dan:                %c",4,4);
 	printf("\n        %c           %c Nguyen Thanh Hieu                       %c Le Thi My Hanh                 %c",4,45,45,4);
 	printf("\n        %c           %c Tran Duc Duy  %60c",4,45,4);
 	printf("\n        %c %86c",4,4);
 	printf("\n        %c",200);
 	for (i=0;i<=85;i++) printf("%c",205);
 	printf("%c\n",188);
	cout << " Press any key to continue..." << endl;
	_getch();
	system("cls");
}

int Login(){
	Nhaplai:
	system("cls");
	int i;
 	printf("\n%9c",201);
 	for (i=0;i<=85;i++) printf("%c",205);
 	printf("%c",187);
 	printf("\n        %c %86c",4,4);
 	printf("\n        %c                                  WELCOME TO                                          %c",4,4);
 	printf("\n        %c                       RESTAURANT MANAGEMENT APPLICATION                              %c",4,4);
 	printf("\n        %c %86c",4,4);
 	printf("\n        %c                 %d. Dang nhap                        %d. Dang ky                       %c",4,1,2,4);
 	printf("\n        %c                 %d. Quay lai trang truoc  %45c",4,3,4);
 	printf("\n        %c %86c",4,4);
 	printf("\n        %c",200);
 	for (i=0;i<=85;i++) printf("%c",205);
 	printf("%c\n",188);

	int num;
	cout << "Nhap so de chon thao tac: "; cin >> num;
	if (num != 1 && num != 2 && num != 3){
		cout << "Khong hop le, nhan Enter de nhap lai" << endl;
		_getch();
		goto Nhaplai;
	}
	system("cls");
	return num;
}

void ThanksScreen(){
	system("cls");
	int i;
 	printf("\n%9c",201);
 	for (i=0;i<=85;i++) printf("%c",205);
 	printf("%c",187);
 	printf("\n        %c %86c",4,4);
 	printf("\n        %c                               Thanks for using                                       %c",4,4);
 	printf("\n        %c                       RESTAURANT MANAGEMENT APPLICATION                              %c",4,4);
 	printf("\n        %c %86c",4,4);
 	printf("\n        %c                                See you again!                                        %c",4,4);
 	printf("\n        %c",200);
 	for (i=0;i<=85;i++) printf("%c",205);
 	printf("%c\n",188);
	cout << " Press any key to continue..." << endl;
	_getch();
	system("cls");
}

int MainScreen(){
	Nhaplai:
	system("cls");
	int i;
 	printf("\n%9c",201);
 	for (i=0;i<=85;i++) printf("%c",205);
 	printf("%c",187);
 	printf("\n        %c %86c",4,4);
	printf("\n        %c                                  WELCOME TO                                          %c",4,4);
 	printf("\n        %c                       RESTAURANT MANAGEMENT APPLICATION                              %c",4,4);
	printf("\n        %c %86c",4,4);
 	printf("\n        %c                                   Ban la...                                          %c",4,4);
 	printf("\n        %c %86c",4,4);
 	printf("\n        %c                 %d. Quan ly                        %d. Nhan vien                       %c",4,1,2,4);
 	printf("\n        %c                 %d. Khach hang                     %d. Thoat ung dung%19c",4,3,0,4);
 	printf("\n        %c %86c",4,4);
 	printf("\n        %c",200);
 	for (i=0;i<=85;i++) printf("%c",205);
 	printf("%c\n",188);

	int num;
	cout << "Nhap so de chon thao tac: "; cin >> num;
	if (num != 1 && num != 2 && num != 3 && num != 0){
		cout << "Khong hop le, nhan Enter de nhap lai" << endl;
		_getch();
		goto Nhaplai;
	}
	system("cls");
	return num;
}

void ManagerSignInScreen(){
	Nhaplai:
	system("cls");
	int i;
 	printf("\n%9c",201);
 	for (i=0;i<=85;i++) printf("%c",205);
 	printf("%c",187);
 	printf("\n        %c %86c",4,4);
 	printf("\n        %c                         Dang nhap vao tai khoan quan ly                              %c",4,4);
 	printf("\n        %c",200);
 	for (i=0;i<=85;i++) printf("%c",205);
 	printf("%c\n",188);

	string Username, Password;
	cout << "Username: "; cin >> Username;
	cout << "Password: "; cin >> Password;

	if (Username != mng.getUsername()){
		cout << "Tai khoan khong ton tai, vui long nhan Enter de dang nhap lai!" << endl;
		_getch();
		goto Nhaplai;
	}
	else if (Username == mng.getUsername() && Password != mng.getPassword()){
		cout << "Sai mat khau, vui long nhan Enter de dang nhap lai!" << endl;
		_getch();
		goto Nhaplai;
	}
	else {
		cout << "Dang nhap thanh cong!" << endl;
		_getch();
	}
	system("cls");
}

void StaffSignInScreen(){
	Nhaplai:
	system("cls");
	int i;
 	printf("\n%9c",201);
 	for (i=0;i<=85;i++) printf("%c",205);
 	printf("%c",187);
 	printf("\n        %c %86c",4,4);
 	printf("\n        %c                         Dang nhap vao tai khoan nhan vien                            %c",4,4);
 	printf("\n        %c",200);
 	for (i=0;i<=85;i++) printf("%c",205);
 	printf("%c\n",188);

	string phoneNum;
	cout << "Nhap so dien thoai: "; cin >> phoneNum;
	Node<Staff>* nf = sl.FindString(phoneNum);
	if (nf == NULL){
		cout << "Tai khoan khong ton tai, vui long nhan Enter de dang nhap lai!" << endl;
		_getch();
		goto Nhaplai;
	}
	else {
		cout << "Dang nhap thanh cong!" << endl;
		uf = nf;
		_getch();
	}
	system("cls");
}

void CustomerSignUpScreen(){
	Nhaplai:
	system("cls");
	int i;
 	printf("\n%9c",201);
 	for (i=0;i<=85;i++) printf("%c",205);
 	printf("%c",187);
 	printf("\n        %c %86c",4,4);
 	printf("\n        %c                         Dang ky tai khoan khach hang                                 %c",4,4);
 	printf("\n        %c",200);
 	for (i=0;i<=85;i++) printf("%c",205);
 	printf("%c\n",188);

	string Name, phoneNum, Password, pw;
	cout << "Ho va ten: "; cin >> Name;
	cout << "So dien thoai: "; cin >> phoneNum;
	Node<Customer>* nc = cl.FindString(phoneNum);
	if (nc != NULL){
		cout << "So dien thoai nay da duoc dang ky, nhan Enter de dang nhap" << endl;
		_getch();
		system("cls");
	}
	else {
		cout << "Mat khau: "; cin >> Password;
		cout << "Xac nhan mat khau: "; cin >> pw;
		if (Password != pw){
			cout << "Mat khau khong trung khop, vui long nhan Enter de dang ky lai" << endl;
			_getch();
			system("cls");
			goto Nhaplai;
		}
		else {
			cout << "Dang ky thanh cong!" << endl;
			Customer c(Name, phoneNum, Password);
			cl.Insert(c);
			cout << "Nhan Enter de tiep tuc" << endl;
			_getch();
			system("cls");
			return;
		}
	}
}

void CustomerSignInScreen(){
	Nhaplai:
	system("cls");
	int i;
 	printf("\n%9c",201);
 	for (i=0;i<=85;i++) printf("%c",205);
 	printf("%c",187);
 	printf("\n        %c %86c",4,4);
 	printf("\n        %c                         Dang nhap vao tai khoan khach hang                           %c",4,4);
 	printf("\n        %c",200);
 	for (i=0;i<=85;i++) printf("%c",205);
 	printf("%c\n",188);

	string phoneNum, Password;
	cout << "So dien thoai: "; cin >> phoneNum;
	cout << "Password: "; cin >> Password;

	Node<Customer>* nc = cl.FindString(phoneNum);

	if (nc == NULL){
		cout << "Tai khoan khong ton tai, vui long nhan Enter de dang nhap lai!" << endl;
		_getch();
		goto Nhaplai;
	}
	else if (phoneNum == nc->data.getPhoneNumber() && Password != nc->data.getPassword()){
		cout << "Sai mat khau, vui long nhan Enter de dang nhap lai!" << endl;
		_getch();
		goto Nhaplai;
	}
	else {
		cout << "Dang nhap thanh cong!" << endl;
		uc = nc;
		_getch();
	}
	system("cls");
}


int main(){

	Setup();

    Intro();
	ManHinhChinh:
	int role = MainScreen();
	switch (role)
	{
	case 1:
		ManagerSignInScreen();
		ManHinhQuanLy:
		cout << " ==========================================" << endl;
		cout << " |  Chon cac thao tac duoi day:           |" << endl;
		cout << " |      1) Xem danh sach nhan vien        |" << endl;
		cout << " |      2) Xem danh sach khach hang       |" << endl;
		cout << " |      3) Xem Menu                       |" << endl;
		cout << " |      4) Xem danh sach don hang         |" << endl;
		cout << " |      5) Xem danh sach hoa don          |" << endl;
		cout << " |      6) Quay lai man hinh chinh        |" << endl;
		cout << " ==========================================" << endl;
		int ManageOption; 
		cout << "Nhap so de chon thao tac: "; cin >> ManageOption;
		if (ManageOption != 1 && ManageOption != 2 && ManageOption != 3 && ManageOption != 4 && ManageOption != 5 && ManageOption != 6){
			cout << "Khong hop le, nhan Enter de nhap lai" << endl;
			_getch();
			system("cls");
			goto ManHinhQuanLy;
		}
		system("cls");
		switch (ManageOption)
		{
		case 1:
			sl.Display();
			cout << "Nhan Enter de tiep tuc" << endl;
			_getch();
			system("cls");
			ThaoTacVoiNhanVien:
			cout << " ==========================================" << endl;
			cout << " |  Chon cac thao tac duoi day:           |" << endl;
			cout << " |      1) Them nhan vien                 |" << endl;
			cout << " |      2) Xoa nhan vien                  |" << endl;
			cout << " |      3) Quay lai trang truoc           |" << endl;
			cout << " ==========================================" << endl;
			int choice;
			cout << "Nhap so de chon thao tac: "; cin >> choice;
			if (choice != 1 && choice != 2 && choice != 3){
				cout << "Khong hop le, nhan Enter de nhap lai" << endl;
				_getch();
				system("cls");
				goto ThaoTacVoiNhanVien;
			}
			system("cls");
			if (choice == 1){
				cout << "Nhap thong tin nhan vien" << endl;
				cout << "Ten nhan vien: ";
				string name;
				cin >> name;

				cout << "Gioi tinh (1 la nam, 0 la nu): ";
				bool sex; cin >> sex;
				cout << "Nam sinh: ";
				int year; cin >> year;
				cout << "So dien thoai: ";
				string phoneNum; cin >> phoneNum;
				Staff s(name, sex, year, phoneNum);
				sl.Insert(s);
				cout << "Them nhan vien thanh cong!" << endl;
				cout << "Nhan Enter de quay lai trang truoc" << endl;_getch();
				system("cls");
				goto ThaoTacVoiNhanVien;
			}
			if (choice == 2){
				cout << "Nhap so dien thoai cua nhan vien muon xoa: ";
				string phoneNum; cin >> phoneNum;
				Node<Staff>* ns = sl.FindString(phoneNum);
				if (ns == NULL){
					cout << "Khong co nhan vien nay trong danh sach." << endl;
				}
				else {
					sl.Delete(ns->data);
					cout << "Xoa thanh cong!" << endl;
				}
				cout << "Nhan Enter de quay lai trang truoc" << endl;_getch();
				system("cls");
				goto ThaoTacVoiNhanVien;
			}
			if (choice == 3){
				goto ManHinhQuanLy;
			}
			break;
		case 2:
			cl.Display();
			cout << "Nhan Enter de tiep tuc" << endl;
			_getch();
			system("cls");
			goto ManHinhQuanLy;
			break;
		case 3:
			m.Display();
			cout << "Nhan Enter de tiep tuc" << endl;
			_getch();
			system("cls");
			ThaoTacVoiMenu:
			cout << " ==========================================" << endl;
			cout << " |  Chon cac thao tac duoi day:           |" << endl;
			cout << " |      1) Them mon an                    |" << endl;
			cout << " |      2) Xoa mon an                     |" << endl;
			cout << " |      3) Chinh sua gia mon an           |" << endl;
			cout << " |      4) Quay lai trang truoc           |" << endl;
			cout << " ==========================================" << endl;
			int fchoice;
			cout << "Nhap so de chon thao tac: "; cin >> fchoice;
			if (fchoice != 1 && fchoice != 2 && fchoice != 3 && fchoice != 4){
				cout << "Khong hop le, nhan Enter de nhap lai" << endl;
				_getch();
				system("cls");
				goto ThaoTacVoiMenu;
			}
			system("cls");
			if (fchoice == 1){
				ThongTinMonAn:
				cout << "Nhap thong tin mon an" << endl;
				cout << "Ma mon an: "; int ID; cin >> ID;
				Node<Food>* nf = m.Find(ID);
				if (nf != NULL){
					cout << "Ma mon an bi trung, nhan Enter de nhap so khac" << endl;
					system("cls");
					goto ThongTinMonAn;
				}
				cout << "Ten mon an: "; string Name; cin >> Name;
				cout << "Gia mon an: "; int Price; cin >> Price;
				Food f(ID, Name, Price);
				m.Insert(f);
				m.Sort();
				cout << "Them mon an thanh cong!" << endl;
				cout << "Nhan Enter de quay lai trang truoc" << endl;
				_getch();
				system("cls");
				goto ThaoTacVoiMenu;
			}
			if (fchoice == 2){
				cout << "Nhap ma cua mon an muon xoa: ";
				int ID; cin >> ID;
				Node<Food>* nf = m.Find(ID);
				if (nf == NULL){
					cout << "Khong co mon an nay trong menu." << endl;
				}
				else {
					m.Delete(nf->data);
					cout << "Xoa thanh cong!" << endl;
				}
				cout << "Nhan Enter de quay lai trang truoc" << endl;_getch();
				system("cls");
				goto ThaoTacVoiMenu;
			}
			if (fchoice == 3){
				mng.UpdateMenu(m);
				cout << "Nhan Enter de quay lai trang truoc" << endl;_getch();
				system("cls");
				goto ThaoTacVoiMenu;
			}
			if (fchoice == 4){
				goto ManHinhQuanLy;
			}
			break;
		case 4:
			ods.Display();
			cout << "Nhan Enter de tiep tuc" << endl;
			_getch();
			system("cls");
			goto ManHinhQuanLy;
			break;
		case 5:
			bl.Display();
			cout << "Nhan Enter de tiep tuc" << endl;
			_getch();
			system("cls");
			goto ManHinhQuanLy;
			break;
		case 6:
			goto ManHinhChinh;
		default:
			break;
		}
		break;
	case 2:
		StaffSignInScreen();
		ManHinhNhanVien:
		cout << " ==========================================" << endl;
		cout << " |  Chon cac thao tac duoi day:           |" << endl;
		cout << " |      1) Xem danh sach don hang         |" << endl;
		cout << " |      2) Quay lai man hinh chinh        |" << endl;
		cout << " ==========================================" << endl;
		int StaffOption; 
		cout << "Nhap so de chon thao tac: "; cin >> StaffOption;
		if (StaffOption != 1 && StaffOption != 2){
			cout << "Khong hop le, nhan Enter de nhap lai" << endl;
			_getch();
			system("cls");
			goto ManHinhNhanVien;
		}
		system("cls");
		switch (StaffOption){
			case 1:
				ThaoTacVoiOrders:
				ods.Display();
				cout << endl << endl;
				cout << " ==========================================" << endl;
				cout << " |  Chon cac thao tac duoi day:           |" << endl;
				cout << " |      1) Nhan don hang                  |" << endl;
				cout << " |      2) Quay lai trang truoc           |" << endl;
				cout << " ==========================================" << endl;
				int StaffChoice; 
				cout << "Nhap so de chon thao tac: "; cin >> StaffChoice;
				if (StaffChoice != 1 && StaffChoice != 2){
					cout << "Khong hop le, nhan Enter de nhap lai" << endl;
					_getch();
					system("cls");
					goto ThaoTacVoiOrders;
				}
				if (StaffChoice == 1){
					cout << "Chon ma don hang muon nhan: "; int ID; cin >> ID;
					uf->data.RecieveOrder(ods, ID);
					cout << endl << "Nhan Enter de tiep tuc" << endl;
					_getch();
					system("cls");
					goto ThaoTacVoiOrders;
				}
				if (StaffChoice == 2){
					system("cls");
					goto ManHinhNhanVien;
				}
				break;
			case 2:
				goto ManHinhChinh;
		}
		break;
	case 3:
		ManHinhLogin:
		switch (Login())
		{
		case 1:
			CustomerSignInScreen();
			ManHinhKhachHang:
			cout << " ==========================================" << endl;
			cout << " |  Chon cac thao tac duoi day:           |" << endl;
			cout << " |      1) Xem menu                       |" << endl;
			cout << " |      2) Xem danh sach don hang         |" << endl;
			cout << " |      3) Order                          |" << endl;
			cout << " |      4) Xem lich su giao dich          |" << endl;
			cout << " |      5) Quay lai trang truoc           |" << endl;
			cout << " ==========================================" << endl;
			int CustomerOption; 
			cout << "Nhap so de chon thao tac: "; cin >> CustomerOption;
			if (CustomerOption != 1 && CustomerOption != 2 && CustomerOption != 3 && CustomerOption != 4 && CustomerOption != 5){
				cout << "Khong hop le, nhan Enter de nhap lai" << endl;
				_getch();
				system("cls");
				goto ManHinhKhachHang;
			}
			system("cls");
			switch (CustomerOption){
				case 1:
					m.Display();
					cout << "Nhan Enter de tiep tuc" << endl;
					_getch();
					system("cls");
					goto ManHinhKhachHang;
				case 2:
					uc->data.ViewOrder(ods);
					cout << "Nhan Enter de tiep tuc" << endl;
					_getch();
					system("cls");
					goto ManHinhKhachHang;
				case 3:
					uc->data.Ordering(m, ods);
					cout << "Nhan Enter de tiep tuc" << endl;
					_getch();
					system("cls");
					goto ManHinhKhachHang;
				case 4:
					uc->data.ViewTransactionHistory(ods);
					cout << "Nhan Enter de tiep tuc" << endl;
					_getch();
					system("cls");
					goto ManHinhKhachHang;
				case 5:
					goto ManHinhLogin;
			}
			break;
		case 2:
			CustomerSignUpScreen();
			goto ManHinhLogin;
			break;
		case 3:
			goto ManHinhChinh;
			
		default:
			break;
		}
		break; 
	case 0:
		ThanksScreen();
		break;
	default:
		break;
	}
}
