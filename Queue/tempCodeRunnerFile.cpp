# include<iostream>
using namespace std;

int Q[5];
int front = 0;
int rear = 0;

void enqueue(int x){
    if (rear == 5 )
    { 
        cout << "Queue is OVERFLOW"<<endl;
    
    }
    else{

        Q[rear] = x;
        rear++;
    }    
}
void showQueue(){
    for(int i=front; i<rear; i++){
        cout << Q[i] << " ";
    }
    cout << endl;
}
int main(){
   enqueue(10);
   enqueue(20);
   enqueue(30);

   showQueue(); 

   return 0;

}