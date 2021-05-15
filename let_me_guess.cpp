#include<iostream>

#include<string>

using namespace std;


class cGame
{
  protected:

int row = 10;

int coloum = 10;

int board [10][10] ;

int fruits = 20;

int score=0;



public:

  void initialise()

  {
     for (int i=0;i<row;i++)
     {

         for(int j=0;j<coloum;j++)

         {
            board[i][j] = 0;
         }

         cout<<endl;
     }
  }



  void frulise ()

 {

     for ( int i=0 ; i<fruits ; i++ )

     {

     int a = rand() % row;

     int b = rand() % coloum;

     board[a][b] = 1;


  }
}
  void show1()
  {

     for (int i=0;i<row;i++)
     {

         for(int j=0;j<coloum;j++)

         {
            cout<<board[i][j]<<" ";
         }

         cout<<endl;
     }
  }




  int hit(int a, int b)
  {
      if (board[a][b] == 1)
      {
          score++;

          cout<<" You are right ! please keep moving "<<endl;

          cout<<" score: "<< score<<endl;
      }

      else{
            cout<<" oops! wrong guess  "<<endl<<" better luck next time ;"<<endl;
            cout<<" score remains : "<< score<<endl;
      }

    return score;
  }

  int scoreCount (int b)
  {
      if(b>=3)
      {
          return 1;
      }

      return 0;
  }

};

int main ()
{
    cout<< "Welcome to the game of position guessing in which you are given 5 chances Out of which if your 3 or more guesses are right then u win otherwise lose"<<endl<<" lets play -> ";

    cGame player;

    player.initialise();
    //player.show();



    player.frulise();




    int i=0;
    int c;

    while (i<5)

   {

    int a, b;

    cout<<" Enter the value of coordinates in 10x10 board where you want to guess: like 2 3 or 5 7 if your guess are same:)" <<endl;
    cout<<" each numeric should lie within [1,10]: "<<endl;
    cout<<" ALL THE BEST"<<endl;

    cin>>a>>b;


     c = player.hit(a,b);

     i++;


   }


   int d = player.scoreCount(c);

    if(d==1)
    {
    cout<<" congratulation you have won "<<endl;
    }

    else {

        cout<<endl<< "************************** YOU HAVE LOST THE GAME ;)*********************           "<<endl;
    }

      cout<<endl<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl<<endl<<" you may check your guesses below "<<endl;


   player.show1();

    return 0;


}




























