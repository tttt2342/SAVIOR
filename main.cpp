#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include <stdlib.h>
#include <fstream>
#include <conio.h>


using namespace std;


//�������� 
char order='n';//�ж�ָ�� 
int start;
char line[]="====================================";
int life=0;//���� 
int money=10;//Ǯ 
int food=0;//ʳ�� 
string weapon="��";//���� 
int attack=1;//������ 
int place=1;//λ�� 
int energy=10;//���� 
int stone=0;//ʯͷ 
int store=0;//�̵���� 
int buy;//����ѡ�� 
int deadbuy;//�����ȼ�ָ�� 
int battle;//ս��ָ��
int fix; //�������޸�ָ�� 
int tp;//����ָ�� 
int smokemoney,smokepeople;//�Ĳ��������Ǯ 
int build;//�޽�ָ�� 
int house=0;//���� 
int pay=0;//���� 
int wanter=0;//��ؤģ�� 
int give=0;//ʩ��ָ��
int speed=1;//�ٶ� 
int invitation=0;//ȾѪ�����뺯


int tower1=0;//������һ 

//һ�Ź������ͭ���������� 
int m1=1;
int am1=1;
//���Ź��������ħ�� 
int m2=1;
int am2=5;
//���Ź��������� 
int m3=1;
int am3=8;
//�ĺŹ������ͷ���� 
int m4=1;
int nm4;//����� 

int round=1;













