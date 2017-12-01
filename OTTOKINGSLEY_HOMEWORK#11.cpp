#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

bool ok(int q[], int col)
{

    int mp[3][3]={
           {0, 2, 1},
           {0, 2, 1},
           {1, 2, 0}};
    int wp[3][3]={
           {2, 1, 0},
           {0, 1, 2},
           {2, 0, 1}};

    int cMan, cWoman, nMan, nWoman;

    for(int  i = 0; i < col; i++) {
    	cMan = i;
        cWoman = q[i]; 
        nMan = col;
        nWoman = q[col];
        
        if(nWoman == cWoman){
        
           return false;
        }
    }

    for(int i = 0; i<col; i++) {
        cMan = i;
        cWoman = q[i]; //woman assigned to man i
        nMan = col;
        nWoman = q[col];

        if(mp[cMan][cWoman] > mp[cMan][nWoman] && wp[nWoman][cMan] < wp[nWoman][nMan]){
           return false;
        }

        if(mp[nMan][cWoman ] < mp[nMan][nWoman] && wp[cWoman][nMan] < wp[cWoman][cMan]){
           return false;
        }
    }

    return true;
};

void backtrack(int &col){
    col--;
    if(col == -1)
    {
       exit(0);
    }
}

void print(int q[]){

    static int count = 0;
    cout << "SOLUTION " << ++count << endl;
    cout << "Man Woman" << endl;
    for(int i =  0; i<3; i++){
        cout << " " << i << "    " << q[i] << endl;
    }
    cout << endl << endl;
}

int main()
{
    int q[3]; q[0]=0;
    int c=0;
    bool from_backtrack=false;

    while(true)
    {
        while(c<3)
        {
        if(!from_backtrack)
            q[c] = -1;
            while(q[c] < 3){
                q[c]++;
                if(q[c] == 3){
                    backtrack(c);
                    continue;
                }
                if(ok(q,c)) break;
            }
            c++;
            from_backtrack = false;
        }
        print(q);
        backtrack(c);
        from_backtrack=true;
    }
    return 0;
}


