#include <iostream>

using namespace std;

int up=-1;
int staack[4];     


bool Empty()     
{
    if(up == -1){
        return true;
    }
    else{
        return false;
    }

}

bool full()     
{
    if(up == 3){
        return true;
    }
    else{
        return false;
    }
}
void push(int p){
    if(!full()){
        up=up+1;
        staack[up]=p;
    }
    else{
        cout<<" Is Full"<<endl;
    }

}

int pop(){
    if (Empty()){
        cout<<"Stack is empty.";
    }else {
        int x = staack[up];
        up = up -1;
        return x;
    }
}


int main()
{
    int e;
    cout<<"Hello my friend"<<endl<<"if you want enter number for push,please type the 0 Otherwise, enter 1:"<<endl;
    cin>>e;
    if(e==0){

  int y , x;
    cout<<"how many number will push?"<<endl;
    cin>>y;
   int a[x];
   cout<<"please enter numbers:"<<endl;
   for(x=0;x<y;x++){


   cin>>a[x];
   push(a[x]);
   }



    /*push(10);
    push(2);
    push(4);
    push(7);
    push(6);*/
    cout<<"Is pop :"<<pop();}
    else{
        cout<<"thanks"<<endl;
    }
    return 0;
}

