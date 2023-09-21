#include  <stdio.h>
#include <stdlib.h>
#include   <time.h>
#include  <conio.h>
#define true 1


/*
    Author: @Everyone
*/    

int main()
{

     char giveCompTurn(void);
     char comp_turn;
     
     void startGame(void);
     void delay(unsigned int);
     
     printf("--- Welcome to Rock,Paper && Sciecr --- \n\n");
     printf("Game rule's\n1.User R or r for Rock\n2.Use P or p for paper\n3.Use S or s for scicer\n\n@Every win 10+ point\n@Every loss will -10\n\n");
     
     char ch;
     
     int round = 0;
     int cScore = 0,uScore = 0;
     int wrongChoice = 0;
     
     while(true)    {
     
     
     printf("\n\n--- Round %d ---\n\n",round+1);
     
     printf("Your turn: ");
     ch = getch();
     
     if((ch != 's' && ch != 'S') && (ch != 'p' && ch != 'P') && (ch != 'r' && ch != 'R'))
         goto come;
     
     comp_turn = giveCompTurn();
     
     if((ch == 'r' || ch == 'R'))    {
     
         if(comp_turn == 'p')    {
         
         
             printf("\nYou enter: Rock\n");
             printf(" Computer: Paper\n\n");
         
             printf("\t--- [Winner is Computer] ---\n\n");  
             getch();
         
             cScore += 10;
         
             if(uScore != 0)
             uScore -= 10;
             round++;
                 
             
             printf("    User score: %3d\n",uScore);
             printf("Computer score: %3d\n\n",cScore);
         
             continue;
         }    
         
         else if(comp_turn == 's')    {
     
             printf("\nYou enter: Rock\n");
             printf(" Computer: Sciecer\n\n");
         
          
             printf("\t--- [You win,Congratulations...] ---\n\n");  
         
             getch();
         
             if(cScore != 0)
                 cScore -= 10;
         
                 uScore += 10;
                 round++;
                 
             
                 printf("    User score: %3d\n",uScore);
                 printf("Computer score: %3d\n\n",cScore);
         
                 continue;
               
         }    
     
         else    {
         
            printf("\n\n--- It is an draw ---\n\n");
            printf("Two of you having get Rock by you\n\nScore is not added\n\n");
       
            printf("    User score: %3d\n",uScore);
            printf("Computer score: %3d\n\n",cScore);
         }    
         
     }
     
     
     else if((ch == 'p' || ch == 'P'))    {
         
          if(comp_turn == 'p')    {
         
         
              printf("\n\n--- It is an draw ---\n\n");
              printf("Two of you having get Paper\n\nScore is not added\n\n");
       
              printf("    User score: %3d\n",uScore);
              printf("Computer score: %3d\n\n",cScore);
              
              continue;
              
         }    
         
         else if(comp_turn == 's')    {
     
             printf("\nYou enter: Paper\n");
             printf(" Computer: Sciecer\n\n");
         
          
             printf("\t--- [Winner is Computer] ---\n\n");  
         
             getch();
         
             if(uScore != 0)
                 uScore -= 10;
         
                 cScore += 10;
                 round++;
                 
             
                 printf("    User score: %3d\n",uScore);
                 printf("Computer score: %3d\n\n",cScore);
         
                 continue;
               
         }    
         
         else if(comp_turn == 'r')    {
             
              printf("\nYou enter: Paper\n");
              printf(" Computer: Rock\n\n");
         
          
              printf("\t--- [You win,Congratulations...] ---\n\n");  
         
              getch();
         
              if(cScore != 0)
                 cScore -= 10;
         
                 uScore += 10;
                 round++;
                 
             
                 printf("    User score: %3d\n",uScore);
                 printf("Computer score: %3d\n\n",cScore);
         
                 continue;
                 
         }  
         
         
     }  
     
     else if((ch == 's' || ch == 'S'))    {
         
         if(comp_turn == 's')    {
         
         
             printf("\n\n--- It is an draw ---\n\n");
             printf("Two of you having get Sciecer\n\nScore is not added\n\n");
       
             printf("    User score: %3d\n",uScore);
             printf("Computer score: %3d\n\n",cScore);
         
             continue;
         }    
         
         else if(comp_turn == 'p')    {
     
             printf("\nYou enter: Sciecer\n");
             printf(" Computer: Paper\n\n");
         
          
             printf("\t--- [You win,Congratulations...] ---\n\n");  
         
             getch();
         
             if(cScore != 0)
                 cScore -= 10;
         
                 uScore += 10;
                 round++;
                 
             
                 printf("    User score: %3d\n",uScore);
                 printf("Computer score: %3d\n\n",cScore);
         
                 continue;
               
         }    
     
         else if(comp_turn == 'r')    {
             
             printf("\nYou enter: Sciecer\n");
             printf(" Computer: Rock\n\n");
         
          
             printf("\t--- [Winner is Computer] ---\n\n");  
         
             getch();
         
             if(uScore != 0)
                 uScore -= 10;
         
                 cScore += 10;
                 round++;
                 
             
                 printf("    User score: %3d\n",uScore);
                 printf("Computer score: %3d\n\n",cScore);
         
                 continue;
         }   
     }
     
     else    {
         
         if(cScore == 0 && uScore == 0)    {
             
             come:
             printf("\n\n You enter wrong choice \n\n");
             
             printf("To start game from scratch-> Press 1(Yes) or 0(No)\n>>> ");
             scanf("%d",&wrongChoice);
             
             if(wrongChoice == 1)    {
             
                 printf("\n\n Re-Starting the game");
                 
                 for(int m = 0; m <= 5; m++)    {
                     
                     
                     
                     
                     putchar('.');
                     
                     fflush(stdout);
                     sleep(1);
                     
                     
                 }    
                 
                 getchar();
                 clrscr();
                 continue;
                 
             } //end if
             
             else    {
                 
                 clrscr();
                 printf("\n\n--- Final score ---\n\n");
                 
                 printf("User have %d score\n\n",uScore);
                 printf("Computer have %d score\n\n",cScore);
                 
                 if(uScore > cScore)
                     printf("\n\n Brother,you have the Higher score....\n\n");
                 else if(cScore > uScore)
                     printf("\n\n Computer have high score \n\n");  
                 else 
                     printf("\n\n Same same sim sim .....\n\n");
                     break;
                           
                     
             }      
         } //end if
         
     } //end else if 
     
   }  //end while
                     printf("\n\n Finish \n\n");
                     return 0;
                 
}//end main 




          /*
              Delay function for latency test
          */
          
          void delay(unsigned int mlscnd)    {
              
              clock_t start = clock(),end; 
              
              end = clock();
              
              while(clock() < ((end-start) + mlscnd));
              
          } //end delay
          
          
          
          /* 
              Give any random number 
              From 1 to 3;
          */
          
          char giveCompTurn(void)    {
              
              srand(time(NULL));
              
              int num = ((rand() % 80) + 1);
              
              if(num >= 0 && num <= 33)
                  return 'r';
                  
              else if(num >= 33 && num <= 55)
                  return 'p';
                  return 's';
                  
          } //end giveCompTurn                 
          
                 







                
     
     
     
     
     
     
                     
                 
             
             
             
             
     
     
     
     
     
         
         
         
         
          
         
         
     
     
          
             
     
         
            
         
         
         
     
     
     
     
            
         
         
         
         
         
         
         
         
             
         
     
     
     