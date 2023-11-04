#include<stdio.h>
#include<stdio.h>
#include<time.h>

void sports()
{
    printf("\n\nWELCOME TO 'SPORTS' SECTION!!\n");
        for(int i=1;i<=10;i++)
 {
  int n=0;
  switch(i)
  {
  case 1:
   printf("Q1:Who won first Indian to win Major Dhyanchand Khel ratna award?\n"
    "1)  Manpreet Singh      2) Viswanathan Anand\n"
    "3)  Mithali Raj         4) PK Banerjee\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==2)
   {
     printf("You have entered the correct answer.\n Now you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf(" You have entered the wrong answer.\nBetter Luck Next Time!!\nYou have earned no money :(");
    i=11;
   }
   break;
  case 2:
   printf("Q2:What is the current rank of Sunil Chhetri's for goal scorer?\n"
    "1)5           2)2\n"
    "3)1           4)3\n\n");
    printf("Enter your option:");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf(" You have entered the wrong answer!!\nBetter Luck Next Time!!\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 3:
   printf("Q3:Which team recently won treble in football?\n"
    "1)Manchester City      2)Barcelona\n"
    "3)Celtic               4)Manchester United\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf(" You have entered the wrong answer!!\nBetter Luck Next Time!!\nYou have earned Rs.%d00000 :)",i-1);
    i=11;
   }
   break;
    case 4:
   printf("Q4:How many medals India won in Asian Games?\n"
    "1)123     2)107\n"
    "3)76      4)145\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==2)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf(" You have entered the wrong answer!!\nBetter Luck Next Time!!\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 5:
   printf("Q5:Who among the following has been captain of an Indian hockey team at the Olympics in Tokyo 2020 Olmpyics?\n"
    "1) Vivek Sagar Prasad         3) Nilakanta Sharma\n"
    "2) Jaipal Singh Munda         4) Manpreet Singh\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!!\nBetter Luck NextTime!!\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 6:
   printf("Q6:Who won Javelin throw 2023 Asian Games?\n"
    "1) Nadeem              2) Kishore Kumar Jena\n"
    "3) Chao-Tsun Cheng     4) Neeraj Chopra\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!!\nBetter Luck NextTime.\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 7:
   printf("Q7: The following game was not invented in India?\n"
            "1) Gillidanda     2) Chaturanga\n"
            "3) Gutte          4) Senet\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!!\nBetter Luck Next!!\nTimeYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 8:
   printf("Q8:Who won the most Wimbledon titles?\n"
        "1) Djokovic              2) Rohan Bopanna\n"
        "3) Carlos Alcaraz        4) Rafael Nadal\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!!\nBetter Luck NextTime!!You have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 9:
   printf("Q9:The name of S Vijayalakshmi is famous in which among the following games/sports?\n"
    "1) Badminton    2) Table Tennis\n"
    "3) Chess        4) Hockey\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!!\nBetter Luck Next Time!!You have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 10:
   printf("Q10:The word 'Agricultural shot' is known to be used sometimes in which among the following sports?\n"
    "1) Cricket  2) Hockey\n"
    "3) Golf     4) Polo\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""CONGRATULATION YOU HAVE WON THE GAME\nYOUR TOTAL CASH PRIZE IS Rs.%d00000",i,i);
   }
   else
   {
    printf("You have entered the wrong answer!!\nBetter Luck Next Time\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
  }

 }
    return;
}

void gk()
{
    printf("\nWELCOME TO 'GENERAL KNOWLEGDE' SECTION!!\n");
         for(int i=1;i<=10;i++)
 {
  int n=0;
  switch(i)
  {
  case 1:
   printf("\nQ1:On which day Chandrayaan 3 landed on moon?\n"
    "1)13 JUL 2023          2) 23 AUG 2023\n"
    "3)13 JUL 2022          4) 16 AUG 2023\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==2)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf(" You have entered the wrong answer!!\n.Better Luck Next Time!!\nYou have earned no money :(");
    i=11;
   }
   break;
  case 2:
   printf("Q2:Which crabs are found on ghats of Maharastra?\n"
    "1) Sahyadriana tamhini        2) Hairy crabs\n"
    "3) Thackeray crabs            3) Blue Crab\n\n");
    printf("Enter your option:");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf(" You have entered the wrong answer.\nBetter Luck Next Time!!\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 3:
   printf("Q3:What is the slogan of G20 in english?\n"
    "1) Green earth safe earth          2) One Earth, One Family, One Future\n"
    "3) One nation , one family         4) Say no to corruption,commit nation\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==2)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf(" You have entered the wrong answer!!\nBetter Luck Next Time!!\nYou have earned Rs.%d00000 :)",i-1);
    i=11;
   }
   break;
  case 4:
   printf("Q4:Who is known as father of electronics and communication engineering?\n"
    "1) Thomas Adison                        2) Sanjeevi Rao\n"
    "3) Siddheshwari Prasad Chakravarti       4) Michael Faraday\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000\ :)\n""*Your Next Question is\n",i);
   }
   else
   {
    printf(" You have entered the wrong answer!!\nBetter Luck Next Time\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 5:
   printf("\nQ5:Who among the following was the author of declaration of American Independence?\n"
    "1) Thomas Jefferson         B) King James\n"
    "3) Theodore Roosevelt       D) Christopher Columbus\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!!\nBetter Luck NextTime!!\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 6:
   printf("Q6:Who formed 'AZAD HIND FAUJ'?\n"
    "1)Subhash Chandra Bose       2) Captain General Mohan Singh\n"
    "3) Shenbagaraman Pillai      4)  Rash Behari Bose\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!!\nBetter Luck Next Time\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 7:
   printf("Q8:Who assassinated John Kennedy ?\n"
    "1) Lee Harvey Oswald           2) Abraham Lincoln\n"
    "3) William Henry Harrison      4) Paul Biya\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!\nBetter Luck Next Time!!\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 8:
   printf("Q8:Which of the following is the largest volcano in solar system?\n"
    "1) Tamu Massif          2) Devana Chasma\n"
    "2) Theia Mons           4) Olympus Mons\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!\nBetter Luck Next Time!!\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 9:
   printf("Q9:In what year the 'THE GREAT DEPRESSION'started?\n"
    "1)1929    2)1926\n"
    "3)1935    4)1969\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!\nBetter Luck Next Time!!\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 10:
   printf("Q10:Who design the map of Partion of India\n"
     "1) Mount Badthen    2) Sir Cyril Radcliff\n"
     "3) Queen Elizbeth   4) Patrick Baitman\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==2)
   {
     printf("You have entered the correct answer :) \n\n\n""CONGRATULATION YOU HAVE WON THE GAME!!\nYOUR TOTAL CASH PRIZE IS Rs.%d00000\n\n",i,i);
   }
   else
   {
    printf("You have entered the wrong answer!\nBetter Luck Next Time!!\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
  }
 }
    return;
}
void fun()
{
    printf("\n\nWELCOME TO 'FUN' SECTION!!\n\n");
    for(int i=1;i<=10;i++)
 {
  int n=0;
  switch(i)
  {
  case 1:
   printf("Q1:Which of the leaning tower never stood straight?\n"
   "1) Eiffle tower      2) Pisa tower\n"
   "3) Hillbrow tower    4) Juche tower\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==2)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf(" You have entered the wrong answer!!\nBetter Luck Next Time!!\nYou have earned no money :(");
    i=11;
   }
   break;
  case 2:
   printf("Q2:First ever animal to orbit the earth?\n"
   "1) Dogs         3) Giraffe\n"
   "3) Kangaroo     4)Cats\n\n");
    printf("Enter your option:");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf(" You have entered the wrong answer.\nBetter Luck Next Time!!\nYou have earned Rs.%d00000\n",i-1);
    i=11;
   }
   break;
  case 3:
   printf("Q3: Which of the country seems wider than moon?\n"
   "1) London         2) Brazil\n"
   "3) South Korea    4) Australia\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf(" You have entered the wrong answer!!\nBetter Luck Next Time!\nYou have earned Rs.%d00000 :)",i-1);
    i=11;
   }
   break;
    case 4:
   printf("Q4:What makes astronaut grow taller in space?\n"
    "1) Change in gravity              3) Change in atmosphere\n"
    "3) Changes in spinal column       4) Change in gases\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf(" You have entered the wrong answer!\nBetter Luck Next Time!!\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 5:
   printf("Q5:Tickling this animal makes them laugh?\n"
    "1) Rats   2) Giraffe\n"
    "3) Hippo  4)Cats\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answer!!\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!!\nBetter Luck NextTime!!\nYou have earned Rs.%d00000\n",i-1);
    i=11;
   }
   break;
  case 6:
   printf("Q6:Which of the species can predict earthquake beforehand?\n"
    "1) Trees       2) Snakes\n"
    "3) Crockodile  4) Apes\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==2)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!\nBetter Luck Next Time!!\nYou have earned Rs.%d00000\n",i-1);
    i=11;
   }
   break;
  case 7:
   printf("Q7:Which of the following species do not use eath's magnetic field to know their location?\n"
    "1)  Tuna    2) Birds\n"
    "3) Crabs    4) Mud snail\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!\nBetter Luck Next Time!!\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 8:
   printf("Q8:Which gas works against earth's gravity?\n"
    "1) Sulphur     2) Argon\n"
    "3) Helium      4) Nitrogen\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!\nBetter Luck Next Time!!\nYou have earned Rs.%d00000\n",i-1);
    i=11;
   }
   break;
  case 9:
   printf("Q9:Which among the following is not correctly matched pair? (Countries-National Game )\n"
    "1) USA-Baseball          2) Pakistan-Field Hockey\n"
    "3) China-Table Tennis    4) All are correct\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!\nBetter Luck Next Time!!\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 10:
   printf("Q10:Who has designed the trophy of women's fifa world?\n"
    "1) William Sawaya     2) Formiga\n"
    "3) Marta              4) Sun Wen\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""CONGRATULATION YOU HAVE WON THE GAME!!!!\nYOUR TOTAL CASH PRIZE IS Rs.%d00000 :)\n\n",i,i);
   }
   else
   {
    printf("You have entered the wrong answer!Better Luck Next Time!!\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
  }
 }
    return;
}
void mixed()
{
    printf("\n\nWELCOME TO 'MIXED' SECTION!!\n");
     for(int i=1;i<=10;i++)
 {
  int n=0;
  switch(i)
  {
  case 1:
   printf("Q1:Whats the capital of Spain?\n"
    "1)Barcelona   2)Madrid\n"
    "3)Milan       4)Munich\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==2)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf(" You have entered the wrong answer!!\nBetter Luck Next Time!!\nYou have earned no money :(" );
    i=11;
   }
   break;
  case 2:
   printf("Q2:Who is the Mother of RAMA in Ramayana?\n"
    "1)Kousalya    2)Kaikai\n"
    "3)Sumitra     4)Mantra\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n ",i);
   }
   else
   {
    printf(" You have entered the wrong answer!!\nBetter Luck Next!!\nTime You have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 3:
   printf("Q3:What is the Symbol of Nazis(Army of Great Hitler)?\n"
    "1)Cross    2)Skull and Bones\n"
    "3)Owl      4)Swastika\n\n");
    printf("Enter your option:");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is \n",i);
   }
   else
   {
    printf(" You have entered the wrong answer!!\nBetter Luck Next Time\nYou have earned Rs.%d00000 :)",i-1);
    i=11;
   }
   break;
  case 4:
   printf("Q4:Who among these is not an Railway Minister?\n"
    "1)Mamtha Banerjee    2)Lal Bahadur Shastri\n"
    "3)Geetha Mukerjee    4)George Fernandis\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf(" You have entered the wrong answer!\nBetter Luck Next Time!!\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 5:
   printf("Q5:Who Correctly Answered to Yaksha's Questions?\n"
    "1)Drona          2)Abimanyu\n"
    "3)Yudishtira     4)Arjuna\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!!\nBetter Luck Next Time\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 6:
   printf("Q6:Who Heads Reserve Bank of India?\n"
    "1)Finance Minister         2)Commissioner\n"
    "3)Chief Bank Manager      4)Governor\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!\nBetter Luck Next Time!\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 7:
   printf("Q7)Which of these Animals Laughs?\n"
    "1)Monkey     2)Tiger\n"
    "3)Giraffe    4)Hyna\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!\nBetter Luck Next Time!!\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 8:
   printf("Q8:Which is the system of Governance in China?\n"
    "1)One Party   2)Communalism\n"
    "3)Monarchy    4)Democratic\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!!\nBetter Luck Next Time!!\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
   break;
  case 9:
   printf("Q9:How many Rings does Olympic Symbol have?\n"
    "1)3    2)2\n"
    "3)6    4)5\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.%d00000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!\nBetter Luck Next Time !!\nYou have earned Rs.%d00000\n",i-1);
    i=11;
   }
   break;
  case 10:
   printf("Q10:Who patronised Kalidas?\n"
    "1)Akbar              2)Chandra Guptha\n"
    "3)Vikrama Aditya     4)Krishna Devaraya\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==3)
   {
printf("You have entered the correct answer.\n :)\n\n""CONGRATULATION YOU HAVE WON THE GAME\nYOUR TOTAL CASH PRIZE IS Rs.%d00000\n\n",i,i);
   }
   else
   {
    printf("You have entered the wrong answer!!\nBetter Luck Next Time!!\nYou have earned Rs.%d00000 :)\n",i-1);
    i=11;
   }
  }
 }
    return;
}
void chai()
{
    printf("\n\nWELCOME TO 'CHAI KAM MASALA JYADA' SECTION!!\n");
       for(int i=1;i<=10;i++)
 {
  int n=0;
  switch(i)
  {
  case 1:
   printf("Q1:A shrimp's heart resides in which of his body part?\n"
    "1) Legs          2) Arms\n"
    "3) Head          4) Stomach\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.200000 :)\n\n""*Your Next Question is\n");
   }
   else
   {
    printf(" You have entered the wrong answer!\nBetter Luck Next Time!\nYou have earned no money :(");
    i=11;
   }
   break;
  case 2:
   printf("Q2:What is a shape of poop of Wombats?\n"
     "1) Square       2) Rectangle\n"
     "3) Circle        4) Cube\n\n");
    printf("Enter your option:");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.400000 :)\n\n""*Your Next Question is\n");
   }
   else
   {
    printf(" You have entered the wrong answer!!\nBetter Luck Next Time!!\nYou have earned no money :(");
    i=11;
   }
   break;
  case 3:
   printf("Q3:Which part of human part body that cannot heal themselves.\n"
    "1) Cornea        2) Tongue\n"
    "3)  Mouth        4) Teeth\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.600000 :)\n\n""*Your Next Question is\n");
   }
   else
   {
    printf(" You have entered the wrong answer!!\nBetter Luck Next Time!!\nYou have earned no money :(");
    i=11;
   }
   break;
  case 4:
   printf("Q4:What is the real name for a hashtag?\n"
    "1) Octothrope               2) Hash to\n"
    "3) To tag with hash         4) Enhypen\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.800000 :)\n\n""*Your Next Question is\n");
   }
   else
   {
    printf(" You have entered the wrong answer!!\nBetter Luck Next Time!!\nYou have earned no money :(");
   }
   break;
  case 5:
   printf("Q5:A long with finger prints which of the species have tongue prints?\n"
    "1) Birds         2) Humans\n"
    "3) Fishes        4) Animals\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.1000000 :)\n\n""*Your Next Question is\n");
   }
   else
   {
    printf("You have entered the wrong answer!!\nBetter Luck NextTime!!\nYou have earned no money :(");
    i=11;
   }
   break;
  case 6:
   printf("Q6:Cat urine glows under a black light?\n"
    "1) True        2) Partially true\n"
    "3) False       4) Partially false\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.1200000 :)\n\n""*Your Next Question is\n");
   }
   else
   {
    printf("You have entered the wrong answer!!\nBetter Luck Next Time!!\nYou have earned no money :(");
    i=11;
   }
   break;
  case 7:
   printf("Q7:Freedom Fighter Shaheed Bhagat Singh was associated with which of the following Organisations\n?"
    "1) The Swaraj Party                               2) Indian National Congress\n"
    "3) Hindustan Socialist Republican Association     4) Both A and B options\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==4)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.1400000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!!\nBetter Luck Next Time!!\nYou have earned no money :(");
    i=11;
   }
   break;
  case 8:
   printf("Q8:Who is father of Blue Revolution?\n"
    "1) Hiralal Chaudhuri    2) Monkomb Sambasivan Swaminathan\n"
    "3) Nirpakh Tutaj        4) Dr Arun Krishnan\n\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==1)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.1600000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!!\nBetter Luck Next Time!!\nYou have earned no money :(");
    i=11;
   }
   break;
  case 9:
   printf("Q9:Where were the first Asian Games held?\n"
          "1. Jakarta     2. Kathmandu\n"
          "3. New Delhi   4. Islamabad\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answer.\nNow you have won Rs.1800000 :)\n\n""*Your Next Question is\n",i);
   }
   else
   {
    printf("You have entered the wrong answer!\nBetter Luck Next Time!!\n\nYou have earned no money :(");
    i=11;
   }
   break;
  case 10:
   printf("Q10:Who patronised Kalidas?\n"
          "1.Akbar          2.Chandra Guptha\n"
          "3.VikramaAditya  4.Krishna Devaraya\n");
   printf("Enter your option:");
   scanf("%d",&n);
   if(n==3)
   {
     printf("You have entered the correct answer.\n\n""CONGRATULATION YOU HAVE WON THE GAME!!\nYOUR TOTAL CASH PRIZE IS Rs.2000000\n\n");
   }
   else
   {
    printf("You have entered the wrong answer!!\nBetter Luck Next Time!\n\nYou have earned no money :(");
    i=11;
   }
  }
 }
    return;
}

int main()
{
printf("\t\t\t\t\tWELCOME TO OUR GAME :\n");

  printf  ("                                                       # #                                                 \n"
           "             #    #                                    #  #                                                \n"
           "             #  #         #    #      # #    #         #  #     #     #    # #####   # #      #            \n"
           "             # #         # #   #      # # #  #         # #     # #    # #  # #      #        # #           \n"
           "             #  #       #####  #      # #  # #         #  #   #####   #  # # #####  #  ###  #####          \n"
           "             #   #     #     #  #    #  #   ##         #  #  #     #  #   ## #      #   #  #     #         \n"
           "             #     #  #       #   # #   #    #         # #  #       # #    # #####   # #  #       #        \n \n"

  "#         #                               #   #                      #                          \n"
  " #       # #####   #### ##### #####       #  #      #               # #     #     #  # #       #     #    #  #####   | | |   \n"
  "  #     #  #      #       #     #         ##       # #             #   #    # # # #  #  #     # #    # #  #    #     | | |  \n"
  "   #   #   ###    ###     #     #         # #     #####           #######   #  #  #  # #     # # #   #  # #    #     | | |   \n"
  "    # #    #         #    #     #         #  #   #     #         #       #  #     #  #  #   #     #  #   ##    #     | | |   \n"
  "     #     ##### ####   #####   #         #   # #       #       #         # #     #  # #   #       # #    #  #####   : : :\n\n\n     \n"

);

char section;


    printf("The game contains 4 sections:\n\tA.Sports\n\tB.General Knowlegde\n\tC.Fun\n\tD.Mixed\nand the most interesting section but equally twisted one!\n\tE.Chai Kam Masala Jyada\n");
    printf("\n\nBelow are the rules for the game:\n\t1.you have to select any one of your favourite section first.\n\t2.Each correct question will reward you with 1 lakh rupees.\n\t3.But here is the twist for our most spiciest section(Chai Kam Masala Jyada):\n\t\tEach correct answer in this section is worth 2 lakh ruppes....\nBut the twist here is if there is any wrong answer to a question then the game will be stopped immediately and you will loose all the money you have earned in this section.\n");
    printf("\n \t \t \t \t \t\t\t \t  SO SELECT WISELY!!!!\n\n");
    printf("PRESS:\n'A' to play in the 'Sports' sections.\n'B' to play in the 'General Knowledge' section\n'C' To play in the 'Fun' section\n'D' to play in the 'Mixed' section\n'E' to play in the 'Chai Kam Masala Jyada' section\n\n");

    printf("Enter (A,B,C,D,E):\n");
    scanf("%c", &section);
    switch(section)
    {
        case 'A':

            sports();
            break;

        case 'B':

            gk();
            break;

        case 'C':

            fun();
            break;

        case 'D':
            mixed();
            break;

        case 'E':

            chai();
            break;

        default:
            printf("Error!! PLS ENTER PROPER LETTER.");
    }

    return 0;

 }
