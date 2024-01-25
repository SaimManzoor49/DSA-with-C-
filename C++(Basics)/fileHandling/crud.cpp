#include<iostream>
#include<string>
using namespace std;

constexpr  int maxBuffer = 1024;

int main(){

static const char * fileName = "myFile.txt";
static const char * ReName = "myFile1.txt";

// FILE * fh = fopen(fileName,"w");
// fclose(fh);

// rename(fileName,ReName);
// remove(ReName);

// static const char * text = "my data";
// FILE * fh = fopen(fileName,"w");
// FILE * fh = fopen(fileName,"a");

// fputs(text,fh);


char buf[maxBuffer];

FILE * fh = fopen(fileName,"r");

while(fgets(buf,maxBuffer,fh)){
    fputs(buf,stdout);
}
fclose(fh);

return 0;
}
