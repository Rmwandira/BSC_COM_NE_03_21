#include<iostream>
#include<fstream>
#include<cstring>
 using namespace std;
 #define OUT 0
 #define IN 1
   int vowelcount(char*sptr){
        int count = 0;
        while((*sptr) != '\0'){
            if(*sptr == 'a' || *sptr == 'e'|| *sptr == 'i' || *sptr == 'o' || *sptr == 'u' || *sptr =='A'){
                count++;}
                sptr++;}
            
            return count;
        
        }
   int countWords(char*str, int n){
     if (n == 0){
        return 0;}
        int wordCount = 0;
        int state = OUT;
         for(int i = 0; i<n; i++){
            if(str[i] == '\\') {
      i++; // Skip next character (after backslash)
      continue;
    }

    // If the current character is a word character
    if (isalnum(str[i])) {
      // If previous state was OUT, increment word count and change state to IN
      if (state == OUT) {
        wordCount++;
        state = IN;
      }
    }
    // If the current character is not a word character
    else {
      // Change state to OUT
      state = OUT;
    }
  }

  return wordCount;
}

    void reverseStr(string& reverse){
    

    int n = reverse.length();
 
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(reverse[i], reverse[n - i - 1]);
} 
void capitalizeSecondLetter(string words[], int size) {
    for (int i = 0; i < size; ++i) {
        if (words[i].length() > 1) {
            words[i][1] = toupper(words[i][1]);  // Convert second letter to uppercase if possible
        }
    }
}
        
  int main(){ 
    string fileData;
    ofstream myFile("tchoxy.txt");
    ifstream in("tchoxy.txt");
    if(myFile.is_open()){
        myFile<<" This is the Adavnced Computer Programming Module"<<endl;
    while(!in.eof()){
        string line;
        getline(in, line);
       
        cout<<line<<endl;
        fileData = line;
    
        cout<<fileData<<endl;
    }
    myFile.close();
    } 
    
    char str[] = " This is the Adavnced Computer Programming Module";
    cout<<"count number of vowels in the string word "<<fileData<<"is : "<<vowelcount(str)<<endl; 
   
    cout << "Number of words: " << countWords(str, strlen(str)) << endl;
    
    string reverse = " This is the Adavnced Computer Programming Module";
    reverseStr(reverse);
    cout << reverse<<endl; 

    string words[] = {" This",  "is", "the", "Adavnced", "Computer", "Programming", "Module"};
    int size = sizeof(words) / sizeof(words[0]);

    capitalizeSecondLetter(words, size);

    for (const auto &word : words) {
        cout << word <<", ";
    }
   
    }
    
    