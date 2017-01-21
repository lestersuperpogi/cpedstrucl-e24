#include<iostream>
#include<iomanip>
#include<windows.h>
using namespace std;
class LinkedList{
struct Node {
int x;
Node *next;
};
public:
LinkedList(){
head = NULL;
}
void push(int val){
    Node *n = new Node();   
    n->x = val;             
    n->next = head;         

    head = n;              
}

int pop(){
    Node *n = head;
    int ret = n->x;
    head = head->next;
    //cout<<ret;
    delete n;
    return ret;
}
void display(){
Node *a = head;
Node *b = head;
while (b){
a=b;
cout << a -> x << endl;
b = a-> next;
}
}
private:
Node *head;
};
void mainMenu();
int main()
{
int choice, num, flag;
LinkedList list;
do
{
mainMenu();
cin>>choice;
switch(choice)
{
case 1:cout<<"Enter a number: ";
cin>>num;
list.push(num);
cout<<"Value Added!"<<endl; flag = 1; break; case 2: if(flag>0){
list.pop();
cout<<"Value deleted!"<<endl; flag--; } 
else { cout<<"Add a value first!"<<endl; } 
	break; case 3:exit(1); 
		break; case 4: if(flag>0){
		list.display();
			break;
}
else
{
cout<<"(EMPTY)/n"<<endl;
}
break;
}
}while(choice != 3);
return 0;
}
void mainMenu(){
	cout<<"[1] Push"<<endl;
	cout<<"[2] Pop"<<endl;
	cout<<"[3] EXIT"<<endl;
	cout<<"[4] Display Contents"<<endl;
	cout<<"Your choice: ";
}
