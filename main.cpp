#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>
#include <stdlib.h>
#include <fstream>
#include <conio.h>


using namespace std;


//变量声明 
char order='n';//行动指令 
int start;
char line[]="====================================";
int life=0;//生命 
int money=10;//钱 
int food=0;//食物 
string weapon="无";//武器 
int attack=1;//攻击力 
int place=1;//位置 
int energy=10;//体力 
int stone=0;//石头 
int store=0;//商店序号 
int buy;//购买选项 
int deadbuy;//死亡救济指令 
int battle;//战斗指令
int fix; //传送塔修复指令 
int tp;//传送指令 
int smokemoney,smokepeople;//赌博人物与金钱 
int build;//修建指令 
int house=0;//房屋 
int pay=0;//收入 
int wanter=0;//乞丐模块 
int give=0;//施舍指令
int speed=1;//速度 
int invitation=0;//染血的邀请函


int tower1=0;//传送塔一 

//一号怪物——破铜烂铁机器人 
int m1=1;
int am1=1;
//二号怪物——辐射魔像 
int m2=1;
int am2=5;
//三号怪物——火箭狼 
int m3=1;
int am3=8;
//四号怪物——四头巨龙 
int m4=1;
int nm4;//随机数 

int round=1;













int main(){
	
	
	unsigned seed;  // Random generator seed
    // Use the time function to get a "seed” value for srand
    seed = time(0);
    srand(seed);
    
    
	
	//欢迎语
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
	
	cout<<"加载完成"<<endl;
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
		cout<<"1.开始新游戏"<<endl;
		cout<<"2.操作教程"<<endl;
		cout<<"3.读取存档"<<endl;
		cout<<"4.退出游戏"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"0.制作鸣谢"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
		cout<<line<<endl;
		cout<<line<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY |FOREGROUND_GREEN);
		cout<<"输入并回车：";
		cin>>start; 
		system("cls");
		if((start==1)|(start==3)){
			life=3;
			
			system("cls");
			cout<<"加载世界中..."<<endl;
			Sleep(3000);
			system("cls");
			Sleep(500);
			cout<<"建议切换至英文输入法进行游戏。"<<endl;
			Sleep(2000);
			system("cls");
			Sleep(500);
			if(start==3){
				cout<<"读取存档中..."<<endl;
				ifstream fin("data.txt");
				fin>>life>>money>>food>>weapon>>attack>>place>>energy>>stone>>house>>pay>>wanter>>speed>>invitation>>m1>>m2>>m3>>m4;
			}
		}
		else if(start==2){
			cout<<line<<endl;
			cout<<"游戏说明："<<endl;
			cout<<"你的目标是从位置1开始，"<<endl<<"在向右探索的途中击杀路上的怪物，"<<endl<<"提升自己的装备，在地图上建造各种建筑物。"<<endl<<"最终击杀位于地图尽头的污染之源..."<<endl;
			cout<<endl;
			cout<<endl; 
			
			cout<<"操作说明："<<endl;
			cout<<endl;
			cout<<"r:右行"<<endl;
			cout<<"l:左行"<<endl;
			cout<<"e:进入"<<endl;
			cout<<"h:用食"<<endl;
			cout<<"t:传送"<<endl;
			cout<<"注意：以上指令只能在'你的行动:'出现后输入才有效！！"<<endl;
			cout<<"其他指令游戏中均有提示。"<<endl;
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
	
	
	
	
	
	
	
	
	
	//开始游戏 
	
	
	
	
	
	
	
	//回合循环 
	while(life>0){
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_BLUE);
		//状态显示栏 
		cout<<line<<endl;
		cout<<line<<endl;
		cout<<"==============SAVIOR================"<<endl;
		cout<<line<<endl;
		cout<<line<<endl;
		cout<<"=============="<<"回合"<<round<<"================="<<endl;
		cout<<line<<endl;
		cout<<line<<endl;
		cout<<line<<endl;
		cout<<"======="<<"你的钱："<<money<<endl;
		cout<<"======="<<"你的食物："<<food<<endl;
		cout<<"======="<<"你的石头："<<stone<<endl;
		cout<<"======="<<"你的房子："<<house<<endl;
		cout<<"======="<<"你的收入："<<pay<<endl;
		cout<<line<<endl;
		cout<<"=====你的位置："<<place<<"  | 你的生命："<<life<<"====="<<endl;
		cout<<line<<endl;
		cout<<"=====你的体力："<<energy<<" | 你的战斗力："<<attack<<"===="<<endl;
		cout<<line<<endl;
		cout<<"===========你的武器："<<weapon<<"============"<<endl; 
		
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED |
		FOREGROUND_GREEN | FOREGROUND_BLUE);
		
		//地图事件↓ 
	
		while(energy==0){//体力耗尽抉择循环 
			cout<<"你已经没有体力了，是否花10元购买2份食物？输入1购买，0接受死亡。"<<endl;
			cin>>deadbuy;
			Sleep(1000);
			if(deadbuy==1){
				if(money>=10){
				
					cout<<"你获得了两份食物。"<<endl;
					energy+=8;
					money=money-10;
				}
				else{
					cout<<"你没有足够的钱！"<<endl;
					Sleep(2000);
					system("cls");
					cout<<"游戏结束，感谢游玩"<<endl;
					energy--;
					 
				}
			}
			else if(deadbuy==0){
				system("cls");
				Sleep(2000);
				cout<<"游戏结束，感谢游玩"<<endl;
				energy--; 
			}
			else{
				cout<<"输入有误"<<endl;
			}
		}
		
		
		
		if((place==13&&wanter==0)&&money>=10){//乞丐模块 
			cout<<"你遇到了一个乞丐，输入1来施舍20元钱"<<endl;
			cin>>give;
			Sleep(1000);
			if(give==1 and money>=20){
				cout<<"乞丐感激万分"<<endl;
				wanter=2;
				money=money-20;
				
			}
			else if(give==1 and money<20){
				cout<<"乞丐收下了你所有的钱，满意地离开了。"<<endl;
				money=0;
				wanter=3;
			}
		}
		
		
		
		if(place==26 and invitation<=1){
			cout<<"输入e以进入地下搏击俱乐部"<<endl; 
		}
		
		
		
		
		
		if(place==6 and house==0){
		
			cout<<"似乎可以用三个石头在这里建造一座房子"<<endl;
			cout<<"输入1来建造,0取消"<<endl;
			cin>>build;
			Sleep(1000);
			if(build==1){
				if(stone>=3){
					cout<<"你成功修建了一所房子，以后每回合可以获得1元钱。"<<endl;
					stone=stone-3;
					house++;
				} 
			}
			else{
				
			}
		}
		
		
		
		
		
		if(place==18 and wanter==3){//奖励坐骑：碎天兽 
			cout<<"你得到了坐骑：钢铁碎天兽。"<<endl;
			cout<<"你的左行速度加快了"<<endl;
			speed=2; 
			wanter=1;
		}
		
		
		
		
		if(place==7 and tower1==0){//传送塔一修复 
			cout<<"是否花5石头与12元修复此处的传送塔?"<<endl;
			cout<<"输入1以修复,0取消"<<endl;
			cin>>fix;
			if(fix==1 and stone>=5){
				if(money>=12){
					money-=12;
					stone-=5;
					tower1=1;
				}
				else{
					cout<<"你没有足够的钱。"<<endl;
				}
			}
			else if(fix==1 and stone<5){
				cout<<"你没有足够的石头。"<<endl;
			}
			else{
				
			} 
			
		}
		
		
		
		
		
		if(place==5 and m1==1){//一号怪物模块 
			cout<<"你遭遇了破铜烂铁机器人，攻击力为1！"<<endl;
			cout<<"输入1来攻击，0来逃离："<<endl;
			cin>>battle;
			Sleep(1000);
			if(battle==1){
				if(attack>=am1){
					cout<<"你击败了破铜烂铁机器人"<<endl;
					money=money+5;
					stone++;
					if(attack==am1){
						life--;
						cout<<"不过你也受了伤。"<<endl;
						
						
					}
					 
				}
				else{
					cout<<"你被破铜烂铁机器人击败了！！"<<endl;
					life--;
					place--;					
				}
			}
			else{
				place--;
				energy--;
				
			}
			
			
		}
		
		
		
		
		if(place==9 and m2==1){//二号怪物模块 
			cout<<"你遭遇了辐射魔像，攻击力为5！"<<endl;
			cout<<"输入1来攻击，0来逃离："<<endl;
			cin>>battle;
			Sleep(1000);
			if(battle==1){
				if(attack>=am2){
					cout<<"你击败了辐射魔像"<<endl;
					money=money+7;
					stone=stone+3;
					if(attack==am2){
						life--;
						cout<<"不过你也受了伤。"<<endl;
						
						
					}
					 
				}
				else{
					cout<<"你被辐射魔像击败了！！"<<endl;
					life--;
					place--;
					
				}
			}
			else{
				place--;
				energy--;
			}
			
			
		}
		
		
		if(m3==1){//三号怪物模块 
			if(place==14){
				cout<<"你进入了火箭狼的射程，小心！"<<endl;
				Sleep(700);
				if(attack>=am3){
					cout<<"你收到了射击，但没有受伤"<<endl;
					
				}
				else{
					cout<<"火箭狼开始射击了！你受到一点伤害！"<<endl;
					life--;
				}
			}
			else if(place==15){
				cout<<"你遭遇了火箭狼,攻击力为8！输入1攻击，0逃离。"<<endl;
				cin>>battle;
				Sleep(1000);
				if(battle==1){
					if(attack>am3){
						cout<<"你击败了火箭狼！"<<endl;
						energy--;
						m3--;
						money=money+4;
						food=food+2;
						wanter=1;
						
						
						
				
					}
					else if(attack==am3){
						cout<<"火箭狼已击败，你也负伤。"<<endl;
						life--;
						energy--;
						m3--;
						wanter=1;
						
					}
					else{
						cout<<"你被火箭狼击败了！"<<endl;
						place=13;
						energy--;
						life--;
						
					}
				}
				else{
					cout<<"已逃离至火箭狼射程之外。"<<endl;
					place=13;
					energy--;
					
				}//是否战斗 
				
			}//位置判断 
		} //火箭狼存活 
		
		
		if(m4==1 and place==20){
			cout<<"你遭遇了四头巨龙！"<<endl;
			cout<<"输入1以进入四头巨龙的游戏"<<endl;
			cin>>battle;
			if(battle==1){
				int gamenumber;
				gamenumber=rand()%30;//取1~30随机数！！！！！！！！！ 
				int a=1,number;
				system("cls");
				cout<<"四头巨龙想了一到三十一个数字，你有四次机会去猜测它"<<endl;
				system("pause");
				while(a<=4 and a!=0){
					cout<<"输入你的数字：";
					cin>>number;
					if(number==gamenumber){
						cout<<"成功匹配。"<<endl;
						cout<<"四头巨龙消失了"<<endl;
						m4--;
						money+=3;
						wanter=1;
						stone++;
						food=3;
						a=0; 
					}
					else if(a>4){
						life--;
						cout<<"挑战失败！！"<<endl;
						energy--;
						place=19;
					} 
					else{
						cout<<"匹配失败，已尝试"<<a<<"/4次"<<endl;
						if(number<gamenumber){
							cout<<"过小"<<endl;
						}
						else if(number>gamenumber){
							cout<<"过大"<<endl;
						}
						a++; 
					}
				}
					 
			}
			else{
				cout<<"已逃离"<<endl;
				place=19;
				energy--;
			}
			
		}
		
		
		
		
		if(place==1){
			cout<<"(输入r以向右行走，l向左行走)"<<endl; 
		}
		
		
		
		
		//商店判定模块 
		if(place==3){
			store=1;
			cout<<"这里有一个商店，输入e以进入."<<endl;
		}
		else if(place==8){
			store=2;
			cout<<"这里有一个商店，输入e以进入."<<endl;
		}
		else if(place==22){
			store=3;
			cout<<"这里有一个商店，输入e以进入."<<endl;
		}
		else{
			store=0;
		}
		
		
		
		//地图事件结束↑ 
		
		
		
		//行动输入 
		char order='n'; 
		cout<<"你的行动："<<endl;
		cin>>order;
		
		
		
		if(order=='h'){
			if(food>=1){
				food--;
				energy=energy+4;
				cout<<"你感到精力充沛！"<<endl;
				
				
			}
			if(food==0){
				cout<<"你没有食物了！"<<endl;
			}
		}
		
		
		
		
		
		
		
		
		
		
		//左行模块 
		else if(order=='l'){
			if(place==1){
				cout<<"这是地图的最左侧，向右深入吧！"<<endl;
				
				
			}
			else{
				place-=speed;
				energy--;
				cout<<"正在左行..."<<endl;
				
				
				
				
			}
			
		}
		//右行模块 
		else if(order=='r'){
			place++;
			energy--;
			cout<<"正在右行..."<<endl;
			
		}
		
		
		//商店商品模块
		
		
				
		else if(order=='e' and store==1){//商店一号，第三格 
			cout<<"商品："<<endl;
			cout<<"1.食物x3：5元"<<endl;
			cout<<"2.木棒（加二攻击力）：5元"<<endl;
			cout<<"3.石头x2：3元"<<endl;
			cout<<line<<endl;
			cout<<"输入购买序号或输入'0'以退出商店："<<endl;
			cin>>buy;
			if(buy==1){
				if(money>=5){
					food=food+3;
				money=money-5;
				}
				else{
					cout<<"你的钱不够"<<endl; 
				}
								
			}
			if(buy==2){
				if(money>=5){
					weapon="木棒";
					attack=attack+2;
					money=money-5;
				}
				else{
					cout<<"你的钱不够"<<endl; 
				}
			}
			if(buy==3){
				if(money>=3){
					stone=stone+2;
					money=money-3;
				}
				else{
					cout<<"你的钱不够！"<<endl;
					
				}
			}
			if(buy==0){
				cout<<"正在离开商店..."<<endl;
			}
		}
		 
		
		
		else if(order=='e' and store==2){//商店二号，第九格 
			cout<<"商品："<<endl;
			cout<<"1.食物x3：5元"<<endl;
			cout<<"2.石剑（共8攻击力）：7元"<<endl;
			cout<<"3.石头x2：3元"<<endl;
			cout<<line<<endl;
			cout<<"输入购买序号或输入'0'以退出商店："<<endl;
			cin>>buy;
			if(buy==1){
				if(money>=5){
					food=food+3;
				money=money-5;
				}
				else{
					cout<<"你的钱不够"<<endl; 
				}
								
			}
			if(buy==2){
				if(money>=5){
					weapon="石剑";
					attack=8;
					money=money-7;
				}
				else{
					cout<<"你的钱不够"<<endl; 
				}
			}
			
			
			if(buy==3){
				if(money>=3){
					stone=stone+2;
					money=money-3;
				}
				else{
					cout<<"你的钱不够！"<<endl;
					
				}
			}
			
			
			
			if(buy==0){
				cout<<"已离开商店"<<endl;
			}			
		}
		
		
		else if(order=='e' and store==3){//商店三号，第二十格 
			cout<<"商品："<<endl;
			cout<<"1.食物x3：5元"<<endl;
			cout<<"2.金斧（共14攻击力）：32元"<<endl;
			cout<<"3.染血的邀请函：21元"<<endl;
			cout<<line<<endl;
			cout<<"输入购买序号或输入'0'以退出商店："<<endl;
			cin>>buy;
			if(buy==1){
				if(money>=5){
					food=food+3;
				money=money-5;
				}
				else{
					cout<<"你的钱不够"<<endl; 
				}
								
			}
			if(buy==2){
				if(money>=32){
					weapon="金斧";
					attack=14;
					money=money-32;
				}
				else{
					cout<<"你的钱不够"<<endl; 
				}
			}
			
			
			if(buy==3){
				if(money>=21){
					invitation=1;
					money=money-21;
				}
				else{
					cout<<"你的钱不够！"<<endl;
					
				}
			}
			
			
			
			if(buy==0){
				cout<<"已离开商店"<<endl;
			}			
		}
		
		
		else if(order=='e' and place==26){//地下搏击俱乐部 
			if(invitation==0){
				cout<<"你被拒之门外..."<<endl;
			}
			else if(invitation==1){
				system("cls");
				Sleep(500);
				string c1[]={"钢齿","死神4000型","米米尔隆的机甲","撕心狼将军"};
				string c2[]={"虫后扎加拉","骷髅王李奥瑞克","兄弟会会长范克里夫","女妖之王希尔瓦娜斯","大守护者麦迪文"} ;
				int len1 = sizeof(c1)/sizeof(c1[0]);
  				int len2 = sizeof(c2)/sizeof(c2[0]);
				while(money>=0 and money<=100){
					cout<<"你的钱："<<money<<endl;
					string s1 = c1[rand()%len1];
  					string s2 = c2[rand()%len2];
  					cout<<s1+"对阵"+s2<<endl;
  					int smokeright=rand()%1;
					cout<<"你要下注给谁？"<<endl<<"输入1或2来下注，输入0退出"<<endl;
					cin>>smokepeople;
					if(smokepeople==1){
						cout<<"你要在"+s1+"身上下注多少钱：";
						cin>>smokemoney;
						if(smokemoney>=money){
							if(smokeright+1==smokepeople){
								cout<<s1+"胜利了！"<<endl;
								money+=smokemoney;
								
							}
							else{
								cout<<s1<<"失败了！"<<endl;
								money-=smokemoney;
							}
							
						}
						else{
							cout<<"你的钱不够"<<endl;
						}
					}
					else if(smokepeople==2){
						cout<<"你要在"+s2+"身上下注多少钱：";
						cin>>smokemoney;
						if(smokemoney>=money){
							if(smokeright+1==smokepeople){
								cout<<s2+"胜利了！"<<endl;
								money+=smokemoney;
								
							}
							else{
								cout<<s2<<"失败了！"<<endl;
								money-=smokemoney;
							}
							
						}
						else{
							cout<<"你的钱不够"<<endl;
						}
					}
					else if(smokepeople==0){
						break;
						
					}
					else{
						cout<<"输入错误"<<endl;
					}
					Sleep(3000);
					system("cls");
					
				}
				if(money==0){
					cout<<"你已经没有钱了，被赶了出来。"<<endl;
				}
				if(money>100){
					cout<<"老板看你钱太多了，将你赶了出来。"<<endl;
				}
				
				
			}
		}
		
		
		
		
		else if(order=='t'){
			if(tower1==1){
				cout<<"输入1以传送至位置7"<<endl;
				
			}
			
			
			
			
			cin>>tp;
			Sleep(500);
			system("cls");
			if(tp==1 and tower1==1){
				place==7;
				cout<<"传送成功!"<<endl;
			}
			else if(tp==1 and tower1!=1){
				cout<<"未解锁传送塔一"<<endl;
			}
		} 
		
		
		
		
		
		
		
		
		else if(order=='s'){//存档模块 
			ofstream fout("data.txt");
			fout<<life<<" "<<money<<" "<<food<<" "<<weapon<<" "<<attack<<" "<<place<<" "<<energy<<" "<<stone<<" "<<house<<" "<<pay<<" "<<wanter<<" "<<speed<<" "<<invitation<<" "<<m1<<" "<<m2<<" "<<m3<<" "<<m4;
			fout.close();
			cout<<"进度已保存..."<<endl; 
		}
		
		
		
		
		else{
			cout<<"指令错误，请重新输入。"<<endl;
		} //行动错误尾 
		
		
		
		money=money+1*house; 
		
		
		
		
		
		
		Sleep(2000);
		
		system("cls");//清屏 
		
		round=round+1;
		
	}//回合循环尾 
			
	return 0;	
	
}//主函数尾 
