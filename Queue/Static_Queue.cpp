# include<iostream>
using namespace std;

int Q[5];
int front = 0;
int rear = 0;

// INSERT ELEMENT
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
// REMOVE ELEMENT 
void dequeue(){
    if (front == rear){
        cout<<"Queue is UNDERFLOW"<<endl;
    }
    else{
        cout << "Dequeued element: " << Q[front] << endl;
        front ++;
    }
}
//DISPLAY ELEMENTS 
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
   enqueue(40);
   enqueue(50);

   dequeue();
   dequeue();

   showQueue(); 

   return 0;

}