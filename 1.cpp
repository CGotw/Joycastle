#include <bits/stdc++.h>
using namespace std;


//定义扑克牌数据结构 
struct card{
	int num;
};

//初始化扑克牌 ,用1-54不同的编号代表不同的扑克牌 
void initCard(card* C){
	for(int i=0;i<54;i++){
		C[i].num=i+1;
	}
} 

int get_random(int front,int tail){
	return rand()%(tail-front+1)+front;
}
void shuffle(card *C){
	
	initCard(C);
	srand(time(NULL));
	for(int i=0;i<54;i++){
		int random=get_random(0,53);//每个位置都将或许一个随机的数，因此洗牌是均匀分布的 
		int temp=C[random].num;
		C[random].num=C[i].num;
		C[i].num=temp;
	}
}

int main(){
	card C[54];
	shuffle(C);
	for(int i=0;i<54;i++){
		cout <<C[i].num<<endl;
	}
}