int main(){
	
	
	unsigned seed;  // Random generator seed
    // Use the time function to get a "seed�� value for srand
    seed = time(0);
    srand(seed);
    
    
	
	//��ӭ��
	Sleep(3000);
	
	
	
	for(int i=1;i<=3;i++){
		cout<<"loading";
		cout<<".";
		Sleep(500);
		cout<<".";
		Sleep(500);
		cout<<".";
		Sleep(500);
		cout<<".";
		Sleep(500);
		cout<<".";
		Sleep(500);
		cout<<".";
		Sleep(500);
		system("cls");
	}
	
	cout<<"�������"<<endl;
	system("pause");
	Sleep(500);
	system("cls");
	Sleep(3000);
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN|FOREGROUND_BLUE);
	cout<<"            @@@"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	cout<<"         @ @@@";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
	cout<<"@@ @"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY |FOREGROUND_GREEN );
	cout<<"       @@  ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |FOREGROUND_GREEN );
	cout<<"@   @ @ @@"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY |  FOREGROUND_BLUE);
	cout<<"    @@     @   @ @   @@"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE);
	cout<<" @@    @@@ @   ";SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN );
	cout<<"@ @      @@"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY |  FOREGROUND_BLUE);
	cout<<"    @@   @ @   @ @   @@"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN );
	cout<<"       @@@ @   @ @ @@"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED );
	cout<<"         @ @@@@@ @"<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
	cout<<"            @@@"<<endl;
	cout<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY);
	cout<<"MADE BY Game Of Dangers"<<endl;
	Sleep(4000);
	system("pause");
	system("cls");
	Sleep(1000);
	
	while(life==0){
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY| FOREGROUND_BLUE);
		cout<<line<<endl;
		cout<<line<<endl;
		cout<<line<<endl;
		cout<<"==============SAVIOR================"<<endl;
		cout<<line<<endl;
		cout<<line<<endl;
		cout<<line<<endl;
		Sleep(2000);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_GREEN);
		cout<<endl;
		cout<<"1.��ʼ����Ϸ"<<endl;
		cout<<"2.�����̳�"<<endl;
		cout<<"3.��ȡ�浵"<<endl;
		cout<<"4.�˳���Ϸ"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"0.������л"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
		cout<<line<<endl;
		cout<<line<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY |FOREGROUND_GREEN);
		cout<<"���벢�س���";
		cin>>start; 
		system("cls");
		if((start==1)|(start==3)){
			life=3;
			
			system("cls");
			cout<<"����������..."<<endl;
			Sleep(3000);
			system("cls");
			Sleep(500);
			cout<<"�����л���Ӣ�����뷨������Ϸ��"<<endl;
			Sleep(2000);
			system("cls");
			Sleep(500);
			if(start==3){
				cout<<"��ȡ�浵��..."<<endl;
				ifstream fin("data.txt");
				fin>>life>>money>>food>>weapon>>attack>>place>>energy>>stone>>house>>pay>>wanter>>speed>>invitation>>m1>>m2>>m3>>m4;
			}
		}
		else if(start==2){
			cout<<line<<endl;
			cout<<"��Ϸ˵����"<<endl;
			cout<<"���Ŀ���Ǵ�λ��1��ʼ��"<<endl<<"������̽����;�л�ɱ·�ϵĹ��"<<endl<<"�����Լ���װ�����ڵ�ͼ�Ͻ�����ֽ����"<<endl<<"���ջ�ɱλ�ڵ�ͼ��ͷ����Ⱦ֮Դ..."<<endl;
			cout<<endl;
			cout<<endl; 
			
			cout<<"����˵����"<<endl;
			cout<<endl;
			cout<<"r:����"<<endl;
			cout<<"l:����"<<endl;
			cout<<"e:����"<<endl;
			cout<<"h:��ʳ"<<endl;
			cout<<"t:����"<<endl;
			cout<<"ע�⣺����ָ��ֻ����'����ж�:'���ֺ��������Ч����"<<endl;
			cout<<"����ָ����Ϸ�о�����ʾ��"<<endl;
			cout<<line<<endl;
			system("pause");
		}
		
		else if(start==4){
			life=-1;
		}
		else if(start==0){
			cout<<"Game Of Dangers:"<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			cout<<""<<endl;
			
			system("pause");
		}
	}
	
	
	
	
	
	
	
	
	
	//��ʼ��Ϸ 
	
	
	
	
	
	
	
	//�غ�ѭ�� 
	while(life>0){
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
		//״̬��ʾ�� 
		cout<<line<<endl;
		cout<<line<<endl;
		cout<<"==============SAVIOR================"<<endl;
		cout<<line<<endl;
		cout<<line<<endl;
		cout<<"=============="<<"�غ�"<<round<<"================="<<endl;
		cout<<line<<endl;
		cout<<line<<endl;
		cout<<line<<endl;
		cout<<"======="<<"���Ǯ��"<<money<<endl;
		cout<<"======="<<"���ʳ�"<<food<<endl;
		cout<<"======="<<"���ʯͷ��"<<stone<<endl;
		cout<<"======="<<"��ķ��ӣ�"<<house<<endl;
		cout<<"======="<<"������룺"<<pay<<endl;
		cout<<line<<endl;
		cout<<"=====���λ�ã�"<<place<<"  | ���������"<<life<<"====="<<endl;
		cout<<line<<endl;
		cout<<"=====���������"<<energy<<" | ���ս������"<<attack<<"===="<<endl;
		cout<<line<<endl;
		cout<<"===========���������"<<weapon<<"============"<<endl; 
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |
		FOREGROUND_GREEN | FOREGROUND_BLUE);
		
		//��ͼ�¼��� 
	
		while(energy==0){//�����ľ�����ѭ�� 
			cout<<"���Ѿ�û�������ˣ��Ƿ�10Ԫ����2��ʳ�����1����0����������"<<endl;
			cin>>deadbuy;
			Sleep(1000);
			if(deadbuy==1){
				if(money>=10){
				
					cout<<"����������ʳ�"<<endl;
					energy+=8;
					money=money-10;
				}
				else{
					cout<<"��û���㹻��Ǯ��"<<endl;
					Sleep(2000);
					system("cls");
					cout<<"��Ϸ��������л����"<<endl;
					energy--;
					 
				}
			}
			else if(deadbuy==0){
				system("cls");
				Sleep(2000);
				cout<<"��Ϸ��������л����"<<endl;
				energy--; 
			}
			else{
				cout<<"��������"<<endl;
			}
		}
		
		
		
		if((place==13&&wanter==0)&&money>=10){//��ؤģ�� 
			cout<<"��������һ����ؤ������1��ʩ��20ԪǮ"<<endl;
			cin>>give;
			Sleep(1000);
			if(give==1 and money>=20){
				cout<<"��ؤ�м����"<<endl;
				wanter=2;
				money=money-20;
				
			}
			else if(give==1 and money<20){
				cout<<"��ؤ�����������е�Ǯ��������뿪�ˡ�"<<endl;
				money=0;
				wanter=3;
			}
		}
		
		
		
		if(place==26 and invitation<=1){
			cout<<"����e�Խ�����²������ֲ�"<<endl; 
		}
		
		
		
		
		
		if(place==6 and house==0){
		
			cout<<"�ƺ�����������ʯͷ�����ｨ��һ������"<<endl;
			cout<<"����1������,0ȡ��"<<endl;
			cin>>build;
			Sleep(1000);
			if(build==1){
				if(stone>=3){
					cout<<"��ɹ��޽���һ�����ӣ��Ժ�ÿ�غϿ��Ի��1ԪǮ��"<<endl;
					stone=stone-3;
					house++;
				} 
			}
			else{
				
			}
		}
		
		
		
		
		
		if(place==18 and wanter==3){//������������� 
			cout<<"��õ���������������ޡ�"<<endl;
			cout<<"��������ٶȼӿ���"<<endl;
			speed=2; 
			wanter=1;
		}
		
		
		
		
		if(place==7 and tower1==0){//������һ�޸� 
			cout<<"�Ƿ�5ʯͷ��12Ԫ�޸��˴��Ĵ�����?"<<endl;
			cout<<"����1���޸�,0ȡ��"<<endl;
			cin>>fix;
			if(fix==1 and stone>=5){
				if(money>=12){
					money-=12;
					stone-=5;
					tower1=1;
				}
				else{
					cout<<"��û���㹻��Ǯ��"<<endl;
				}
			}
			else if(fix==1 and stone<5){
				cout<<"��û���㹻��ʯͷ��"<<endl;
			}
			else{
				
			} 
			
		}
		
		
		
		
		
		if(place==5 and m1==1){//һ�Ź���ģ�� 
			cout<<"����������ͭ���������ˣ�������Ϊ1��"<<endl;
			cout<<"����1��������0�����룺"<<endl;
			cin>>battle;
			Sleep(1000);
			if(battle==1){
				if(attack>=am1){
					cout<<"���������ͭ����������"<<endl;
					money=money+5;
					stone++;
					if(attack==am1){
						life--;
						cout<<"������Ҳ�����ˡ�"<<endl;
						
						
					}
					 
				}
				else{
					cout<<"�㱻��ͭ���������˻����ˣ���"<<endl;
					life--;
					place--;					
				}
			}
			else{
				place--;
				energy--;
				
			}
			
			
		}
		
		
		
		
		if(place==9 and m2==1){//���Ź���ģ�� 
			cout<<"�������˷���ħ�񣬹�����Ϊ5��"<<endl;
			cout<<"����1��������0�����룺"<<endl;
			cin>>battle;
			Sleep(1000);
			if(battle==1){
				if(attack>=am2){
					cout<<"������˷���ħ��"<<endl;
					money=money+7;
					stone=stone+3;
					if(attack==am2){
						life--;
						cout<<"������Ҳ�����ˡ�"<<endl;
						
						
					}
					 
				}
				else{
					cout<<"�㱻����ħ������ˣ���"<<endl;
					life--;
					place--;
					
				}
			}
			else{
				place--;
				energy--;
			}
			
			
		}
		
		
		if(m3==1){//���Ź���ģ�� 
			if(place==14){
				cout<<"������˻���ǵ���̣�С�ģ�"<<endl;
				Sleep(700);
				if(attack>=am3){
					cout<<"���յ����������û������"<<endl;
					
				}
				else{
					cout<<"����ǿ�ʼ����ˣ����ܵ�һ���˺���"<<endl;
					life--;
				}
			}
			else if(place==15){
				cout<<"�������˻����,������Ϊ8������1������0���롣"<<endl;
				cin>>battle;
				Sleep(1000);
				if(battle==1){
					if(attack>am3){
						cout<<"������˻���ǣ�"<<endl;
						energy--;
						m3--;
						money=money+4;
						food=food+2;
						wanter=1;
						
						
						
				
					}
					else if(attack==am3){
						cout<<"������ѻ��ܣ���Ҳ���ˡ�"<<endl;
						life--;
						energy--;
						m3--;
						wanter=1;
						
					}
					else{
						cout<<"�㱻����ǻ����ˣ�"<<endl;
						place=13;
						energy--;
						life--;
						
					}
				}
				else{
					cout<<"����������������֮�⡣"<<endl;
					place=13;
					energy--;
					
				}//�Ƿ�ս�� 
				
			}//λ���ж� 
		} //����Ǵ�� 
		
		
		if(m4==1 and place==20){
			cout<<"����������ͷ������"<<endl;
			cout<<"����1�Խ�����ͷ��������Ϸ"<<endl;
			cin>>battle;
			if(battle==1){
				int gamenumber;
				gamenumber=rand()%30;//ȡ1~30����������������������� 
				int a=1,number;
				system("cls");
				cout<<"��ͷ��������һ����ʮһ�����֣������Ĵλ���ȥ�²���"<<endl;
				system("pause");
				while(a<=4 and a!=0){
					cout<<"����������֣�";
					cin>>number;
					if(number==gamenumber){
						cout<<"�ɹ�ƥ�䡣"<<endl;
						cout<<"��ͷ������ʧ��"<<endl;
						m4--;
						money+=3;
						wanter=1;
						stone++;
						food=3;
						a=0; 
					}
					else if(a>4){
						life--;
						cout<<"��սʧ�ܣ���"<<endl;
						energy--;
						place=19;
					} 
					else{
						cout<<"ƥ��ʧ�ܣ��ѳ���"<<a<<"/4��"<<endl;
						if(number<gamenumber){
							cout<<"��С"<<endl;
						}
						else if(number>gamenumber){
							cout<<"����"<<endl;
						}
						a++; 
					}
				}
					 
			}
			else{
				cout<<"������"<<endl;
				place=19;
				energy--;
			}
			
		}
		
		
		
		
		if(place==1){
			cout<<"(����r���������ߣ�l��������)"<<endl; 
		}
		
		
		
		
		//�̵��ж�ģ�� 
		if(place==3){
			store=1;
			cout<<"������һ���̵꣬����e�Խ���."<<endl;
		}
		else if(place==8){
			store=2;
			cout<<"������һ���̵꣬����e�Խ���."<<endl;
		}
		else if(place==22){
			store=3;
			cout<<"������һ���̵꣬����e�Խ���."<<endl;
		}
		else{
			store=0;
		}
		
		
		
		//��ͼ�¼������� 
		
		
		
		//�ж����� 
		char order='n'; 
		cout<<"����ж���"<<endl;
		cin>>order;
		
		
		
		if(order=='h'){
			if(food>=1){
				food--;
				energy=energy+4;
				cout<<"��е��������棡"<<endl;
				
				
			}
			if(food==0){
				cout<<"��û��ʳ���ˣ�"<<endl;
			}
		}
		
		
		
		
		
		
		
		
		
		
		//����ģ�� 
		else if(order=='l'){
			if(place==1){
				cout<<"���ǵ�ͼ������࣬��������ɣ�"<<endl;
				
				
			}
			else{
				place-=speed;
				energy--;
				cout<<"��������..."<<endl;
				
				
				
				
			}
			
		}
		//����ģ�� 
		else if(order=='r'){
			place++;
			energy--;
			cout<<"��������..."<<endl;
			
		}
		
		
		//�̵���Ʒģ��
		
		
				
		else if(order=='e' and store==1){//�̵�һ�ţ������� 
			cout<<"��Ʒ��"<<endl;
			cout<<"1.ʳ��x3��5Ԫ"<<endl;
			cout<<"2.ľ�����Ӷ�����������5Ԫ"<<endl;
			cout<<"3.ʯͷx2��3Ԫ"<<endl;
			cout<<line<<endl;
			cout<<"���빺����Ż�����'0'���˳��̵꣺"<<endl;
			cin>>buy;
			if(buy==1){
				if(money>=5){
					food=food+3;
				money=money-5;
				}
				else{
					cout<<"���Ǯ����"<<endl; 
				}
								
			}
			if(buy==2){
				if(money>=5){
					weapon="ľ��";
					attack=attack+2;
					money=money-5;
				}
				else{
					cout<<"���Ǯ����"<<endl; 
				}
			}
			if(buy==3){
				if(money>=3){
					stone=stone+2;
					money=money-3;
				}
				else{
					cout<<"���Ǯ������"<<endl;
					
				}
			}
			if(buy==0){
				cout<<"�����뿪�̵�..."<<endl;
			}
		}
		 
		
		
		else if(order=='e' and store==2){//�̵���ţ��ھŸ� 
			cout<<"��Ʒ��"<<endl;
			cout<<"1.ʳ��x3��5Ԫ"<<endl;
			cout<<"2.ʯ������8����������7Ԫ"<<endl;
			cout<<"3.ʯͷx2��3Ԫ"<<endl;
			cout<<line<<endl;
			cout<<"���빺����Ż�����'0'���˳��̵꣺"<<endl;
			cin>>buy;
			if(buy==1){
				if(money>=5){
					food=food+3;
				money=money-5;
				}
				else{
					cout<<"���Ǯ����"<<endl; 
				}
								
			}
			if(buy==2){
				if(money>=5){
					weapon="ʯ��";
					attack=8;
					money=money-7;
				}
				else{
					cout<<"���Ǯ����"<<endl; 
				}
			}
			
			
			if(buy==3){
				if(money>=3){
					stone=stone+2;
					money=money-3;
				}
				else{
					cout<<"���Ǯ������"<<endl;
					
				}
			}
			
			
			
			if(buy==0){
				cout<<"���뿪�̵�"<<endl;
			}			
		}
		
		
		else if(order=='e' and store==3){//�̵����ţ��ڶ�ʮ�� 
			cout<<"��Ʒ��"<<endl;
			cout<<"1.ʳ��x3��5Ԫ"<<endl;
			cout<<"2.�𸫣���14����������32Ԫ"<<endl;
			cout<<"3.ȾѪ�����뺯��21Ԫ"<<endl;
			cout<<line<<endl;
			cout<<"���빺����Ż�����'0'���˳��̵꣺"<<endl;
			cin>>buy;
			if(buy==1){
				if(money>=5){
					food=food+3;
				money=money-5;
				}
				else{
					cout<<"���Ǯ����"<<endl; 
				}
								
			}
			if(buy==2){
				if(money>=32){
					weapon="��";
					attack=14;
					money=money-32;
				}
				else{
					cout<<"���Ǯ����"<<endl; 
				}
			}
			
			
			if(buy==3){
				if(money>=21){
					invitation=1;
					money=money-21;
				}
				else{
					cout<<"���Ǯ������"<<endl;
					
				}
			}
			
			
			
			if(buy==0){
				cout<<"���뿪�̵�"<<endl;
			}			
		}
		
		
		else if(order=='e' and place==26){//���²������ֲ� 
			if(invitation==0){
				cout<<"�㱻��֮����..."<<endl;
			}
			else if(invitation==1){
				system("cls");
				Sleep(500);
				string c1[]={"�ֳ�","����4000��","���׶�¡�Ļ���","˺���ǽ���"};
				string c2[]={"���������","������������","�ֵܻ�᳤�������","Ů��֮��ϣ������˹","���ػ��������"} ;
				int len1 = sizeof(c1)/sizeof(c1[0]);
  				int len2 = sizeof(c2)/sizeof(c2[0]);
				while(money>=0 and money<=100){
					cout<<"���Ǯ��"<<money<<endl;
					string s1 = c1[rand()%len1];
  					string s2 = c2[rand()%len2];
  					cout<<s1+"����"+s2<<endl;
  					int smokeright=rand()%1;
					cout<<"��Ҫ��ע��˭��"<<endl<<"����1��2����ע������0�˳�"<<endl;
					cin>>smokepeople;
					if(smokepeople==1){
						cout<<"��Ҫ��"+s1+"������ע����Ǯ��";
						cin>>smokemoney;
						if(smokemoney>=money){
							if(smokeright+1==smokepeople){
								cout<<s1+"ʤ���ˣ�"<<endl;
								money+=smokemoney;
								
							}
							else{
								cout<<s1<<"ʧ���ˣ�"<<endl;
								money-=smokemoney;
							}
							
						}
						else{
							cout<<"���Ǯ����"<<endl;
						}
					}
					else if(smokepeople==2){
						cout<<"��Ҫ��"+s2+"������ע����Ǯ��";
						cin>>smokemoney;
						if(smokemoney>=money){
							if(smokeright+1==smokepeople){
								cout<<s2+"ʤ���ˣ�"<<endl;
								money+=smokemoney;
								
							}
							else{
								cout<<s2<<"ʧ���ˣ�"<<endl;
								money-=smokemoney;
							}
							
						}
						else{
							cout<<"���Ǯ����"<<endl;
						}
					}
					else if(smokepeople==0){
						break;
						
					}
					else{
						cout<<"�������"<<endl;
					}
					Sleep(3000);
					system("cls");
					
				}
				if(money==0){
					cout<<"���Ѿ�û��Ǯ�ˣ������˳�����"<<endl;
				}
				if(money>100){
					cout<<"�ϰ忴��Ǯ̫���ˣ�������˳�����"<<endl;
				}
				
				
			}
		}
		
		
		
		
		else if(order=='t'){
			if(tower1==1){
				cout<<"����1�Դ�����λ��7"<<endl;
				
			}
			
			
			
			
			cin>>tp;
			Sleep(500);
			system("cls");
			if(tp==1 and tower1==1){
				place==7;
				cout<<"���ͳɹ�!"<<endl;
			}
			else if(tp==1 and tower1!=1){
				cout<<"δ����������һ"<<endl;
			}
		} 
		
		
		
		
		
		
		
		
		else if(order=='s'){//�浵ģ�� 
			ofstream fout("data.txt");
			fout<<life<<" "<<money<<" "<<food<<" "<<weapon<<" "<<attack<<" "<<place<<" "<<energy<<" "<<stone<<" "<<house<<" "<<pay<<" "<<wanter<<" "<<speed<<" "<<invitation<<" "<<m1<<" "<<m2<<" "<<m3<<" "<<m4;
			fout.close();
			cout<<"�����ѱ���..."<<endl; 
		}
		
		
		
		
		else{
			cout<<"ָ��������������롣"<<endl;
		} //�ж�����β 
		
		
		
		money=money+1*house; 
		
		
		
		
		
		
		Sleep(2000);
		
		system("cls");//���� 
		
		round=round+1;
		
	}//�غ�ѭ��β 
			
	return 0;	
	
}//������β 
