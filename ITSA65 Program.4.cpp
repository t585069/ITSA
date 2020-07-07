#include <iostream>
#include <stdlib.h> 
using namespace std;

struct node{
	
	int num;
	bool vis;
	struct node *next;
	
	
};

struct node *CreatNode(int n){
	int i=0;
	struct node *newNode, *curNode, *Head; 
	
	Head = (struct node *)malloc(sizeof(struct node));
	Head->num = 1;
	Head->vis = 0;
	Head->next = NULL;
	
	curNode = Head;
	for(i=2; i<=n; i++){
		newNode = (struct node *)malloc(sizeof(struct node));
		newNode->num = i;
		newNode->vis = 0;
		newNode->next = NULL;
		
		curNode->next = newNode;
		curNode = newNode;
		
	}
	
	curNode->next = Head; // �����۳s 

	
	return Head;
}

struct node *StartNode(struct node *Head, int start){
	struct node *curNode;
	
	curNode = Head;
	while(curNode->num != start){
		curNode = curNode->next;
	}
	
	return curNode;
}


int main(){
	int i=0, j=0, n=0, start=0, cnt=0;
	struct node *Head, *curNode;
	string str;
	
	while(cin >> n){
		
		cin >> start >> cnt;

		Head = CreatNode(n);
		curNode = StartNode(Head, start);
		
		for(i=0; i<n; i++){
			
			j=0;
			while(j != cnt){
				
			// �|���X��	
				if(curNode->vis != 1)
					j++;
					
				if(j == cnt)
					break;
			
				curNode = curNode->next;
								
			}
			
			if(i == n-1)
				cout<< curNode->num << endl;
			else{
				cout<< curNode->num << " ";
				curNode->vis = 1; // �X�� 
				
				curNode = curNode->next; // �X���̤U�@�H�}�l �B �|���X�� 
				while(curNode->vis != 0)
					curNode = curNode->next; // �Y�w�X���b��U�@�� 
							
			}	
		}		
	}
	

	return 0;
}

