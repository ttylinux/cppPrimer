#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
  int aCnt = 0;
  int eCnt = 0;
  int iCnt = 0;
  int oCnt = 0;
  int uCnt = 0;
 
  char value;
  while( cin >> value )
  {
     switch( value ){

         case 'a':
         case 'A':
                ++aCnt;
                break;
         case 'e':
         case 'E':
               ++eCnt;
               break;
         case 'i':
         case 'I':
               ++iCnt;
               break;
         case 'o':
         case 'O':
              ++oCnt;
              break;
         case 'u':
         case 'U':
              ++uCnt;
              break;
         
   
     }
     
  } 

  cout << "aCnt:"<<aCnt << endl;
  cout <<"eCnt:"<<eCnt<<endl;
  cout <<"iCnt:"<<iCnt<<endl;
  cout <<"oCnt:"<<oCnt<<endl;
  cout <<"uCnt:"<<uCnt<<endl;



return 0;
}