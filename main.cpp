#include "dictionary.h"

DICT dictionary;  //your dictionary 
WORD word;        // 
int count[MAX];   //tracks word frequency
int NumWords;
int badcount;

int main (void) {
    
    int pos;

    while (1) {
       word = GetNextWord();
       if ( 0 == word.size() )  {
           DumpDictionary(dictionary,count);
           break;
       }
       if ((pos = LocateWord(dictionary,word)) >=  0 ) 
           count[pos]++;
       else
           if (!InsertWord(dictionary,word)) cout << "dictionary full " << word << " cannot be added\n";
    }
    return 0;

}


