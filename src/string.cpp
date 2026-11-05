#include<iostream>
using namespace std;

void upper(char  text[]){
    int counter = 0;
    while (text[counter] != '\0')
    {
        if(text[counter] >= 'a' && text[counter] <= 'z'){
                    text[counter] -= 32; 
        }
        std::cout<<text[counter];
        counter++;
    }

    
}

void lowr(char  text[]){
    int counter = 0;
    while (text[counter] != '\0')
    {
        if(text[counter] >= 'A' && text[counter] <= 'Z'){
                    text[counter] += 32; 
        }
        std::cout<<text[counter];
        counter++;
    }
}

int lenght(char text[]){
    int counter = 0;
    while (text[counter] != '\0')
    {
        counter++;
    }
    return counter;
    
}

void stringCompare(char  word1[] , char  word2[]){
    if(lenght(word1)>lenght(word2)){
        cout<<word1<<" is bigger";
    }else{
         cout<<word2<<" is bigger";
    }
}



void convertToBinary( char * word1 ){

    int counter = 0;
    int ascii = 0;
    int binary = 0;
    int size = 8;
    int arr[size] = {0};
    
    while(word1[counter] != '\0'){

        ascii=  (int)word1[counter];      
        while(ascii != 0){
            binary = ascii%2;
            ascii= ascii/2;  
            arr[size - 1] = binary;
            size--;
        }

      cout<<" ";
      for(int i = 0; i< 8 ; i++){
        cout<<arr[i];
      }

      size = 8;
      counter++;
    }
 
}

char* stringCopy(char  word1 []){
   static char arr[100] = {0};
   int counter = 0;
   while (word1[counter] != '\0')
   {
    
    arr[counter] = word1[counter];
    counter++;
   }

    return arr;
}

char* concat(char word1[], char word2[]){

    static char arr[200] = {0};

    int counter = 0;
    int counterW1 = 0;
    while (word1[counterW1] != '\0')
    {
    
        arr[counter] = word1[counterW1];
        counter++;
        counterW1++;
    }
    
    
    arr[counter] = ' ';
    counter++;
    
    int counterW2 = 0;
    while (word2[counterW2] != '\0')
    {
    
        arr[counter] = word2[counterW2];
        counter++;
        counterW2++;
    }

    return arr;

      
}

