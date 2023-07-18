#include <iostream>
#include <cstring>
using namespace std;

const int TOP = 100;

class Antrian {
    private:

    int front;
    int rear;
    int count;
    public : 
    int arr[TOP];
    Antrian (){
        front = 0;
        rear = TOP - 1;
        count = 0;
    }

    void enqueue (int x){
        if (count >= TOP){
            cout <<"Antiran penuh." <<endl;
            return;
        }
        rear = (rear + 1) % TOP;
        arr[rear] = x;
        count++;
    }

    int peek (){
        if (count <= 0){
            cout <<"Antrian kosong."<<endl;
            return -1;
        }
        return arr[front];
    }

    int size(){
        return count;
    }
};
int main(){
        Antrian q;
        int noTicket;
        char input;

        cout <<"Masukkan nomor ticket : ";
        cin >>noTicket;

        q.enqueue(noTicket);
        cout <<"Lihat antrian? (Y/N).";
     cin >> input;
     if (input == 'Y'|| input == 'y')
       cout << q.peek();
     return 0;
}