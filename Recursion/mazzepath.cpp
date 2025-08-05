#include<iostream>
using namespace std;
int maze(int sr,int sc,int er, int ec){
    if(sc>ec || sr>>er) return 0;
    if(sc==ec && sr==er) return 1;
    int rightways = maze(sr,sc+1,er,ec);
    int downways = maze(sc+1,sr,ec,er);
    return rightways + downways ;
}
int main(){
    int sr,sc,er,ec;
    cin >> sr>>sc>>er>>ec;
    cout << maze(sr,sc,er,ec);
}