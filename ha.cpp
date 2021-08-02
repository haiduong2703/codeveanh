#include <bits/stdc++.h>
#include <windows.h>
#include <graphics.h>
using namespace std;
void textcolor(int x)
{
	HANDLE mau;
	mau=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau,x);
}

void load(){
	cout<<"loading 0%"<<endl;
	Sleep(600);
	cout<<"loading 10%"<<endl;
	Sleep(600);
	cout<<"loading 20%"<<endl;
	Sleep(600);
	cout<<"loading 30%"<<endl;
	Sleep(600);
	cout<<"loading 40%"<<endl;
	Sleep(600);
	cout<<"loading 50%"<<endl;
	Sleep(600);
	cout<<"loading 60%"<<endl;
	Sleep(600);
	cout<<"loading 70%"<<endl;
	Sleep(600);
	cout<<"loading 80%"<<endl;
	Sleep(600);
	cout<<"loading 90%"<<endl;
	Sleep(600);
	cout<<"loading 100%"<<endl;
	Sleep(600);
	cout<<"Loading thanh cong"<<endl;
	Sleep(100);
//	cout<<"Ban vui long doi de chung toi in ra anh nguoi yeu ban"<<endl;
//	Sleep(800);
	
}
int main(){
//	cout<<"Hay nhap ten cua nguoi yeu ban: "<<endl;
	string lin;
//	getline(cin,lin);
//	cout<<"Nhap ngay thang nam sinh cua nguoi yeu ban"<<endl;
	getline(cin,lin);
	string line;
	load();
	ifstream f("anhcb.txt");
	while(!f.eof()){
		getline(f,line);
		cout<<line<<endl;
		Sleep(120);
	}
}
