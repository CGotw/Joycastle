#include <bits/stdc++.h>
using namespace std;


//�����˿������ݽṹ 
struct card{
	int num;
};

//��ʼ���˿��� ,��1-54��ͬ�ı�Ŵ���ͬ���˿��� 
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
		int random=get_random(0,53);//ÿ��λ�ö�������һ��������������ϴ���Ǿ��ȷֲ��� 
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
