#include <iostream>
using namespace std;
char arr[3][3];
int d=0;
int value=1;
char x,y,t;
void print_board1(int x,char arr[3][3]);
void print_board2(int y,char arr[3][3]);
int check_win(char arr[3][3]);

void print_board(char arr[3][3])
{
    char count='0';
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            arr[i][j]=count;
        count++;    
        }
    }
    for (int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++){
            cout<<"["<<arr[i][j]<<"]"<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    cout<<"Welcome to Tic Tac Toe"<<endl;
    print_board(arr);
    while(true){
        if(value==1)        //in case of X
        {
            cout<<"X's chance"<<endl;
            cout<<"enter the number you want to put X"<<endl;
            cin>>x;
            print_board1(x,arr);
            value=1-value;
            t=check_win(arr);
            if(t==-1)
            {
                cout<<"X won";
                break;
            }
        }
        else if(value==0)       //in case of O
        {
            cout<<"0's chance"<<endl;
            cout<<"enter the number you want to put 0"<<endl;
            cin>>y;
            print_board2(y,arr);
            value=1-value;
            t=check_win(arr);
            if(t==-1)
            {
                cout<<"O won";
                break;
            }
        }
    }
return 0;
}

void print_board1(int x,char arr[3][3])             //function for printng X zt the input place
{
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            if (arr[i][j]==x)
            {   
                arr[i][j]='X';
                cout<<"["<<arr[i][j]<<"]"<<" ";
            }
            else
            {
                cout<<"["<<arr[i][j]<<"]"<<" ";
            }
        }
        cout<<endl;
    }
}

void print_board2(int y,char arr[3][3])     //function for printing O at the input place 
{
    for(int i=0;i<3;i++)
    {
        for (int j=0;j<3;j++)
        {
            if (arr[i][j]==y)
            {   
                arr[i][j]='O';
                cout<<"["<<arr[i][j]<<"]"<<" ";
            }
            else
            {
                cout<<"["<<arr[i][j]<<"]"<<" ";
            }
        }
        cout<<endl;
    }
}
int check_win(char arr[3][3])     //function for checking  win
{
    // for rows
    for (int i=0;i<3;i++)
    {
        if (arr[i][0]==arr[i][1] && arr[i][1]== arr[i][2])
        {
            return -1;
        }
    }
    // for column
    for (int i=0;i<3;i++)
    {
        if (arr[0][i]==arr[1][i] && arr[1][i]== arr[2][i])
        {
            return -1;
        }
    }

    // for diagonal
    if (arr[0][0]==arr[1][1] && arr[1][1]==arr[2][2])
    {
        return -1;
    }
    else if (arr[0][2]==arr[1][1] && arr[1][1]==arr[2][0])
    {
        return -1;
    }
    else
    { 
    return 0;
    }
}